#pragma once

#include <QTextBrowser>
#include <QStackedWidget>
#include <QtWidgets/QMainWindow>
#include <QtGui>
#include "ui_theory.h"

class theory : public QWidget
{
	Q_OBJECT

public:
	theory(QWidget *parent = Q_NULLPTR);
	~theory() {};
private:
	Ui::theory ui;
public slots:
	void click_go_theory(); // Переход к разделу "Общие сведения"
	void click_go_method(); // Переход к разделу "Методика измерений"
	void click_go_images(); // Переход к разделу "Изображения приборов"
};
