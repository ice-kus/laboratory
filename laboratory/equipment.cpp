#include "equipment.h"

equipment::equipment(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	switch_1 = false;
	switch_2 = false;
	ui.p_1_right->setVisible(false);
	ui.p_2_right->setVisible(false);
	QObject::connect(ui.switch_1, SIGNAL(clicked()), this, SLOT(click_switch_1()));
	QObject::connect(ui.switch_2, SIGNAL(clicked()), this, SLOT(click_switch_2()));
	QObject::connect(ui.next, SIGNAL(clicked()), this, SLOT(click_next()));
	QObject::connect(ui.instruction, SIGNAL(clicked()), this, SLOT(click_instruction()));
}

void equipment::click_instruction()
{
	QMessageBox msgBox;
	msgBox.setWindowTitle(QString::fromLocal8Bit("Инструкция"));
	msgBox.setText(QString::fromLocal8Bit("Для получения значений ЭДС, который отражаются на панели \"Осциллограф\", необходимо задать напряжение и частоту генератора на панели \"Звуковой генератор\", далее на панели \"ФПЭ-05\" задать расстояние между катушками, нажав на одну из 10 кнопок, также ниже с помощью кнопок переключения установить переключатели в нужное положение. После чего нажать кнопку \"Применить\". Вводить можно только числа. Знаком, разделяющим дробную и целую часть, является точка."));
	msgBox.exec();
}

void equipment::click_switch_1()
{
	if (switch_1)
	{
		switch_1 = false;
		ui.p_1_right->setVisible(false);
		ui.p_1_left->setVisible(true);
	}
	else
	{
		switch_1 = true;
		ui.p_1_right->setVisible(true);
		ui.p_1_left->setVisible(false);
	}
}

void equipment::click_switch_2()
{
	if (switch_2)
	{
		switch_2 = false;
		ui.p_2_right->setVisible(false);
		ui.p_2_left->setVisible(true);
	}
	else
	{
		switch_2 = true;
		ui.p_2_right->setVisible(true);
		ui.p_2_left->setVisible(false);
	}
}

bool equipment::check_string(QString str)
{
	bool check = false;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '.')
		{
			if (i == 0 || i == str.size() - 1 || check)
				return false;
			else
				check = true;
		}
		else
			if (str[i] < '0' || str[i]>'9')
				return false;
	}
	return true;
}

void equipment::click_next()
{
	if (ui.in_u->text() == "" || ui.in_f->text() == "")
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("Заданы не все показатели генератора сигналов"));
		msgBox.exec();
	}
	else if (!check_string(ui.in_u->text()) || !check_string(ui.in_f->text()))
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("<p>Введены некорректные значения!</p>"));
		msgBox.exec();
	}
	else if (!ui.p_1->isChecked() && !ui.p_2->isChecked() &&
		!ui.p_3->isChecked() && !ui.p_4->isChecked() &&
		!ui.p_5->isChecked() && !ui.p_6->isChecked() &&
		!ui.p_7->isChecked() && !ui.p_8->isChecked() &&
		!ui.p_9->isChecked() && !ui.p_10->isChecked())
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("Не задано расстояние между катушками"));
		msgBox.exec();
	}
	else if ((switch_1 && switch_2) || (!switch_1 && !switch_2))
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("Не верно установлен переключатель П1 или П2"));
		msgBox.exec();
	}
	else
	{
		double M;
		if (!switch_1 && switch_2)
			M = 42 + (double)(rand() % 20) / 10;
		else
			M = 37 + (double)(rand() % 20) / 10;
		double u = ui.in_u->text().toFloat(), f = ui.in_f->text().toFloat();
		if (ui.p_2->isChecked())
			M -= (30 + (double)(rand() % 6)) / 10;
		if (ui.p_3->isChecked())
			M -= 2 * (30 + (double)(rand() % 6)) / 10;
		if (ui.p_4->isChecked())
			M -= 3 * (30 + (double)(rand() % 6)) / 10;
		if (ui.p_5->isChecked())
			M -= 4 * (30 + (double)(rand() % 6)) / 10;
		if (ui.p_6->isChecked())
			M -= 5 * (30 + (double)(rand() % 6)) / 10;
		if (ui.p_7->isChecked())
			M -= 6 * (30 + (double)(rand() % 6)) / 10;
		if (ui.p_8->isChecked())
			M -= 7 * (30 + (double)(rand() % 6)) / 10;
		if (ui.p_9->isChecked())
			M -= 8 * (30 + (double)(rand() % 6)) / 10;
		if (ui.p_10->isChecked())
			M -= 9 * (30 + (double)(rand() % 6)) / 10;
		double E = 2 * 3.14 * f * u * M / 10000;
		int del = E * 10 + 1;
		ui.out_E->setText(QString::number(E).left(4));
		ui.out_E_del->setText(QString::number(del));
		ui.out_u->setText(QString::number(u));
	}

}
