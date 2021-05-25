#pragma once

#include <QWidget>
#include <QMessageBox>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ui_equipment.h"

class equipment : public QWidget
{
	Q_OBJECT

public:
	equipment(QWidget *parent = Q_NULLPTR);
	~equipment() {};
	bool check_string(QString str);
private:
	Ui::equipment ui;
	bool switch_1;
	bool switch_2;

public slots:
	void click_switch_1();
	void click_switch_2();
	void click_next();
	void click_instruction();
};
