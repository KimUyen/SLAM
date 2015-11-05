#include "slam.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Slam w;
	w.show();
	return a.exec();
}
