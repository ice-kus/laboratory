#include "exercise.h"

using namespace QtCharts;
using namespace std;

exercise::exercise(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.stackedWidget->setCurrentWidget(ui.ex_1);
	QObject::connect(ui.go_graph, SIGNAL(clicked()), this, SLOT(click_go_graph()));
	QObject::connect(ui.go_ex_2, SIGNAL(clicked()), this, SLOT(click_go_ex_2()));
	QObject::connect(ui.go_ex_3, SIGNAL(clicked()), this, SLOT(click_go_ex_3()));
	QObject::connect(ui.go_finish, SIGNAL(clicked()), this, SLOT(click_go_finish()));
}

bool exercise::check_string(QString str)
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

void exercise::start()
{
	ui.stackedWidget->setCurrentWidget(ui.ex_1);
}

void exercise::click_go_graph()
{
	ui.go_ex_2->setVisible(true);
	if (
		ui.ex_1_E02_1_del->text() == "" || ui.ex_1_E01_1_del->text() == "" || ui.ex_1_E02_1_v->text() == "" || ui.ex_1_E01_1_v->text() == "" ||
		ui.ex_1_E02_2_del->text() == "" || ui.ex_1_E01_2_del->text() == "" || ui.ex_1_E02_2_v->text() == "" || ui.ex_1_E01_2_v->text() == "" ||
		ui.ex_1_E02_3_del->text() == "" || ui.ex_1_E01_3_del->text() == "" || ui.ex_1_E02_3_v->text() == "" || ui.ex_1_E01_3_v->text() == "" ||
		ui.ex_1_E02_4_del->text() == "" || ui.ex_1_E01_4_del->text() == "" || ui.ex_1_E02_4_v->text() == "" || ui.ex_1_E01_4_v->text() == "" ||
		ui.ex_1_E02_5_del->text() == "" || ui.ex_1_E01_5_del->text() == "" || ui.ex_1_E02_5_v->text() == "" || ui.ex_1_E01_5_v->text() == "" ||
		ui.ex_1_E02_6_del->text() == "" || ui.ex_1_E01_6_del->text() == "" || ui.ex_1_E02_6_v->text() == "" || ui.ex_1_E01_6_v->text() == "" ||
		ui.ex_1_E02_7_del->text() == "" || ui.ex_1_E01_7_del->text() == "" || ui.ex_1_E02_7_v->text() == "" || ui.ex_1_E01_7_v->text() == "" ||
		ui.ex_1_E02_8_del->text() == "" || ui.ex_1_E01_8_del->text() == "" || ui.ex_1_E02_8_v->text() == "" || ui.ex_1_E01_8_v->text() == "" ||
		ui.ex_1_E02_9_del->text() == "" || ui.ex_1_E01_9_del->text() == "" || ui.ex_1_E02_9_v->text() == "" || ui.ex_1_E01_9_v->text() == "" ||
		ui.ex_1_E02_10_del->text() == "" || ui.ex_1_E01_10_del->text() == "" || ui.ex_1_E02_10_v->text() == "" || ui.ex_1_E01_10_v->text() == "" ||
		ui.ex_1_M21_1->text() == "" || ui.ex_1_M12_1->text() == "" ||
		ui.ex_1_M21_2->text() == "" || ui.ex_1_M12_2->text() == "" ||
		ui.ex_1_M21_3->text() == "" || ui.ex_1_M12_3->text() == "" ||
		ui.ex_1_M21_4->text() == "" || ui.ex_1_M12_4->text() == "" ||
		ui.ex_1_M21_5->text() == "" || ui.ex_1_M12_5->text() == "" ||
		ui.ex_1_M21_6->text() == "" || ui.ex_1_M12_6->text() == "" ||
		ui.ex_1_M21_7->text() == "" || ui.ex_1_M12_7->text() == "" ||
		ui.ex_1_M21_8->text() == "" || ui.ex_1_M12_8->text() == "" ||
		ui.ex_1_M21_9->text() == "" || ui.ex_1_M12_9->text() == "" ||
		ui.ex_1_M21_10->text() == "" || ui.ex_1_M12_10->text() == ""
		)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("<p>Не все значения были введены!</p>"));
		msgBox.exec();
	}
	else if (
		!check_string(ui.ex_1_E02_1_del->text()) || !check_string(ui.ex_1_E01_1_del->text()) || !check_string(ui.ex_1_E02_1_v->text()) || !check_string(ui.ex_1_E01_1_v->text()) ||
		!check_string(ui.ex_1_E02_2_del->text()) || !check_string(ui.ex_1_E01_2_del->text()) || !check_string(ui.ex_1_E02_2_v->text()) || !check_string(ui.ex_1_E01_2_v->text()) ||
		!check_string(ui.ex_1_E02_3_del->text()) || !check_string(ui.ex_1_E01_3_del->text()) || !check_string(ui.ex_1_E02_3_v->text()) || !check_string(ui.ex_1_E01_3_v->text()) ||
		!check_string(ui.ex_1_E02_4_del->text()) || !check_string(ui.ex_1_E01_4_del->text()) || !check_string(ui.ex_1_E02_4_v->text()) || !check_string(ui.ex_1_E01_4_v->text()) ||
		!check_string(ui.ex_1_E02_5_del->text()) || !check_string(ui.ex_1_E01_5_del->text()) || !check_string(ui.ex_1_E02_5_v->text()) || !check_string(ui.ex_1_E01_5_v->text()) ||
		!check_string(ui.ex_1_E02_6_del->text()) || !check_string(ui.ex_1_E01_6_del->text()) || !check_string(ui.ex_1_E02_6_v->text()) || !check_string(ui.ex_1_E01_6_v->text()) ||
		!check_string(ui.ex_1_E02_7_del->text()) || !check_string(ui.ex_1_E01_7_del->text()) || !check_string(ui.ex_1_E02_7_v->text()) || !check_string(ui.ex_1_E01_7_v->text()) ||
		!check_string(ui.ex_1_E02_8_del->text()) || !check_string(ui.ex_1_E01_8_del->text()) || !check_string(ui.ex_1_E02_8_v->text()) || !check_string(ui.ex_1_E01_8_v->text()) ||
		!check_string(ui.ex_1_E02_9_del->text()) || !check_string(ui.ex_1_E01_9_del->text()) || !check_string(ui.ex_1_E02_9_v->text()) || !check_string(ui.ex_1_E01_9_v->text()) ||
		!check_string(ui.ex_1_E02_10_del->text()) || !check_string(ui.ex_1_E01_10_del->text()) || !check_string(ui.ex_1_E02_10_v->text()) || !check_string(ui.ex_1_E01_10_v->text()) ||
		!check_string(ui.ex_1_M21_1->text()) || !check_string(ui.ex_1_M12_1->text()) ||
		!check_string(ui.ex_1_M21_2->text()) || !check_string(ui.ex_1_M12_2->text()) ||
		!check_string(ui.ex_1_M21_3->text()) || !check_string(ui.ex_1_M12_3->text()) ||
		!check_string(ui.ex_1_M21_4->text()) || !check_string(ui.ex_1_M12_4->text()) ||
		!check_string(ui.ex_1_M21_5->text()) || !check_string(ui.ex_1_M12_5->text()) ||
		!check_string(ui.ex_1_M21_6->text()) || !check_string(ui.ex_1_M12_6->text()) ||
		!check_string(ui.ex_1_M21_7->text()) || !check_string(ui.ex_1_M12_7->text()) ||
		!check_string(ui.ex_1_M21_8->text()) || !check_string(ui.ex_1_M12_8->text()) ||
		!check_string(ui.ex_1_M21_9->text()) || !check_string(ui.ex_1_M12_9->text()) ||
		!check_string(ui.ex_1_M21_10->text()) || !check_string(ui.ex_1_M12_10->text())
		)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("<p>Введены некорректные значения!</p>"));
		msgBox.exec();
	}
	else
	{
	ui.stackedWidget->setCurrentWidget(ui.graph);

	delete ui.horizontalLayout->takeAt(0);

	// Создаём представление графика
	QChartView* chartView = new QChartView(this);
	ui.go_ex_2->setVisible(true);
	// Добавляем его в горизонтальный Layout
	ui.horizontalLayout->addWidget(chartView);

	QLineSeries* series1 = new QLineSeries();
	series1->setPen(QPen(Qt::red, 2, Qt::SolidLine));
	*series1 << QPointF(1, QVariant(ui.ex_1_M12_1->text()).toFloat());
	*series1 << QPointF(2, QVariant(ui.ex_1_M12_2->text()).toFloat());
	*series1 << QPointF(3, QVariant(ui.ex_1_M12_3->text()).toFloat());
	*series1 << QPointF(4, QVariant(ui.ex_1_M12_4->text()).toFloat());
	*series1 << QPointF(5, QVariant(ui.ex_1_M12_5->text()).toFloat());
	*series1 << QPointF(6, QVariant(ui.ex_1_M12_6->text()).toFloat());
	*series1 << QPointF(7, QVariant(ui.ex_1_M12_7->text()).toFloat());
	*series1 << QPointF(8, QVariant(ui.ex_1_M12_8->text()).toFloat());
	*series1 << QPointF(9, QVariant(ui.ex_1_M12_9->text()).toFloat());
	*series1 << QPointF(10, QVariant(ui.ex_1_M12_10->text()).toFloat());

	QLineSeries* series2 = new QLineSeries();
	series2->setPen(QPen(Qt::blue, 2, Qt::SolidLine));
	*series2 << QPointF(1, QVariant(ui.ex_1_M21_1->text()).toFloat());
	*series2 << QPointF(2, QVariant(ui.ex_1_M21_2->text()).toFloat());
	*series2 << QPointF(3, QVariant(ui.ex_1_M21_3->text()).toFloat());
	*series2 << QPointF(4, QVariant(ui.ex_1_M21_4->text()).toFloat());
	*series2 << QPointF(5, QVariant(ui.ex_1_M21_5->text()).toFloat());
	*series2 << QPointF(6, QVariant(ui.ex_1_M21_6->text()).toFloat());
	*series2 << QPointF(7, QVariant(ui.ex_1_M21_7->text()).toFloat());
	*series2 << QPointF(8, QVariant(ui.ex_1_M21_8->text()).toFloat());
	*series2 << QPointF(9, QVariant(ui.ex_1_M21_9->text()).toFloat());
	*series2 << QPointF(10, QVariant(ui.ex_1_M21_10->text()).toFloat());


	// Создаём график и добавляем в него синусоиду
	QChart* chart = new QChart();
	chart->addSeries(series1);
	chart->addSeries(series2);
	chart->legend()->hide();
	// Настройка осей графика
	QValueAxis* axisX = new QValueAxis();
	axisX->setTitleText("x, " + QString::fromLocal8Bit("см"));
	axisX->setLabelFormat("%i");
	axisX->setMin(0);
	axisX->setMax(10);
	axisX->setTickCount(10);
	chart->addAxis(axisX, Qt::AlignBottom);
	series1->attachAxis(axisX);
	series2->attachAxis(axisX);

	QValueAxis* axisY = new QValueAxis();
	axisY->setTitleText("M, " + QString::fromLocal8Bit("мкГн"));
	axisY->setLabelFormat("%g");
	axisY->setTickCount(5);
	axisY->setMin(0);
	float max_y = QVariant(ui.ex_1_M21_1->text()).toFloat(), set_y = 0;
	if (max_y < QVariant(ui.ex_1_M21_2->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_2->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M21_3->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_3->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M21_4->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_4->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M21_5->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_5->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M21_6->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_6->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M21_7->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_7->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M21_8->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_8->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M21_9->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_9->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M21_10->text()).toFloat())
		max_y = QVariant(ui.ex_1_M21_10->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_1->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_1->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_2->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_2->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_3->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_3->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_4->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_4->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_5->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_5->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_6->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_6->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_7->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_7->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_8->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_8->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_9->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_9->text()).toFloat();
	if (max_y < QVariant(ui.ex_1_M12_10->text()).toFloat())
		max_y = QVariant(ui.ex_1_M12_10->text()).toFloat();
	while (set_y < max_y)
		set_y += 10;
	axisY->setMax(set_y);
	chart->addAxis(axisY, Qt::AlignLeft);
	series1->attachAxis(axisY);
	series2->attachAxis(axisY);
	// Устанавливаем график в представление
	chartView->setChart(chart);
	}
}

