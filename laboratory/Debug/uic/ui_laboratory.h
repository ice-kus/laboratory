/********************************************************************************
** Form generated from reading UI file 'laboratory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABORATORY_H
#define UI_LABORATORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_laboratoryClass
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *in_laboratory;
    QTextBrowser *text_exercise_2;
    QPushButton *go_handbook;
    QPushButton *go_input_results;
    QTextBrowser *text_exercise_1;
    QTextBrowser *text_exercise_3;
    QLabel *label_2;
    QTextEdit *conclusion;
    QPushButton *finish;
    QPushButton *go_equipment;
    QWidget *in_view_result;
    QTextBrowser *text_result;
    QPushButton *go_menu_2;
    QWidget *in_test;
    QTextBrowser *text_quest;
    QLabel *num_quest;
    QPushButton *answer;
    QListWidget *list_ans;
    QPushButton *test_finish;
    QLabel *num_quest_2;
    QPushButton *answer_tb;
    QWidget *in_menu;
    QPushButton *go_data_entry;
    QLabel *label_23;
    QLabel *name_lab;
    QFrame *line_7;
    QPushButton *go_handbook_m;
    QPushButton *go_instruction;
    QWidget *in_data_entry;
    QListWidget *list_files;
    QLabel *label;
    QPushButton *go_test;
    QWidget *in_instruction;
    QPushButton *go_menu;
    QTextBrowser *text_instruction;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *laboratoryClass)
    {
        if (laboratoryClass->objectName().isEmpty())
            laboratoryClass->setObjectName(QStringLiteral("laboratoryClass"));
        laboratoryClass->resize(720, 599);
        centralWidget = new QWidget(laboratoryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 721, 561));
        in_laboratory = new QWidget();
        in_laboratory->setObjectName(QStringLiteral("in_laboratory"));
        text_exercise_2 = new QTextBrowser(in_laboratory);
        text_exercise_2->setObjectName(QStringLiteral("text_exercise_2"));
        text_exercise_2->setGeometry(QRect(10, 50, 701, 491));
        QFont font;
        font.setPointSize(14);
        text_exercise_2->setFont(font);
        go_handbook = new QPushButton(in_laboratory);
        go_handbook->setObjectName(QStringLiteral("go_handbook"));
        go_handbook->setGeometry(QRect(10, 10, 131, 31));
        go_handbook->setFont(font);
        go_input_results = new QPushButton(in_laboratory);
        go_input_results->setObjectName(QStringLiteral("go_input_results"));
        go_input_results->setGeometry(QRect(230, 10, 271, 31));
        go_input_results->setFont(font);
        text_exercise_1 = new QTextBrowser(in_laboratory);
        text_exercise_1->setObjectName(QStringLiteral("text_exercise_1"));
        text_exercise_1->setGeometry(QRect(10, 50, 701, 491));
        text_exercise_1->setFont(font);
        text_exercise_3 = new QTextBrowser(in_laboratory);
        text_exercise_3->setObjectName(QStringLiteral("text_exercise_3"));
        text_exercise_3->setGeometry(QRect(10, 50, 701, 491));
        text_exercise_3->setFont(font);
        label_2 = new QLabel(in_laboratory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 671, 51));
        conclusion = new QTextEdit(in_laboratory);
        conclusion->setObjectName(QStringLiteral("conclusion"));
        conclusion->setGeometry(QRect(20, 120, 671, 351));
        conclusion->setFont(font);
        finish = new QPushButton(in_laboratory);
        finish->setObjectName(QStringLiteral("finish"));
        finish->setGeometry(QRect(260, 490, 191, 41));
        finish->setFont(font);
        go_equipment = new QPushButton(in_laboratory);
        go_equipment->setObjectName(QStringLiteral("go_equipment"));
        go_equipment->setGeometry(QRect(580, 10, 131, 31));
        go_equipment->setFont(font);
        stackedWidget->addWidget(in_laboratory);
        finish->raise();
        label_2->raise();
        conclusion->raise();
        text_exercise_2->raise();
        text_exercise_3->raise();
        text_exercise_1->raise();
        go_handbook->raise();
        go_input_results->raise();
        go_equipment->raise();
        in_view_result = new QWidget();
        in_view_result->setObjectName(QStringLiteral("in_view_result"));
        text_result = new QTextBrowser(in_view_result);
        text_result->setObjectName(QStringLiteral("text_result"));
        text_result->setGeometry(QRect(20, 10, 681, 481));
        text_result->setFont(font);
        go_menu_2 = new QPushButton(in_view_result);
        go_menu_2->setObjectName(QStringLiteral("go_menu_2"));
        go_menu_2->setGeometry(QRect(270, 502, 151, 41));
        go_menu_2->setFont(font);
        stackedWidget->addWidget(in_view_result);
        in_test = new QWidget();
        in_test->setObjectName(QStringLiteral("in_test"));
        text_quest = new QTextBrowser(in_test);
        text_quest->setObjectName(QStringLiteral("text_quest"));
        text_quest->setGeometry(QRect(20, 80, 681, 121));
        text_quest->setFont(font);
        num_quest = new QLabel(in_test);
        num_quest->setObjectName(QStringLiteral("num_quest"));
        num_quest->setGeometry(QRect(300, 30, 121, 41));
        QFont font1;
        font1.setPointSize(22);
        num_quest->setFont(font1);
        answer = new QPushButton(in_test);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(280, 510, 151, 31));
        QFont font2;
        font2.setPointSize(16);
        answer->setFont(font2);
        list_ans = new QListWidget(in_test);
        list_ans->setObjectName(QStringLiteral("list_ans"));
        list_ans->setGeometry(QRect(20, 220, 681, 281));
        QFont font3;
        font3.setPointSize(13);
        list_ans->setFont(font3);
        test_finish = new QPushButton(in_test);
        test_finish->setObjectName(QStringLiteral("test_finish"));
        test_finish->setGeometry(QRect(280, 510, 151, 31));
        test_finish->setFont(font2);
        num_quest_2 = new QLabel(in_test);
        num_quest_2->setObjectName(QStringLiteral("num_quest_2"));
        num_quest_2->setGeometry(QRect(140, 30, 481, 41));
        num_quest_2->setFont(font1);
        answer_tb = new QPushButton(in_test);
        answer_tb->setObjectName(QStringLiteral("answer_tb"));
        answer_tb->setGeometry(QRect(280, 510, 151, 31));
        answer_tb->setFont(font2);
        stackedWidget->addWidget(in_test);
        test_finish->raise();
        text_quest->raise();
        num_quest->raise();
        answer->raise();
        list_ans->raise();
        num_quest_2->raise();
        answer_tb->raise();
        in_menu = new QWidget();
        in_menu->setObjectName(QStringLiteral("in_menu"));
        go_data_entry = new QPushButton(in_menu);
        go_data_entry->setObjectName(QStringLiteral("go_data_entry"));
        go_data_entry->setGeometry(QRect(210, 380, 311, 71));
        QFont font4;
        font4.setPointSize(18);
        go_data_entry->setFont(font4);
        label_23 = new QLabel(in_menu);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(250, 120, 251, 81));
        QFont font5;
        font5.setPointSize(20);
        label_23->setFont(font5);
        name_lab = new QLabel(in_menu);
        name_lab->setObjectName(QStringLiteral("name_lab"));
        name_lab->setGeometry(QRect(80, 20, 601, 81));
        QFont font6;
        font6.setPointSize(24);
        name_lab->setFont(font6);
        line_7 = new QFrame(in_menu);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(0, 110, 721, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        go_handbook_m = new QPushButton(in_menu);
        go_handbook_m->setObjectName(QStringLiteral("go_handbook_m"));
        go_handbook_m->setGeometry(QRect(210, 200, 311, 71));
        go_handbook_m->setFont(font4);
        go_instruction = new QPushButton(in_menu);
        go_instruction->setObjectName(QStringLiteral("go_instruction"));
        go_instruction->setGeometry(QRect(210, 290, 311, 71));
        go_instruction->setFont(font4);
        stackedWidget->addWidget(in_menu);
        in_data_entry = new QWidget();
        in_data_entry->setObjectName(QStringLiteral("in_data_entry"));
        list_files = new QListWidget(in_data_entry);
        list_files->setObjectName(QStringLiteral("list_files"));
        list_files->setGeometry(QRect(140, 40, 421, 451));
        QFont font7;
        font7.setPointSize(12);
        list_files->setFont(font7);
        label = new QLabel(in_data_entry);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 0, 231, 41));
        label->setFont(font2);
        go_test = new QPushButton(in_data_entry);
        go_test->setObjectName(QStringLiteral("go_test"));
        go_test->setGeometry(QRect(290, 500, 131, 31));
        go_test->setFont(font);
        stackedWidget->addWidget(in_data_entry);
        in_instruction = new QWidget();
        in_instruction->setObjectName(QStringLiteral("in_instruction"));
        go_menu = new QPushButton(in_instruction);
        go_menu->setObjectName(QStringLiteral("go_menu"));
        go_menu->setGeometry(QRect(250, 500, 191, 41));
        go_menu->setFont(font);
        text_instruction = new QTextBrowser(in_instruction);
        text_instruction->setObjectName(QStringLiteral("text_instruction"));
        text_instruction->setGeometry(QRect(10, 20, 691, 471));
        text_instruction->setFont(font);
        stackedWidget->addWidget(in_instruction);
        laboratoryClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(laboratoryClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 21));
        laboratoryClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(laboratoryClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        laboratoryClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(laboratoryClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        laboratoryClass->setStatusBar(statusBar);

        retranslateUi(laboratoryClass);

        QMetaObject::connectSlotsByName(laboratoryClass);
    } // setupUi

    void retranslateUi(QMainWindow *laboratoryClass)
    {
        laboratoryClass->setWindowTitle(QApplication::translate("laboratoryClass", "laboratory", Q_NULLPTR));
        text_exercise_2->setHtml(QApplication::translate("laboratoryClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:16pt; font-weight:600;\">\320\243\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\265 2</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\">\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\265 \320\234</span><span style=\" font-family:'Times New Roman,serif'; font-"
                        "style:italic; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\"> \320\277\321\200\320\270 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\321\205\302\240 \320\260\320\274\320\277\320\273\320\270\321\202\321\203\320\264\321\213 \320\277\320\270\321\202\320\260\321\216\321\211\320\265\320\263\320\276 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217. </span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif';\">\320\243\320\261\320\265\320\264\320\270\321\202\320\265\321\201\321\214 \320\262 \321\202\320\276\320\274, \321\207\321\202\320\276 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\320\271 \320"
                        "\270\320\275\320\264\321\203\320\272\321\206\320\270\320\270 \320\275\320\265 \320\267\320\260\320\262\320\270\321\201\320\270\321\202 \320\276\321\202 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217 \320\275\320\260 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\265.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">1.</span><span style=\" font-family:'Times New Roman,serif';\">\320\224\320\273\321\217 \321\215\321\202\320\276\320\263\320\276 \320\277\320\276\321\201\321\202\320\260\320\262\321\214\321\202\320\265 \320\272\320\260\321\202\321\203\321\210\320\272\321\203 1 \320\262 \321\201\321\200\320\265\320\264\320\275\320\265\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320"
                        "\273\321\214\320\275\320\276 \320\272\320\260\321\202\321\203\321\210\320\272\320\270 2 (z = 50 \320\274\320\274) \320\270 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\203 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260 \320\270\320\267 \321\201\320\265\321\200\320\265\320\264\320\270\320\275\321\213 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\320\260 (\320\275\320\260\320\277\321\200\320\270\320\274\320\265\321\200, 10 \320\272\320\223\321\206). \320\230\320\267\320\274\320\265\321\200\321\214\321\202\320\265 \342\204\260</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">02</span><span style=\" font-family:'Times New Roman,serif';\"> \320\277\321\200\320\270 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\270\321\205 \321\200\320\260\320\267\320\273\320\270"
                        "\321\207\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\321\205 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217 U4 \320\262 \321\206\320\265\320\277\320\270 \320\272\320\260\321\202\321\203\321\210\320\272\320\270 1 \320\262 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\265 \320\276\321\202 0,1 \320\264\320\276 5 \320\222.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">2.</span><span style=\" font-family:'Times New Roman,serif';\">\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\320\271\321\202\320\265 M</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif';\"> \320\277\320\276 \321\204\320\276\321\200\320\274\321\203\320\273\320\265 (9"
                        "). \320\237\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\267\320\260\320\275\320\265\321\201\320\270\321\202\320\265 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 </span><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\">(\321\207\321\202\320\276\320\261\321\213 \320\267\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\203\321\216 \321\202\320\260\320\261\320\273\320\270\321\206\321\203, \320\276\321\202\320\272\321\200\320\276\320\271\321\202\320\265 \320\276\320\272\320\275\320\276 \321\201 \320\262\320\262\320\276\320\264\320\276\320\274 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\260)</span><span style=\" font-family:'Times New Roman,serif';\">.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img"
                        " src=\":/image/t2.jpg\" /></p></body></html>", Q_NULLPTR));
        go_handbook->setText(QApplication::translate("laboratoryClass", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272", Q_NULLPTR));
        go_input_results->setText(QApplication::translate("laboratoryClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\262\320\262\320\276\320\264 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\276\320\262", Q_NULLPTR));
        text_exercise_1->setHtml(QApplication::translate("laboratoryClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:16pt; font-weight:600;\">\320\243\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\265 1</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\">\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\265 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265"
                        "\320\275\321\202\320\276\320\262 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\320\271 \320\270\320\275\320\264\321\203\320\272\321\206\320\270\320\270\302\240 \320\234</span><span style=\" font-family:'Times New Roman,serif'; font-style:italic; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\"> \320\270 \320\234</span><span style=\" font-family:'Times New Roman,serif'; font-style:italic; vertical-align:sub;\">12</span><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\"> \320\270 \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\320\265 \320\270\321\205 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \320\276\321\202 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\320\263\320\276 \321\200\320\260\321\201\320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\321\217 \320\272\320\260\321\202\321\203\321\210\320\265\320\272. </span"
                        "></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">1.</span><span style=\" font-family:'Times New Roman,serif';\">\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276 \321\201 \321\201\320\276\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\276\320\271.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">2.</span><span style=\" font-family:'Times New Roman,serif';\">\320\224\320\273\321\217 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\320\260 \320"
                        "\262\320\267\320\260\320\270\320\274\320\275\320\276\320\271 \320\270\320\275\320\264\321\203\320\272\321\206\320\270\320\270 M</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">12</span><span style=\" font-family:'Times New Roman,serif';\"> \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \320\277\320\265\321\200\320\265\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214 \316\240</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">1</span><span style=\" font-family:'Times New Roman,serif';\"> \320\262 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 PQ, \320\260 \320\277\320\265\321\200\320\265\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214 \316\240</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">2</span><span style=\" font-family:'Times New Roman,serif';\"> \320\262 \320\277\320\276\320\273\320\276\320\266\320\265\320\275"
                        "\320\270\320\265 PO. \320\237\321\200\320\270 \321\215\321\202\320\276\320\274 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 \321\201\320\276 \320\267\320\262\321\203\320\272\320\276\320\262\320\276\320\263\320\276 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260 \320\277\320\276\320\264\320\260\321\221\321\202\321\201\321\217 \320\275\320\260 \320\272\320\260\321\202\321\203\321\210\320\272\321\203 1, \320\260 \320\255\320\224\320\241 \321\201 \320\272\320\260\320\264\321\203\321\210\320\272\320\270 2 \320\277\320\276\320\264\320\260\321\221\321\202\321\201\321\217 \320\275\320\260 \320\262\321\205\320\276\320\264 \320\276\321\201\321\206\320\270\320\273\320\273\320\276\320\263\321\200\320\260\321\204\320\260.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">3.</span>"
                        "<span style=\" font-family:'Times New Roman,serif';\">\320\227\320\260\320\264\320\260\320\271\321\202\320\265 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265, \320\277\320\276\320\264\320\260\320\262\320\260\320\265\320\274\320\276\320\265 \320\275\320\260 \320\272\320\260\321\202\321\203\321\210\320\272\321\203 1 U</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">4</span><span style=\" font-family:'Times New Roman,serif';\"> = 2 \320\222. \320\247\320\260\321\201\321\202\320\276\321\202\321\203 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \320\270\320\267 \321\201\320\265\321\200\320\265\320\264\320\270\320\275\321\213 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\320\260. \320\227\320\260\320\264\320\262\320\270\320\275\321\214\321\202\320\265 \320"
                        "\277\320\276\320\264\320\262\320\270\320\266\320\275\321\203\321\216 \320\272\320\260\321\202\321\203\321\210\320\272\321\203 1 \320\262 \320\272\321\200\320\260\320\271\320\275\320\265\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 (\320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 z \320\275\320\260 \320\262\321\213\320\264\320\262\320\270\320\266\320\275\320\276\320\271 \321\210\320\272\320\260\320\273\320\265 \320\272\320\260\321\202\321\203\321\210\320\272\320\270 \321\200\320\260\320\262\320\275\320\260 \320\275\321\203\320\273\321\216). \320\222\321\213\320\264\320\262\320\270\320\263\320\260\321\217 \320\272\320\260\321\202\321\203\321\210\320\272\321\203 \320\262\320\277\320\265\321\200\321\221\320\264 \321\201 \321\210\320\260\320\263\320\276\320\274 1 \321\201\320\274, \321\201\320\275\320\270\320\274\320\270\321\202\320\265 \320\277\320\276\320\272\320\260\320\267\320\260\320\275\320\270\321\217 \320\267\320\260\320\262\320\270\321\201"
                        "\320\270\320\274\320\276\321\201\321\202\321\214 \320\260\320\274\320\277\320\273\320\270\321\202\321\203\320\264\321\213 \320\255\320\224\320\241 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\320\271 \320\270\320\275\320\264\321\203\320\272\321\206\320\270\320\270 \342\204\260</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">02</span><span style=\" font-family:'Times New Roman,serif';\"> \320\262 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \320\276\321\202 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \320\272\320\260\321\202\321\203\321\210\320\272\320\270 z.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">4.</span><span style=\" font-family:'Times New Roman,serif';\">\320\224\320\273\321\217 \320\270\320\267\320"
                        "\274\320\265\321\200\320\265\320\275\320\270\321\217 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\320\260 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\320\271 \320\270\320\275\320\264\321\203\320\272\321\206\320\270\320\270 M</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">12</span><span style=\" font-family:'Times New Roman,serif';\"> \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \320\277\320\265\321\200\320\265\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214 \316\240</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">1</span><span style=\" font-family:'Times New Roman,serif';\"> \320\262 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 PO, \320\260 \320\277\320\265\321\200\320\265\320\272\320\273\321\216\321\207\320\260\321\202\320\265\320\273\321\214 \316\240</span><span style=\" font-family:'Times New Roman,se"
                        "rif'; vertical-align:sub;\">2</span><span style=\" font-family:'Times New Roman,serif';\"> \320\262 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 PQ.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">5.</span><span style=\" font-family:'Times New Roman,serif';\">\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\321\217 \320\277\321\203\320\275\320\272\321\202\320\260 2 \320\264\320\273\321\217 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \342\204\260</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">01</span><span style=\" font-family:'Times New Roman,serif';\"> \320\276\321\202 z.</span> <span style=\" font-family:'Times New Roman,serif'; font-size:"
                        "12pt;\">\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240 </span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">6.</span><span style=\" font-family:'Times New Roman,serif';\">\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\320\271\321\202\320\265 \320\277\320\276 \321\204\320\276\321\200\320\274\321\203\320\273\320\260\320\274 (8), (9) \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 M</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif';\"> \320\270 M</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">12</span><span style=\" font-family:'Times New Roman,serif';\"> \320\270 \320\267\320\260\320\275\320\265\321\201\320\270\321\202\320\265 \320\277\320\276\320"
                        "\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 </span><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\">(\321\207\321\202\320\276\320\261\321\213 \320\267\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\203\321\216 \321\202\320\260\320\261\320\273\320\270\321\206\321\203, \320\276\321\202\320\272\321\200\320\276\320\271\321\202\320\265 \320\276\320\272\320\275\320\276 \321\201 \320\262\320\262\320\276\320\264\320\276\320\274 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\260)</span><span style=\" font-family:'Times New Roman,serif';\">.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/image/t1.jpg\" /></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin"
                        "-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">7.</span><span style=\" font-family:'Times New Roman,serif';\">\320\237\320\276\321\201\321\202\321\200\320\276\320\271\321\202\320\265 \320\263\321\200\320\260\321\204\320\270\320\272\320\270 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 M</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif';\"> \320\270 M</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">12</span><span style=\" font-family:'Times New Roman,serif';\"> \320\272\320\260\320\272 \321\204\321\203\320\275\320\272\321\206\320\270\320\270 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 z </span><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\">(\320\263\321\200\320\260\321\204\320\270"
                        "\320\272 \320\261\321\203\320\264\320\265\321\202 \320\277\320\276\321\201\321\202\321\200\320\276\320\265\320\275 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270 \320\277\320\276\321\201\320\273\320\265 \320\267\320\260\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\321\213)</span><span style=\" font-family:'Times New Roman,serif';\">. \320\241\321\200\320\260\320\262\320\275\320\270\321\202\320\265 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217. \320\243\320\261\320\265\320\264\320\270\321\202\320\265\321\201\321\214 \320\262 \321\201\320\277\321\200\320\260\320\262\320\265\320\264\320\273\320\270\320\262\320\276\321\201\321\202\320\270 \321\202\320\265\320\276\321\200\320\265\320\274\321\213 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\321\201\321\202\320\270.</span></p></body>"
                        "</html>", Q_NULLPTR));
        text_exercise_3->setHtml(QApplication::translate("laboratoryClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-size:16pt; font-weight:600;\">\320\243\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\265 3</span><span style=\" font-size:16pt; font-weight:600;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\">\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\265 \320\234</span"
                        "><span style=\" font-family:'Times New Roman,serif'; font-style:italic; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\"> \320\277\321\200\320\270 \321\200\320\260\320\267\320\273\320\270\321\207\320\275\321\213\321\205 \321\207\320\260\321\201\321\202\320\276\321\202\320\260\321\205 \320\277\320\270\321\202\320\260\321\216\321\211\320\265\320\263\320\276 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif';\">\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\320\265 \321\215\320\272\321\201\320\277\320\265\321\200\320\270\320\274\320\265\320\275\321\202\320\260\320\273\321\214\320\275\320\276 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\321\214 \320\272\320\276\321"
                        "\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\320\260 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\320\271 \320\270\320\275\320\264\321\203\320\272\321\206\320\270\320\270 \320\276\321\202 \321\207\320\260\321\201\321\202\320\276\321\202\321\213 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">1.</span><span style=\" font-family:'Times New Roman,serif';\">\320\237\320\276\321\201\321\202\320\260\320\262\321\214\321\202\320\265 \320\272\320\260\321\202\321\203\321\210\320\272\321\203 1 \320\262 \321\201\321\200\320\265\320\264\320\275\320\265\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320"
                        "\272\320\260\321\202\321\203\321\210\320\272\320\270 2 (z = 50 \320\274\320\274).</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">2.</span><span style=\" font-family:'Times New Roman,serif';\">\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 \320\275\320\260 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\265 3 \320\222.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">3.</span><span style=\" font-family:'Times New Roman,serif';\">\320\230\320\267\320\274\320\265\321\200\321\214\321\202\320\265 \320\260\320\274\320\277"
                        "\320\273\320\270\321\202\321\203\320\264\321\203 \320\255\320\224\320\241 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\320\271 \320\270\320\275\320\264\321\203\320\272\321\206\320\270\320\270 \342\204\260</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">02</span><span style=\" font-family:'Times New Roman,serif';\"> \320\277\321\200\320\270 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\270\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\321\205 \321\207\320\260\321\201\321\202\320\276\321\202\321\213 f \320\267\320\262\321\203\320\272\320\276\320\262\320\276\320\263\320\276 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260 \320\262 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\265 \320\276\321\202 5 \320\264\320\276 25 \320\272\320\223\321\206.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">4.</span><span style=\" font-family:'Times New Roman,serif';\">\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\320\271\321\202\320\265 M</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif';\"> \320\277\320\276 \321\204\320\276\321\200\320\274\321\203\320\273\320\265 (9). \320\237\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\267\320\260\320\275\320\265\321\201\320\270\321\202\320\265 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 </span><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\">(\321\207\321\202\320\276\320\261\321\213 \320\267\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\203\321\216 \321\202\320\260\320\261\320\273\320\270\321"
                        "\206\321\203, \320\276\321\202\320\272\321\200\320\276\320\271\321\202\320\265 \320\276\320\272\320\275\320\276 \321\201 \320\262\320\262\320\276\320\264\320\276\320\274 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\260)</span><span style=\" font-family:'Times New Roman,serif';\">. </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/image/t3.jpg\" /></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">5.</span><span style=\" font-family:'Times New Roman,serif';\">\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214 \321\201\321\200\320\265\320\264\320\275\320\265\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\277\320\276 \320\264\320\260\320\275\320\275"
                        "\321\213\320\274 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\320\276\320\271 \321\202\320\260\320\261\320\273\320\270\321\206\321\213.</span> </p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-weight:600;\">6.</span><span style=\" font-family:'Times New Roman,serif';\">\320\224\320\273\321\217 \320\276\320\264\320\275\320\276\320\263\320\276 \320\270\320\267 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\234</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif';\"> \321\200\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320"
                        "\276\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265 \320\277\320\276 \321\204\320\276\321\200\320\274\321\203\320\273\320\265:</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/image/f15.jpg\" /></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif';\">\320\263\320\264\320\265 \320\234</span><span style=\" font-family:'Times New Roman,serif'; vertical-align:sub;\">21</span><span style=\" font-family:'Times New Roman,serif';\"> \342\200\223 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\273\321\214\320\275\320\276 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270\320\267 \320\277\320\276\320\273\321\203\321\207\320\265"
                        "\320\275\320\275\320\276\320\271 \321\202\320\260\320\261\320\273\320\270\321\206\321\213.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Times New Roman,serif'; font-style:italic;\">\320\237\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\277\321\203\320\275\320\272\321\202\320\276\320\262 5-6 \321\202\320\260\320\272\320\266\320\265 \320\262\320\262\320\276\320\264\321\217\321\202\321\201\321\217 \320\262 \320\276\321\202\320\264\320\265\320\273\321\214\320\275\320\276\320\274 \320\276\320\272\320\275\320\265 \320\264\320\273\321\217 \320\262\320\262\320\276\320\264\320\260 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\276\320\262.</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("laboratoryClass", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\235\320\260\320\277\320\270\321\210\320\270\321\202\320\265 \320\262\321\213\320\262\320\276\320\264 \320\276 \320\277\321\200\320\276\320\264\320\265\320\273\320\260\320\275\320\275\320\276\320\271 \320\273\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\276\320\271 \321\200\320\260\320\261\320\276\321\202\320\265:</span></p></body></html>", Q_NULLPTR));
        finish->setText(QApplication::translate("laboratoryClass", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203", Q_NULLPTR));
        go_equipment->setText(QApplication::translate("laboratoryClass", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260", Q_NULLPTR));
        go_menu_2->setText(QApplication::translate("laboratoryClass", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", Q_NULLPTR));
        text_quest->setHtml(QApplication::translate("laboratoryClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", Q_NULLPTR));
        num_quest->setText(QApplication::translate("laboratoryClass", "\320\222\320\276\320\277\321\200\320\276\321\201 1", Q_NULLPTR));
        answer->setText(QApplication::translate("laboratoryClass", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", Q_NULLPTR));
        test_finish->setText(QApplication::translate("laboratoryClass", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214", Q_NULLPTR));
        num_quest_2->setText(QApplication::translate("laboratoryClass", "\320\222\320\276\320\277\321\200\320\276\321\201 \320\277\320\276 \321\202\320\265\321\205\320\275\320\270\320\272\320\265 \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270", Q_NULLPTR));
        answer_tb->setText(QApplication::translate("laboratoryClass", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", Q_NULLPTR));
        go_data_entry->setText(QApplication::translate("laboratoryClass", "\320\237\320\265\321\200\320\265\321\205\320\276\320\264\n"
" \320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\216 \321\200\320\260\320\261\320\276\321\202\321\213", Q_NULLPTR));
        label_23->setText(QApplication::translate("laboratoryClass", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265", Q_NULLPTR));
        name_lab->setText(QApplication::translate("laboratoryClass", "              \320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 \n"
"\"\320\230\320\267\321\203\321\207\320\265\320\275\320\270\320\265 \321\217\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\267\320\260\320\270\320\274\320\275\320\276\320\271 \320\270\320\275\320\264\321\203\320\272\321\206\320\270\320\270\"", Q_NULLPTR));
        go_handbook_m->setText(QApplication::translate("laboratoryClass", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\n"
"\321\202\320\265\320\276\321\200\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\274\320\260\321\202\320\265\321\200\320\270\320\260\320\273\320\260", Q_NULLPTR));
        go_instruction->setText(QApplication::translate("laboratoryClass", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\270\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\320\270\n"
"\320\277\320\276 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\216 \321\200\320\260\320\261\320\276\321\202\321\213", Q_NULLPTR));
        label->setText(QApplication::translate("laboratoryClass", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\320\262\320\276\320\271 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        go_test->setText(QApplication::translate("laboratoryClass", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", Q_NULLPTR));
        go_menu->setText(QApplication::translate("laboratoryClass", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", Q_NULLPTR));
        text_instruction->setHtml(QApplication::translate("laboratoryClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\217 \320\277\320\276 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\216 \321\200\320\260\320\261\320\276\321\202\321\213</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. \320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\321\200\320\260\320\262\320\270\320\273\320\260 \321\202\320\265\321\205\320\275\320\270\320\272\320\270 \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270 \320\270 \321\202\320\265\320\276\321\200\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\274\320\260\321\202\320\265\321\200\320\270\320\260\320\273, \321\202\320\260\320\272 \320\272\320\260\320\272 \320\277\320\265\321\200\320\265\320\264 \320\275\320\260\321\207\320\260\320\273\320\276\320\274 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \320\273\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\321\213\321\205 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\271 \320\222\320\260\320\274 \320\261\321\203\320\264\320\265\321\202 \320\275\320\265\320"
                        "\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\277\321\200\320\276\320\271\321\202\320\270 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217. \320\242\320\265\320\276\321\200\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\274\320\260\321\202\320\265\321\200\320\270\320\260\320\273 \320\262\320\276 \320\262\321\200\320\265\320\274\321\217 \320\277\321\200\320\276\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\275\320\265\320\264\320\276\321\201\321\202\321\203\320\277\320\265\320\275.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x;\">2. \320\237\320\276\321\201\320\273\320\265 \321\202\320\276\320\263\320\276 \320\272\320\260\320\272 \320\222\321\213 \321\207\320\265\321\200\320\265\320\267 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\277\320\265\321\200\320\265\320\271\320\264\321\221\321\202\320\265 \320\272 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\216 \321\200\320\260\320\261\320\276\321\202\321\213 \320\222\320\260\320\274 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\261\321\203\320\264\320\265\321\202 \320\262\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273, \320\262 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\270 \320\272\320\276\321\202\320\276\321\200\320\276\320\263\320\276 \320\261\321\203\320\264\321\203\321\202 \320\222\320\260\321\210\320\270 \321\204\320\260\320\274\320\270\320\273\320\270\321\217 \320\270 \320\270\320\274\321\217.</p>\n"
"<p alig"
                        "n=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3. \320\224\320\260\320\273\320\265\320\265 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\277\321\200\320\276\320\271\321\202\320\270 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265. \320\242\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\261\321\203\320\264\320\265\321\202 \321\203\321\201\320\277\320\265\321\210\320\275\320\276 \320\277\321\200\320\276\320\271\320\264\320\265\320\275\320\276 \321\202\320\276\320\273\321\214\320\272\320\276 \321\202\320\276\320\263\320\264\320\260, \320\272\320\276\320\263\320\264\320\260</p>\n"
"<p align=\"justify\" style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-\320\264\320\260\320\275 \320\262\320\265\321\200\320\275\321\213\320\271 \320\276\321\202\320\262\320\265\321\202 \320\275\320\260 \320\277\320\265\321\200\320\262\321\213\320\271 \320\262\320\276\320\277\321\200\320\276\321\201, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\277\321\200\320\276\320\262\320\265\321\200\321\217\320\265\321\202 \320\222\320\260\321\210\320\265 \320\267\320\275\320\260\320\275\320\270\320\265 \320\277\321\200\320\260\320\262\320\270\320\273 \321\202\320\265\321\205\320\275\320\270\320\272\320\270 \320\261\320\265\320\267\320\276\320\277\320\260\321\201\320\275\320\276\321\201\321\202\320\270;</p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-\320\264\320\260\320\275\321\213 \320\262\320\265\321\200\320\275\321\213\320\265 \320\276\321\202\320\262\320\265\321\202\321\213 \320"
                        "\275\320\260 \321\202\321\200\320\270 \320\270\320\267 \320\277\321\217\321\202\320\270 \320\277\321\200\320\265\320\264\320\273\320\276\320\266\320\265\320\275\320\275\321\213\321\205 \321\202\320\265\320\276\321\200\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\262\320\276\320\277\321\200\320\276\321\201\320\276\320\262.</p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\222\320\275\320\270\320\274\320\260\320\275\320\270\320\265!</span> \320\232\320\260\320\266\320\264\320\260\321\217 \320\275\320\265\321\203\320\264\320\260\321\207\320\275\320\260\321\217 \320\277\320\276\320\277\321\213\321\202\320\272\320\260 \320\277\321\200\320\276\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \320\261\321\203\320\264\320\265\321\202 \320\276\321\202\321\200\320\260\320\266\320\265\320\275\320\260 \320\275\320\260 \320\222\320\260\321\210"
                        "\320\265\320\274 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\265.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4. \320\237\320\276\321\201\320\273\320\265 \321\203\321\201\320\277\320\265\321\210\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217, \320\222\321\213 \320\277\320\265\321\200\320\265\320\271\320\264\321\221\321\202\320\265 \320\272 \320\273\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\321\213\320\274 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217\320\274. \320\241\320"
                        "\273\320\265\320\264\321\203\320\271\321\202\320\265 \320\270\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\217\320\274, \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274 \320\262 \321\202\320\265\321\201\321\202\320\265 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\271.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5. \320\222\320\276 \320\262\321\200\320\265\320\274\321\217 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \320\273\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\276\320\271 \321\200\320\260\320\261\320\276\321\202\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320"
                        "\262\320\260\321\202\321\214\321\201\321\217 \321\202\320\265\320\276\321\200\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\274 \320\274\320\260\321\202\320\265\321\200\320\270\320\260\320\273\320\276\320\274, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\276\321\202\320\272\321\200\320\276\320\265\321\202\321\201\321\217 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 \320\275\320\260 \320\272\320\273\320\260\320\262\320\270\321\210\321\203 &quot;\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272&quot;, \320\270 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200\320\276\320\274, \320\262\321\201\321\202\321\200\320\276\320\265\320\275\320\275\321\213\320\274 \320\262 Windows.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; ma"
                        "rgin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6. \320\237\321\200\320\270 \320\276\321\202\320\272\321\200\321\213\321\202\320\270\320\270 \320\276\320\272\320\275\320\260 \321\201 \320\273\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\276\320\271 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\276\320\271 \320\262\320\275\320\270\320\274\320\260\321\202\320\265\320\273\321\214\320\275\320\276 \320\270\320\267\321\203\321\207\320\270\321\202\320\265 \320\270\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\216 \321\200\320\260\320\261\320\276\321\202\321\213 \321\201 \320\275\320\265\320\271. \320\237\320\276\321\201\320\273\320\265 \321\207\320\265\320\263\320\276 \321\201\320\273\320\265\320\264\321\203\320\271\321\202\320\265 \321\203\320\272\320\260\320\267\320\260\320\275\320\270\321\217\320\274, \320\275\320\260\320\277\320\270\321\201\320\260\320\275\320\275\321\213\320\274 \320\262 \320\273"
                        "\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\276\320\274 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\270 \320\264\320\273\321\217 \321\203\320\264\320\260\321\207\320\275\320\276\320\263\320\276 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \321\200\320\260\320\261\320\276\321\202\321\213.</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class laboratoryClass: public Ui_laboratoryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABORATORY_H
