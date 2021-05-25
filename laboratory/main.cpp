#include "laboratory.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

	qApp->addLibraryPath("plugins");
	QApplication a(argc, argv);


	laboratory w;
	w.show();
	return a.exec();
}