void exercise::click_go_ex_2()
{
	result = "";
	ui.stackedWidget->setCurrentWidget(ui.ex_2);
	result += "<h3 align = \"center\">" + QString::fromLocal8Bit("Упражнение 1") + "</h3>";
	result += "<p align = \"center\">" + QString::fromLocal8Bit("Таблица 1") + "</p>";
	result += "<p align = \"center\">u<sub>" + QString::fromLocal8Bit("эфф.") + "</sub> = 2 B; f = 10 <sup>4</sup>" + QString::fromLocal8Bit("Гц") + "; R = 10 <sup>4</sup>" + QString::fromLocal8Bit("Ом") + "</p>";
	result += "<table align = \"center\" border = \"2\" cellpadding = \"5.5\" style = \"margin-bottom : 20px;\">";
	result += "<tr>";
	result += "<td align = \"center\">Z</td>";
	result += "<td align = \"center\" colspan = \"2\">E <sub>02 </sub ></td >";
	result += "<td align = \"center\">M <sub>21 </sub ></td >";
	result += "<td align = \"center\" colspan = \"2\">E <sub>01 </sub ></td >";
	result += "<td align = \"center\">M <sub>12 </sub ></td >";
	result += "</tr> <tr>";
	result += "<td align = \"center\" width = \"40\">" + QString::fromLocal8Bit("cм") + "</td>";
	result += "<td align = \"center\" width = \"70\">" + QString::fromLocal8Bit("дел.") + "</td>";
	result += "<td align = \"center\" width = \"70\">B</td>";
	result += "<td align = \"center\" width = \"82\">" + QString::fromLocal8Bit("Гн") + "</td>";
	result += "<td align = \"center\" width = \"70\">" + QString::fromLocal8Bit("дел.") + "</td>";
	result += "<td align = \"center\" width = \"70\">B</td>";
	result += "<td align = \"center\" width = \"82\">" + QString::fromLocal8Bit("Гн") + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">1 < / td >";
	result += "<td>" + ui.ex_1_E02_1_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_1_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_1->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_1_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_1_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_1->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">2 < / td >";
	result += "<td>" + ui.ex_1_E02_2_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_2_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_2->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_2_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_2_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_2->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">3 < / td >";
	result += "<td>" + ui.ex_1_E02_3_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_3_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_3->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_3_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_3_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_3->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">4 < / td >";
	result += "<td>" + ui.ex_1_E02_4_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_4_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_4->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_4_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_4_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_4->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">5 < / td >";
	result += "<td>" + ui.ex_1_E02_5_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_5_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_5->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_5_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_5_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_5->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">6 < / td >";
	result += "<td>" + ui.ex_1_E02_6_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_6_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_6->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_6_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_6_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_6->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">7 < / td >";
	result += "<td>" + ui.ex_1_E02_7_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_7_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_7->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_7_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_7_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_7->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">8 < / td >";
	result += "<td>" + ui.ex_1_E02_8_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_8_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_8->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_8_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_8_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_8->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">9 < / td >";
	result += "<td>" + ui.ex_1_E02_9_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_9_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_9->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_9_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_9_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_9->text() + "</td>";
	result += "</tr> <tr>";
	result += "<td align = \"center\">10 < / td >";
	result += "<td>" + ui.ex_1_E02_10_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E02_10_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M21_10->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_10_del->text() + "</td>";
	result += "<td>" + ui.ex_1_E01_10_v->text() + "</td>";
	result += "<td>" + ui.ex_1_M12_10->text() + "</td>";
	result += "</tr>";
	result += "</table>";
	result += "<p margin-bottom : 20px><a href = \"Посмотреть график\">" + QString::fromLocal8Bit("Посмотреть график") + "</a></p>";

	result += "\n<M21>" + ui.ex_1_M21_1->text();
	result += " " + ui.ex_1_M21_2->text();
	result += " " + ui.ex_1_M21_3->text();
	result += " " + ui.ex_1_M21_4->text();
	result += " " + ui.ex_1_M21_5->text();
	result += " " + ui.ex_1_M21_6->text();
	result += " " + ui.ex_1_M21_7->text();
	result += " " + ui.ex_1_M21_8->text();
	result += " " + ui.ex_1_M21_9->text();
	result += " " + ui.ex_1_M21_10->text();

	result += "\n<M12>" + ui.ex_1_M12_1->text();
	result += " " + ui.ex_1_M12_2->text();
	result += " " + ui.ex_1_M12_3->text();
	result += " " + ui.ex_1_M12_4->text();
	result += " " + ui.ex_1_M12_5->text();
	result += " " + ui.ex_1_M12_6->text();
	result += " " + ui.ex_1_M12_7->text();
	result += " " + ui.ex_1_M12_8->text();
	result += " " + ui.ex_1_M12_9->text();
	result += " " + ui.ex_1_M12_10->text();
	result += "\n";
	ui.ex_1_E02_1_del->clear();
	ui.ex_1_E02_1_v->clear();
	ui.ex_1_M21_1->clear();
	ui.ex_1_E01_1_del->clear();
	ui.ex_1_E01_1_v->clear();
	ui.ex_1_M12_1->clear();

	ui.ex_1_E02_2_del->clear();
	ui.ex_1_E02_2_v->clear();
	ui.ex_1_M21_2->clear();
	ui.ex_1_E01_2_del->clear();
	ui.ex_1_E01_2_v->clear();
	ui.ex_1_M12_2->clear();

	ui.ex_1_E02_3_del->clear();
	ui.ex_1_E02_3_v->clear();
	ui.ex_1_M21_3->clear();
	ui.ex_1_E01_3_del->clear();
	ui.ex_1_E01_3_v->clear();
	ui.ex_1_M12_3->clear();

	ui.ex_1_E02_4_del->clear();
	ui.ex_1_E02_4_v->clear();
	ui.ex_1_M21_4->clear();
	ui.ex_1_E01_4_del->clear();
	ui.ex_1_E01_4_v->clear();
	ui.ex_1_M12_4->clear();

	ui.ex_1_E02_5_del->clear();
	ui.ex_1_E02_5_v->clear();
	ui.ex_1_M21_5->clear();
	ui.ex_1_E01_5_del->clear();
	ui.ex_1_E01_5_v->clear();
	ui.ex_1_M12_5->clear();

	ui.ex_1_E02_6_del->clear();
	ui.ex_1_E02_6_v->clear();
	ui.ex_1_M21_6->clear();
	ui.ex_1_E01_6_del->clear();
	ui.ex_1_E01_6_v->clear();
	ui.ex_1_M12_6->clear();

	ui.ex_1_E02_7_del->clear();
	ui.ex_1_E02_7_v->clear();
	ui.ex_1_M21_7->clear();
	ui.ex_1_E01_7_del->clear();
	ui.ex_1_E01_7_v->clear();
	ui.ex_1_M12_7->clear();

	ui.ex_1_E02_8_del->clear();
	ui.ex_1_E02_8_v->clear();
	ui.ex_1_M21_8->clear();
	ui.ex_1_E01_8_del->clear();
	ui.ex_1_E01_8_v->clear();
	ui.ex_1_M12_8->clear();

	ui.ex_1_E02_9_del->clear();
	ui.ex_1_E02_9_v->clear();
	ui.ex_1_M21_9->clear();
	ui.ex_1_E01_9_del->clear();
	ui.ex_1_E01_9_v->clear();
	ui.ex_1_M12_9->clear();

	ui.ex_1_E02_10_del->clear();
	ui.ex_1_E02_10_v->clear();
	ui.ex_1_M21_10->clear();
	ui.ex_1_E01_10_del->clear();
	ui.ex_1_E01_10_v->clear();
	ui.ex_1_M12_10->clear();

	this->close();
	emit go_ex_2();
}

