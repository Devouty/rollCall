#ifndef QT4ROLLCALL_H
#define QT4ROLLCALL_H

#include <QtWidgets/QMainWindow>
#include "ui_qt4rollcall.h"

class qt4rollCall : public QMainWindow
{
	Q_OBJECT

public:
	qt4rollCall(QWidget *parent = 0);
	~qt4rollCall();

private:
	Ui::qt4rollCallClass ui;
};

#endif // QT4ROLLCALL_H
