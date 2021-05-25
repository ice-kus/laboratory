#include "theory.h"

theory::theory(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.text_theory, SIGNAL(anchorClicked(QUrl)), this, SLOT(onAnchorClicked(QUrl)));
	QObject::connect(ui.text_method, SIGNAL(anchorClicked(QUrl)), this, SLOT(onAnchorClicked(QUrl)));
	QObject::connect(ui.text_images, SIGNAL(anchorClicked(QUrl)), this, SLOT(onAnchorClicked(QUrl)));
	QObject::connect(ui.go_theory, SIGNAL(clicked()), this, SLOT(click_go_theory()));
	QObject::connect(ui.go_method, SIGNAL(clicked()), this, SLOT(click_go_method()));
	QObject::connect(ui.go_images, SIGNAL(clicked()), this, SLOT(click_go_images()));
}


void theory::click_go_theory()
{
	ui.text_theory->setVisible(true);
	ui.text_method->setVisible(false);
	ui.text_images->setVisible(false);
}

void theory::click_go_method()
{
	ui.text_theory->setVisible(false);
	ui.text_method->setVisible(true);
	ui.text_images->setVisible(false);
}

void theory::click_go_images()
{
	ui.text_theory->setVisible(false);
	ui.text_method->setVisible(false);
	ui.text_images->setVisible(true);
}
