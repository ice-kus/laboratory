#pragma once
#include <QtWidgets/QMainWindow>
#include <QtGui>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <string>

struct question
{
	QString quest;	// �������������� �����
	std::vector <QString> list_answer;	// �������� �������
	QString true_answer; // ���������� �����
	bool st;	// ��������� �� ������ � ������� ������������
};

struct result
{
	QString text;
	std::vector <float> M21;
	std::vector <float> M12;
};

result input_result(QString);

std::vector <question> input_list_question(QString);

std::vector <QString> input_list_file();

void encryption(QString);

void decryption(QString);