void exercise::click_go_ex_3()
{
	if (
		ui.ex_2_E_1->text() == "" || ui.ex_2_M_1->text() == "" ||
		ui.ex_2_E_2->text() == "" || ui.ex_2_M_2->text() == "" ||
		ui.ex_2_E_3->text() == "" || ui.ex_2_M_3->text() == "" ||
		ui.ex_2_E_4->text() == "" || ui.ex_2_M_4->text() == "" ||
		ui.ex_2_E_5->text() == "" || ui.ex_2_M_5->text() == "" ||
		ui.ex_2_E_6->text() == "" || ui.ex_2_M_6->text() == "" ||
		ui.ex_2_E_7->text() == "" || ui.ex_2_M_7->text() == "" ||
		ui.ex_2_E_8->text() == "" || ui.ex_2_M_8->text() == "" ||
		ui.ex_2_E_9->text() == "" || ui.ex_2_M_9->text() == "" ||
		ui.ex_2_E_10->text() == "" || ui.ex_2_M_10->text() == ""
		)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("<p>Не все значения были введены!</p>"));
		msgBox.exec();
	}
	else if (
		!check_string(ui.ex_2_E_1->text()) || !check_string(ui.ex_2_M_1->text()) ||
		!check_string(ui.ex_2_E_2->text()) || !check_string(ui.ex_2_M_2->text()) ||
		!check_string(ui.ex_2_E_3->text()) || !check_string(ui.ex_2_M_3->text()) ||
		!check_string(ui.ex_2_E_4->text()) || !check_string(ui.ex_2_M_4->text()) ||
		!check_string(ui.ex_2_E_5->text()) || !check_string(ui.ex_2_M_5->text()) ||
		!check_string(ui.ex_2_E_6->text()) || !check_string(ui.ex_2_M_6->text()) ||
		!check_string(ui.ex_2_E_7->text()) || !check_string(ui.ex_2_M_7->text()) ||
		!check_string(ui.ex_2_E_8->text()) || !check_string(ui.ex_2_M_8->text()) ||
		!check_string(ui.ex_2_E_9->text()) || !check_string(ui.ex_2_M_9->text()) ||
		!check_string(ui.ex_2_E_10->text()) || !check_string(ui.ex_2_M_10->text())
		)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("<p>Введены некорректные значения!</p>"));
		msgBox.exec();
	}
	else
	{
		ui.stackedWidget->setCurrentWidget(ui.ex_3);
		result += "<h3 align = \"center\">" + QString::fromLocal8Bit("Упражнение 2") + "</h3>";
		result += "<p align = \"center\">" + QString::fromLocal8Bit("Таблица 2") + "</p>";
		result += "<p align = \"center\">f = 10 <sup>4</sup>" + QString::fromLocal8Bit("Гц") + "; R = 10 <sup>4</sup>" + QString::fromLocal8Bit("Ом") + "</p>";
		result += "<table align = \"center\" border = \"2\" cellpadding = \"5.5\" style = \"margin-bottom : 50px;\">";
		result += "<tr>";
		result += "<td>" + QString::fromLocal8Bit("№ п.п") + "</td>";
		result += "<td>u<sub>" + QString::fromLocal8Bit("эфф") + "</sub> (B)</td>";
		result += "<td>E<sub>02</sub> (B)</td>";
		result += "<td>M<sub>21</sub>" + QString::fromLocal8Bit(" (Гн)") + "</td>";
		result += "</tr> <tr>";
		result += "<td>1</td>";
		result += "<td>0,5</td>";
		result += "<td>" + ui.ex_2_E_1->text() + "</td>";
		result += "<td>" + ui.ex_2_M_1->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>2</td>";
		result += "<td>1</td>";
		result += "<td>" + ui.ex_2_E_2->text() + "</td>";
		result += "<td>" + ui.ex_2_M_2->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>3</td>";
		result += "<td>1,5</td>";
		result += "<td>" + ui.ex_2_E_3->text() + "</td>";
		result += "<td>" + ui.ex_2_M_3->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>4</td>";
		result += "<td>2</td>";
		result += "<td>" + ui.ex_2_E_4->text() + "</td>";
		result += "<td>" + ui.ex_2_M_4->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>5</td>";
		result += "<td>2,5</td>";
		result += "<td>" + ui.ex_2_E_5->text() + "</td>";
		result += "<td>" + ui.ex_2_M_5->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>6</td>";
		result += "<td>3</td>";
		result += "<td>" + ui.ex_2_E_6->text() + "</td>";
		result += "<td>" + ui.ex_2_M_6->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>7</td>";
		result += "<td>3,5</td>";
		result += "<td>" + ui.ex_2_E_7->text() + "</td>";
		result += "<td>" + ui.ex_2_M_7->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>8</td>";
		result += "<td>4</td>";
		result += "<td>" + ui.ex_2_E_8->text() + "</td>";
		result += "<td>" + ui.ex_2_M_8->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>9</td>";
		result += "<td>4,5</td>";
		result += "<td>" + ui.ex_2_E_9->text() + "</td>";
		result += "<td>" + ui.ex_2_M_9->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>10</td>";
		result += "<td>5</td>";
		result += "<td>" + ui.ex_2_E_10->text() + "</td>";
		result += "<td>" + ui.ex_2_M_10->text() + "</td>";
		result += "</tr>";
		result += "</table>";

		ui.ex_2_E_1->clear();
		ui.ex_2_M_1->clear();

		ui.ex_2_E_2->clear();
		ui.ex_2_M_2->clear();

		ui.ex_2_E_3->clear();
		ui.ex_2_M_3->clear();

		ui.ex_2_E_4->clear();
		ui.ex_2_M_4->clear();

		ui.ex_2_E_5->clear();
		ui.ex_2_M_5->clear();

		ui.ex_2_E_6->clear();
		ui.ex_2_M_6->clear();

		ui.ex_2_E_7->clear();
		ui.ex_2_M_7->clear();

		ui.ex_2_E_8->clear();
		ui.ex_2_M_8->clear();

		ui.ex_2_E_9->clear();
		ui.ex_2_M_9->clear();

		ui.ex_2_E_10->clear();
		ui.ex_2_M_10->clear();

		this->close();
		emit go_ex_3();
	}
}

