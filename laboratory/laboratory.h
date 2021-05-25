#pragma once
#include <QDate>
#include <time.h> 
#include "ui_laboratory.h"
#include "theory.h"
#include "exercise.h"
#include "equipment.h"
#include "text_file.h"

class laboratory : public QMainWindow
{
	Q_OBJECT

public:
	laboratory(QWidget *parent = Q_NULLPTR);
	void save_result();
private:
	Ui::laboratoryClass ui;
	theory* window_theory;
	exercise* window_exercise;
	equipment* window_equipment;
	QString text_result;
	std::vector <QString> list_file;
	QString file_name;
	std::vector <question> list_question;
	int number_true_ans;
	question current_quest;
	result current_result;
signals:
	void go_ex_2();
	void go_ex_3();
	void finish();

public slots:
	void click_go_handbook();		// Открытие окна со справочной информацией
	void click_go_equipment();		// Открытие окна с собранной установкой
	void click_go_input_results();  // Открытие окна с вводом результата
	void signal_go_ex_2();			// Переход ко 2-му упражнению
	void signal_go_ex_3();			// Переход ко 3-му упражнению
	void signal_finish();			// Переход в меню (по окончанию 3-го упражнения)
	void click_go_test();			// Переход к тестированию перед выполнением ЛР
	void click_go_data_entry();		// Переход к вводу личных данных
	void click_go_instruction();	// Переход к просмотру инструкции по выполнению ЛР
	void click_go_menu();			// Переход в меню
	void click_answer();			// Обработка ответа на вопрос по теории безопасности
	void click_answer_tb();			// Обработка ответа на вопросы по теории
	void click_finish();
	void onAnchorClicked();
};
