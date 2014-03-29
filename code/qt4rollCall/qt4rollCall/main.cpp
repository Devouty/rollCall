#include "qt4rollcall.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qt4rollCall w;
	w.show();
	return a.exec();
}