void exercise::click_go_finish()
{
	if (
		ui.ex_3_f_1->text() == "" || ui.ex_3_E_1->text() == "" || ui.ex_3_M_1->text() == "" ||
		ui.ex_3_f_2->text() == "" || ui.ex_3_E_2->text() == "" || ui.ex_3_M_2->text() == "" ||
		ui.ex_3_f_3->text() == "" || ui.ex_3_E_3->text() == "" || ui.ex_3_M_3->text() == "" ||
		ui.ex_3_f_4->text() == "" || ui.ex_3_E_4->text() == "" || ui.ex_3_M_4->text() == "" ||
		ui.ex_3_f_5->text() == "" || ui.ex_3_E_5->text() == "" || ui.ex_3_M_5->text() == "" ||
		ui.ex_3_f_6->text() == "" || ui.ex_3_E_6->text() == "" || ui.ex_3_M_6->text() == "" ||
		ui.ex_3_f_7->text() == "" || ui.ex_3_E_7->text() == "" || ui.ex_3_M_7->text() == "" ||
		ui.ex_3_f_8->text() == "" || ui.ex_3_E_8->text() == "" || ui.ex_3_M_8->text() == "" ||
		ui.ex_3_f_9->text() == "" || ui.ex_3_E_9->text() == "" || ui.ex_3_M_9->text() == "" ||
		ui.ex_3_f_10->text() == "" || ui.ex_3_E_10->text() == "" || ui.ex_3_M_10->text() == "" ||
		ui.ex_3_M_sr->text() == "" || ui.ex_3_OO->text() == "" || ui.ex_3_num_M->text() == ""
		)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("<p>Не все значения были введены!</p>"));
		msgBox.exec();
	}
	else if (
		!check_string(ui.ex_3_f_1->text()) || !check_string(ui.ex_3_E_1->text()) || !check_string(ui.ex_3_M_1->text()) ||
		!check_string(ui.ex_3_f_2->text()) || !check_string(ui.ex_3_E_2->text()) || !check_string(ui.ex_3_M_2->text()) ||
		!check_string(ui.ex_3_f_3->text()) || !check_string(ui.ex_3_E_3->text()) || !check_string(ui.ex_3_M_3->text()) ||
		!check_string(ui.ex_3_f_4->text()) || !check_string(ui.ex_3_E_4->text()) || !check_string(ui.ex_3_M_4->text()) ||
		!check_string(ui.ex_3_f_5->text()) || !check_string(ui.ex_3_E_5->text()) || !check_string(ui.ex_3_M_5->text()) ||
		!check_string(ui.ex_3_f_6->text()) || !check_string(ui.ex_3_E_6->text()) || !check_string(ui.ex_3_M_6->text()) ||
		!check_string(ui.ex_3_f_7->text()) || !check_string(ui.ex_3_E_7->text()) || !check_string(ui.ex_3_M_7->text()) ||
		!check_string(ui.ex_3_f_8->text()) || !check_string(ui.ex_3_E_8->text()) || !check_string(ui.ex_3_M_8->text()) ||
		!check_string(ui.ex_3_f_9->text()) || !check_string(ui.ex_3_E_9->text()) || !check_string(ui.ex_3_M_9->text()) ||
		!check_string(ui.ex_3_f_10->text()) || !check_string(ui.ex_3_E_10->text()) || !check_string(ui.ex_3_M_10->text()) ||
		!check_string(ui.ex_3_M_sr->text()) || !check_string(ui.ex_3_OO->text()) || !check_string(ui.ex_3_num_M->text())
		)
	{
		QMessageBox msgBox;
		msgBox.setWindowTitle(QString::fromLocal8Bit("Ошибка!"));
		msgBox.setText(QString::fromLocal8Bit("<p>Введены некорректные значения!</p>"));
		msgBox.exec();
	}
	else
	{
		result += "<h3 align = \"center\">" + QString::fromLocal8Bit("Упражнение 3") + "</h3>";
		result += "<p align = \"center\">" + QString::fromLocal8Bit("Таблица 3") + "</p>";
		result += "<p align = \"center\">u<sub>" + QString::fromLocal8Bit("эфф.") + "</sub> = 2 B; R = 10 <sup>4</sup>" + QString::fromLocal8Bit("Ом") + "</p>";
		result += "<table align = \"center\" border = \"2\" cellpadding = \"5.5\" style = \"margin-bottom : 20px;\">";
		result += "<tr>";
		result += "<td>" + QString::fromLocal8Bit("№ п.п") + "</td>";
		result += "<td>f" + QString::fromLocal8Bit(" (Гц)") + "</td>";
		result += "<td>E<sub>02 </sub> (B) </td>";
		result += "<td>M<sub>21</sub>" + QString::fromLocal8Bit(" (Гн)") + "</td>";
		result += "</tr> <tr>";
		result += "<td>1</td>";
		result += "<td>" + ui.ex_3_f_1->text() + "</td>";
		result += "<td>" + ui.ex_3_E_1->text() + "</td>";
		result += "<td>" + ui.ex_3_M_1->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>2</td>";
		result += "<td>" + ui.ex_3_f_2->text() + "</td>";
		result += "<td>" + ui.ex_3_E_2->text() + "</td>";
		result += "<td>" + ui.ex_3_M_2->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>3</td>";
		result += "<td>" + ui.ex_3_f_3->text() + "</td>";
		result += "<td>" + ui.ex_3_E_3->text() + "</td>";
		result += "<td>" + ui.ex_3_M_3->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>4</td>";
		result += "<td>" + ui.ex_3_f_4->text() + "</td>";
		result += "<td>" + ui.ex_3_E_4->text() + "</td>";
		result += "<td>" + ui.ex_3_M_4->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>5</td>";
		result += "<td>" + ui.ex_3_f_5->text() + "</td>";
		result += "<td>" + ui.ex_3_E_5->text() + "</td>";
		result += "<td>" + ui.ex_3_M_5->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>6</td>";
		result += "<td>" + ui.ex_3_f_6->text() + "</td>";
		result += "<td>" + ui.ex_3_E_6->text() + "</td>";
		result += "<td>" + ui.ex_3_M_6->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>7</td>";
		result += "<td>" + ui.ex_3_f_7->text() + "</td>";
		result += "<td>" + ui.ex_3_E_7->text() + "</td>";
		result += "<td>" + ui.ex_3_M_7->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>8</td>";
		result += "<td>" + ui.ex_3_f_8->text() + "</td>";
		result += "<td>" + ui.ex_3_E_8->text() + "</td>";
		result += "<td>" + ui.ex_3_M_8->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>9</td>";
		result += "<td>" + ui.ex_3_f_9->text() + "</td>";
		result += "<td>" + ui.ex_3_E_9->text() + "</td>";
		result += "<td>" + ui.ex_3_M_9->text() + "</td>";
		result += "</tr> <tr>";
		result += "<td>10</td>";
		result += "<td>" + ui.ex_3_f_10->text() + "</td>";
		result += "<td>" + ui.ex_3_E_10->text() + "</td>";
		result += "<td>" + ui.ex_3_M_10->text() + "</td>";
		result += "</tr>";
		result += "</table>";

		ui.ex_3_f_1->clear();
		ui.ex_3_E_1->clear();
		ui.ex_3_M_1->clear();

		ui.ex_3_f_2->clear();
		ui.ex_3_E_2->clear();
		ui.ex_3_M_2->clear();

		ui.ex_3_f_3->clear();
		ui.ex_3_E_3->clear();
		ui.ex_3_M_3->clear();

		ui.ex_3_f_4->clear();
		ui.ex_3_E_4->clear();
		ui.ex_3_M_4->clear();

		ui.ex_3_f_5->clear();
		ui.ex_3_E_5->clear();
		ui.ex_3_M_5->clear();

		ui.ex_3_f_6->clear();
		ui.ex_3_E_6->clear();
		ui.ex_3_M_6->clear();

		ui.ex_3_f_7->clear();
		ui.ex_3_E_7->clear();
		ui.ex_3_M_7->clear();

		ui.ex_3_f_8->clear();
		ui.ex_3_E_8->clear();
		ui.ex_3_M_8->clear();

		ui.ex_3_f_9->clear();
		ui.ex_3_E_9->clear();
		ui.ex_3_M_9->clear();

		ui.ex_3_f_10->clear();
		ui.ex_3_E_10->clear();
		ui.ex_3_M_10->clear();

		result += "<p>" + QString::fromLocal8Bit("Среднее значение М") + "<sub>21</sub>: " + ui.ex_3_M_sr->text() + "</p>";
		result += "<p>" + QString::fromLocal8Bit("Относительное отклонение: ") + ui.ex_3_OO->text() + "</p>";
		result += "<p style = \"margin-bottom : 20px;\">" + QString::fromLocal8Bit("Табличный номер, для которого оно было вычислено: ") + ui.ex_3_num_M->text() + "</p>";

		ui.ex_3_M_sr->clear();
		ui.ex_3_OO->clear();
		ui.ex_3_num_M->clear();

		this->close();
		emit finish();
	}
}

