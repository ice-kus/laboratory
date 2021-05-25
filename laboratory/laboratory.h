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
	void click_go_handbook();		// �������� ���� �� ���������� �����������
	void click_go_equipment();		// �������� ���� � ��������� ����������
	void click_go_input_results();  // �������� ���� � ������ ����������
	void signal_go_ex_2();			// ������� �� 2-�� ����������
	void signal_go_ex_3();			// ������� �� 3-�� ����������
	void signal_finish();			// ������� � ���� (�� ��������� 3-�� ����������)
	void click_go_test();			// ������� � ������������ ����� ����������� ��
	void click_go_data_entry();		// ������� � ����� ������ ������
	void click_go_instruction();	// ������� � ��������� ���������� �� ���������� ��
	void click_go_menu();			// ������� � ����
	void click_answer();			// ��������� ������ �� ������ �� ������ ������������
	void click_answer_tb();			// ��������� ������ �� ������� �� ������
	void click_finish();
	void onAnchorClicked();
};
