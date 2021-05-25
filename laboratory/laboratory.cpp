#include "laboratory.h"

using namespace std;

class no_input {};

laboratory::laboratory(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	list_file = input_list_file();
	file_name = "";
	text_result = "";
	number_true_ans = 0;
	window_theory = new theory();
	window_exercise = new exercise();
	window_equipment = new equipment();
	ui.stackedWidget->setCurrentWidget(ui.in_instruction);
	QObject::connect(window_exercise, &exercise::go_ex_2, this, &laboratory::go_ex_2);
	QObject::connect(window_exercise, &exercise::go_ex_3, this, &laboratory::go_ex_3);
	QObject::connect(window_exercise, &exercise::finish, this, &laboratory::finish);
	QObject::connect(this, SIGNAL(go_ex_2()), this, SLOT(signal_go_ex_2()));
	QObject::connect(this, SIGNAL(go_ex_3()), this, SLOT(signal_go_ex_3()));
	QObject::connect(this, SIGNAL(finish()), this, SLOT(signal_finish()));
	QObject::connect(ui.go_handbook, SIGNAL(clicked()), this, SLOT(click_go_handbook()));
	QObject::connect(ui.go_equipment, SIGNAL(clicked()), this, SLOT(click_go_equipment()));
	QObject::connect(ui.go_instruction, SIGNAL(clicked()), this, SLOT(click_go_instruction()));
	QObject::connect(ui.go_input_results, SIGNAL(clicked()), this, SLOT(click_go_input_results()));
	QObject::connect(ui.go_handbook_m, SIGNAL(clicked()), this, SLOT(click_go_handbook()));
	QObject::connect(ui.go_test, SIGNAL(clicked()), this, SLOT(click_go_test()));
	QObject::connect(ui.go_data_entry, SIGNAL(clicked()), this, SLOT(click_go_data_entry()));
	QObject::connect(ui.go_menu, SIGNAL(clicked()), this, SLOT(click_go_menu()));
	QObject::connect(ui.go_menu_2, SIGNAL(clicked()), this, SLOT(click_go_menu()));
	QObject::connect(ui.answer, SIGNAL(clicked()), this, SLOT(click_answer()));
	QObject::connect(ui.answer_tb, SIGNAL(clicked()), this, SLOT(click_answer_tb()));
	QObject::connect(ui.finish, SIGNAL(clicked()), this, SLOT(click_finish()));
	QObject::connect(ui.text_result, SIGNAL(anchorClicked(QUrl)), this, SLOT(onAnchorClicked()));
	ui.list_ans->setSelectionMode(QAbstractItemView::MultiSelection);
	for (int i = 0; i < list_file.size(); i++)
		ui.list_files->addItem(list_file[i]);
}

void laboratory::click_answer_tb()
{
	try
	{
		if (ui.list_ans->selectedItems().size() == 0)
			throw no_input();
		QString ans = "";
		QList<QListWidgetItem*>  lst;
		lst = ui.list_ans->selectedItems();
		for (int i = 0; i < lst.size(); i++)
			ans += lst[i]->text();
		QMessageBox msgBox;
		QString s;
		if (ans == current_quest.true_answer)
		{
			msgBox.setText(s.fromLocal8Bit("<p>Верно! :)</p>"));
			msgBox.exec();
			ui.num_quest->setText(QString::fromLocal8Bit("Вопрос ") + QString::number(6 - list_question.size()));
			ui.list_ans->clear();
			current_quest = list_question.back();
			list_question.pop_back();
			ui.text_quest->setHtml(current_quest.quest);
			for (int i = 0; i < current_quest.list_answer.size(); i++)
				ui.list_ans->addItem(current_quest.list_answer[i]);
			ui.num_quest_2->setVisible(false);
			ui.num_quest->setVisible(true);
			ui.answer->setVisible(true);
			ui.answer_tb->setVisible(false);
		}
		else
		{
			msgBox.setText(s.fromLocal8Bit("<p>Тест провален! Вы не допущены к лабораторной работе. Повторите правила техники безопасности и пройдите тест снова.</p>"));
			text_result += "<p>" + QString::fromLocal8Bit("Студент провалил контрольный тест (незнание правил техники безопасности).") + "</p>" + "\n\n";
			save_result();
			text_result = "";
			ui.stackedWidget->setCurrentWidget(ui.in_menu);
			msgBox.exec();
		}
	}
	catch (no_input)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("Не выбран ни один вариант ответа!"));
		msgBox.exec();
	}
}

