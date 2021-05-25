#pragma once

#include <QTextBrowser>
#include <QStackedWidget>
#include <QtWidgets/QMainWindow>
#include <QtGui>
#include <QMessageBox>
#include <QLogValueAxis>
#include <QLineSeries>
#include <QValueAxis>
#include <QChart>
#include <QChartView>
#include "ui_exercise.h"

class exercise : public QWidget
{
	Q_OBJECT

public:
	exercise(QWidget *parent = Q_NULLPTR);
	~exercise() {};
	bool check_string(QString str);
private:
	Ui::exercise ui;
	QString result;
signals:
	void go_ex_2();
	void go_ex_3();
	void finish();
public slots:
	void click_go_graph();
	void start();
	void click_go_ex_2();
	void click_go_ex_3();
	void click_go_finish();
	QString get_result() { return result; }
	void onAnchorClicked(std::vector <float>, std::vector <float>);
};