void exercise::onAnchorClicked(vector <float> M21, vector <float> M12)
{
	ui.go_ex_2->setVisible(false);
	delete ui.horizontalLayout->takeAt(0);
	ui.stackedWidget->setCurrentWidget(ui.graph);
	// Создаём представление графика
	QChartView* chartView = new QChartView(this);
	// Добавляем его в горизонтальный Layout
	ui.horizontalLayout->addWidget(chartView);

	QLineSeries* series1 = new QLineSeries();
	series1->setPen(QPen(Qt::red, 2, Qt::SolidLine));
	*series1 << QPointF(1, M12[0]);
	*series1 << QPointF(2, M12[1]);
	*series1 << QPointF(3, M12[2]);
	*series1 << QPointF(4, M12[3]);
	*series1 << QPointF(5, M12[4]);
	*series1 << QPointF(6, M12[5]);
	*series1 << QPointF(7, M12[6]);
	*series1 << QPointF(8, M12[7]);
	*series1 << QPointF(9, M12[8]);
	*series1 << QPointF(10, M12[9]);

	QLineSeries* series2 = new QLineSeries();
	series2->setPen(QPen(Qt::blue, 2, Qt::SolidLine));
	*series2 << QPointF(1, M21[0]);
	*series2 << QPointF(2, M21[1]);
	*series2 << QPointF(3, M21[2]);
	*series2 << QPointF(4, M21[3]);
	*series2 << QPointF(5, M21[4]);
	*series2 << QPointF(6, M21[5]);
	*series2 << QPointF(7, M21[6]);
	*series2 << QPointF(8, M21[7]);
	*series2 << QPointF(9, M21[8]);
	*series2 << QPointF(10, M21[9]);

	// Создаём график и добавляем в него синусоиду
	QChart* chart = new QChart();
	chart->addSeries(series1);
	chart->addSeries(series2);
	chart->legend()->hide();
	// Настройка осей графика
	QValueAxis* axisX = new QValueAxis();
	axisX->setTitleText("x, " + QString::fromLocal8Bit("см"));
	axisX->setLabelFormat("%i");
	axisX->setMin(0);
	axisX->setMax(10);
	axisX->setTickCount(10);
	chart->addAxis(axisX, Qt::AlignBottom);
	series1->attachAxis(axisX);
	series2->attachAxis(axisX);

	QValueAxis* axisY = new QValueAxis();
	axisY->setTitleText("M, " + QString::fromLocal8Bit("мкГн"));
	axisY->setLabelFormat("%g");
	axisY->setTickCount(5);
	axisY->setMin(0);
	float max_y, set_y = 0;
	max_y = M21[0];
	for (int i = 0; i < M21.size(); i++)
	{
		if (max_y < M21[i])
			max_y = M21[i];
		if (max_y < M12[i])
			max_y = M12[i];
	}
	while (set_y < max_y)
		set_y += 10;
	axisY->setMax(set_y);
	chart->addAxis(axisY, Qt::AlignLeft);
	series1->attachAxis(axisY);
	series2->attachAxis(axisY);

	// Устанавливаем график в представление
	chartView->setChart(chart);
}