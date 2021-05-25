/********************************************************************************
** Form generated from reading UI file 'equipment.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPMENT_H
#define UI_EQUIPMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_equipment
{
public:
    QTextBrowser *textBrowser;
    QLineEdit *in_f;
    QLineEdit *in_u;
    QLabel *out_E_del;
    QLabel *out_E;
    QLabel *out_u;
    QRadioButton *p_1;
    QRadioButton *p_7;
    QPushButton *switch_1;
    QRadioButton *p_3;
    QRadioButton *p_8;
    QRadioButton *p_10;
    QRadioButton *p_4;
    QRadioButton *p_2;
    QLabel *p_2_left;
    QLabel *p_1_right;
    QPushButton *switch_2;
    QLabel *p_2_right;
    QRadioButton *p_9;
    QRadioButton *p_5;
    QLabel *p_1_left;
    QRadioButton *p_6;
    QPushButton *next;
    QPushButton *instruction;

    void setupUi(QWidget *equipment)
    {
        if (equipment->objectName().isEmpty())
            equipment->setObjectName(QStringLiteral("equipment"));
        equipment->resize(860, 468);
        textBrowser = new QTextBrowser(equipment);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 901, 471));
        in_f = new QLineEdit(equipment);
        in_f->setObjectName(QStringLiteral("in_f"));
        in_f->setGeometry(QRect(230, 190, 121, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        in_f->setFont(font);
        in_u = new QLineEdit(equipment);
        in_u->setObjectName(QStringLiteral("in_u"));
        in_u->setGeometry(QRect(60, 190, 121, 31));
        in_u->setFont(font);
        out_E_del = new QLabel(equipment);
        out_E_del->setObjectName(QStringLiteral("out_E_del"));
        out_E_del->setGeometry(QRect(550, 380, 81, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        out_E_del->setFont(font1);
        out_E_del->setFrameShape(QFrame::Box);
        out_E_del->setAlignment(Qt::AlignCenter);
        out_E_del->setMargin(0);
        out_E_del->setOpenExternalLinks(false);
        out_E = new QLabel(equipment);
        out_E->setObjectName(QStringLiteral("out_E"));
        out_E->setGeometry(QRect(550, 340, 81, 31));
        out_E->setFont(font1);
        out_E->setFrameShape(QFrame::Box);
        out_E->setAlignment(Qt::AlignCenter);
        out_E->setMargin(0);
        out_E->setOpenExternalLinks(false);
        out_u = new QLabel(equipment);
        out_u->setObjectName(QStringLiteral("out_u"));
        out_u->setGeometry(QRect(40, 300, 161, 51));
        out_u->setFont(font);
        out_u->setFrameShape(QFrame::Box);
        out_u->setAlignment(Qt::AlignCenter);
        out_u->setMargin(0);
        out_u->setOpenExternalLinks(false);
        p_1 = new QRadioButton(equipment);
        p_1->setObjectName(QStringLiteral("p_1"));
        p_1->setGeometry(QRect(730, 80, 21, 20));
        p_7 = new QRadioButton(equipment);
        p_7->setObjectName(QStringLiteral("p_7"));
        p_7->setGeometry(QRect(550, 80, 21, 20));
        switch_1 = new QPushButton(equipment);
        switch_1->setObjectName(QStringLiteral("switch_1"));
        switch_1->setGeometry(QRect(540, 150, 71, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        switch_1->setFont(font2);
        p_3 = new QRadioButton(equipment);
        p_3->setObjectName(QStringLiteral("p_3"));
        p_3->setGeometry(QRect(670, 80, 21, 20));
        p_8 = new QRadioButton(equipment);
        p_8->setObjectName(QStringLiteral("p_8"));
        p_8->setGeometry(QRect(520, 80, 21, 20));
        p_10 = new QRadioButton(equipment);
        p_10->setObjectName(QStringLiteral("p_10"));
        p_10->setGeometry(QRect(460, 80, 21, 20));
        p_4 = new QRadioButton(equipment);
        p_4->setObjectName(QStringLiteral("p_4"));
        p_4->setGeometry(QRect(640, 80, 21, 20));
        p_2 = new QRadioButton(equipment);
        p_2->setObjectName(QStringLiteral("p_2"));
        p_2->setGeometry(QRect(700, 80, 21, 20));
        p_2_left = new QLabel(equipment);
        p_2_left->setObjectName(QStringLiteral("p_2_left"));
        p_2_left->setGeometry(QRect(640, 150, 41, 41));
        QFont font3;
        font3.setPointSize(23);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        p_2_left->setFont(font3);
        p_1_right = new QLabel(equipment);
        p_1_right->setObjectName(QStringLiteral("p_1_right"));
        p_1_right->setGeometry(QRect(580, 150, 41, 41));
        p_1_right->setFont(font3);
        switch_2 = new QPushButton(equipment);
        switch_2->setObjectName(QStringLiteral("switch_2"));
        switch_2->setGeometry(QRect(650, 150, 71, 21));
        switch_2->setFont(font2);
        p_2_right = new QLabel(equipment);
        p_2_right->setObjectName(QStringLiteral("p_2_right"));
        p_2_right->setGeometry(QRect(680, 150, 41, 41));
        p_2_right->setFont(font3);
        p_9 = new QRadioButton(equipment);
        p_9->setObjectName(QStringLiteral("p_9"));
        p_9->setGeometry(QRect(490, 80, 21, 20));
        p_5 = new QRadioButton(equipment);
        p_5->setObjectName(QStringLiteral("p_5"));
        p_5->setGeometry(QRect(610, 80, 21, 20));
        p_1_left = new QLabel(equipment);
        p_1_left->setObjectName(QStringLiteral("p_1_left"));
        p_1_left->setGeometry(QRect(540, 150, 41, 41));
        p_1_left->setFont(font3);
        p_6 = new QRadioButton(equipment);
        p_6->setObjectName(QStringLiteral("p_6"));
        p_6->setGeometry(QRect(580, 80, 21, 20));
        next = new QPushButton(equipment);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(350, 430, 151, 31));
        QFont font4;
        font4.setPointSize(14);
        next->setFont(font4);
        instruction = new QPushButton(equipment);
        instruction->setObjectName(QStringLiteral("instruction"));
        instruction->setGeometry(QRect(820, 10, 31, 31));
        instruction->setFont(font4);
        textBrowser->raise();
        in_f->raise();
        in_u->raise();
        out_E_del->raise();
        out_E->raise();
        out_u->raise();
        p_1->raise();
        p_7->raise();
        p_3->raise();
        p_8->raise();
        p_10->raise();
        p_4->raise();
        p_2->raise();
        p_2_left->raise();
        p_1_right->raise();
        p_2_right->raise();
        p_9->raise();
        p_5->raise();
        p_1_left->raise();
        p_6->raise();
        next->raise();
        switch_2->raise();
        switch_1->raise();
        instruction->raise();

        retranslateUi(equipment);

        QMetaObject::connectSlotsByName(equipment);
    } // setupUi

    void retranslateUi(QWidget *equipment)
    {
        equipment->setWindowTitle(QApplication::translate("equipment", "equipment", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("equipment", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/image/equipment.jpg\" /></p></body></html>", Q_NULLPTR));
        out_E_del->setText(QString());
        out_E->setText(QString());
        out_u->setText(QString());
        p_1->setText(QString());
        p_7->setText(QString());
        switch_1->setText(QApplication::translate("equipment", "\320\237\320\265\321\200\320\265\320\272\320\273.", Q_NULLPTR));
        p_3->setText(QString());
        p_8->setText(QString());
        p_10->setText(QString());
        p_4->setText(QString());
        p_2->setText(QString());
        p_2_left->setText(QApplication::translate("equipment", "__", Q_NULLPTR));
        p_1_right->setText(QApplication::translate("equipment", "__", Q_NULLPTR));
        switch_2->setText(QApplication::translate("equipment", "\320\237\320\265\321\200\320\265\320\272\320\273.", Q_NULLPTR));
        p_2_right->setText(QApplication::translate("equipment", "__", Q_NULLPTR));
        p_9->setText(QString());
        p_5->setText(QString());
        p_1_left->setText(QApplication::translate("equipment", "__", Q_NULLPTR));
        p_6->setText(QString());
        next->setText(QApplication::translate("equipment", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        instruction->setText(QApplication::translate("equipment", "?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class equipment: public Ui_equipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENT_H