void laboratory::click_answer()
{
	try
	{
		if (ui.list_ans->selectedItems().size() == 0)
			throw no_input();
		QMessageBox msgBox;
		QString s;
		ui.num_quest->setText(QString::fromLocal8Bit("Вопрос ") + QString::number(6 - list_question.size()));
		QString ans = "";
		QList<QListWidgetItem*>  lst;
		lst = ui.list_ans->selectedItems();
		for (int i = 0; i < lst.size(); i++)
			ans += lst[i]->text();
		if (ans == current_quest.true_answer)
		{
			number_true_ans++;
			QMessageBox msgBox;
			QString s;
			msgBox.setText(s.fromLocal8Bit("<p>Верно! :)</p>"));
			msgBox.exec();
		}
		else
		{
			QMessageBox msgBox;
			QString s;
			msgBox.setText(s.fromLocal8Bit("<p>Неверно! :(</p>"));
			msgBox.exec();
		}
		if (list_question.empty())
		{
			if (number_true_ans > 2)
			{
				msgBox.setText(s.fromLocal8Bit("<p>Тест пройден успешно! Удачного выполнения лабораторной работы!</p>"));
				ui.stackedWidget->setCurrentWidget(ui.in_laboratory);
			}
			else
			{
				msgBox.setText(s.fromLocal8Bit("<p>Тест провален! Вы не допущены к лабораторной работе. Повторите теорию и пройдите тест снова.</p>"));
				text_result += "<p>" + QString::fromLocal8Bit("Студент провалил контрольный тест (незнание теоретического материала).") + "</p>" + "\n\n";
				save_result();
				text_result = "";
				ui.stackedWidget->setCurrentWidget(ui.in_menu);
			}
			msgBox.exec();
		}
		else
		{
			ui.list_ans->clear();
			current_quest = list_question.back();
			list_question.pop_back();
			ui.text_quest->setHtml(current_quest.quest);
			for (int i = 0; i < current_quest.list_answer.size(); i++)
				ui.list_ans->addItem(current_quest.list_answer[i]);
		}
	}
	catch (no_input)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("Не выбран ни один вариант ответа!"));
		msgBox.exec();
	}
}

void laboratory::click_go_handbook()
{
	window_theory->show();
}

void laboratory::click_go_equipment()
{
	window_equipment->show();
	window_equipment->click_instruction();
}

void laboratory::click_go_instruction()
{
	ui.stackedWidget->setCurrentWidget(ui.in_instruction);
}

void laboratory::click_go_input_results()
{
	window_exercise->show();
}

void laboratory::click_go_test()
{
	try
	{
		if (ui.list_files->currentRow() == -1 || ui.list_files->selectedItems().size() == 0)
			throw no_input();
		ui.go_input_results->setVisible(true);
		ui.go_equipment->setVisible(true);
		window_exercise->start();
		window_theory->close();
		ui.list_ans->clear();
		ui.num_quest_2->setVisible(true);
		ui.num_quest->setVisible(false);
		ui.answer->setVisible(false);
		ui.answer_tb->setVisible(true);
		file_name = ui.list_files->item(ui.list_files->currentRow())->text();
		number_true_ans = 0;
		list_question = input_list_question(file_name);
		ui.stackedWidget->setCurrentWidget(ui.in_test);
		for (int i = 0; i < list_question.size(); i++)
			if (list_question[i].st)
				current_quest = list_question[i];
		for (int i = 0; i < list_question.size(); i++)
			if (list_question[i].st)
				list_question.erase(list_question.begin() + i);
		list_question.resize(5);
		ui.text_quest->setHtml(current_quest.quest);
		for (int i = 0; i < current_quest.list_answer.size(); i++)
			ui.list_ans->addItem(current_quest.list_answer[i]);
	}
	catch (no_input)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("Не выбран ни один файл!"));
		msgBox.exec();
	}
}

void laboratory::click_go_data_entry()
{
	ui.list_files->clearSelection();
	ui.stackedWidget->setCurrentWidget(ui.in_data_entry);
}

void laboratory::click_go_menu()
{
	ui.stackedWidget->setCurrentWidget(ui.in_menu);
}

void laboratory::signal_go_ex_2()
{
	ui.text_exercise_1->setVisible(false);
	ui.text_exercise_2->setVisible(true);
	ui.text_exercise_3->setVisible(false);
}

void laboratory::signal_go_ex_3()
{
	ui.text_exercise_2->setVisible(false);
	ui.text_exercise_3->setVisible(true);
}

void laboratory::signal_finish()
{
	ui.label_2->setVisible(true);
	ui.conclusion->setVisible(true);
	ui.finish->setVisible(true);
	ui.text_exercise_3->setVisible(false);
	ui.go_input_results->setVisible(false);
	ui.go_equipment->setVisible(false);
	text_result += window_exercise->get_result() + "\n";
}

void laboratory::click_finish()
{
	ui.label_2->setVisible(false);
	ui.conclusion->setVisible(false);
	ui.finish->setVisible(false);
	ui.text_exercise_1->setVisible(true);
	text_result += "<p style = \"margin-bottom : 20px;\"><b>" + QString::fromLocal8Bit("Вывод: ") + "</b>" + ui.conclusion->toPlainText() + "</p>";
	save_result();
	current_result = input_result(file_name);
	ui.text_result->setHtml(current_result.text);
	ui.stackedWidget->setCurrentWidget(ui.in_view_result);
	text_result = "";
	QMessageBox msgBox;
	QString s;
	msgBox.setText(s.fromLocal8Bit("<p>Результат выполнения сохранён!</p>"));
	msgBox.exec();
}

void laboratory::save_result()
{
	decryption(file_name);
	time_t t = time(0);
	QDateTime dt;
	dt.setTime_t(t);
	text_result += "<p>" + QString::fromLocal8Bit("Дата завершения: ") + dt.toString().left(9).right(2) + " " + dt.toString().left(6).right(3) + " " + dt.toString().right(4) + "</p>";
	text_result += "<p>" + QString::fromLocal8Bit("Время завершения: ") + dt.toString().right(13).left(8) + "</p>";
	text_result += "<p  align=\"center\">-----------------------------------------</p>";
	QFile file(file_name);
	if (file.open(QIODevice::Append))
		file.write(text_result.toUtf8());
	file.close();
	encryption(file_name);
}

void laboratory::onAnchorClicked()
{
	window_exercise->onAnchorClicked(current_result.M21, current_result.M12);
	window_exercise->show();
	ui.text_result->setHtml(current_result.text);
}