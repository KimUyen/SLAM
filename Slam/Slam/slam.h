#ifndef SLAM_H
#define SLAM_H

#include <QtWidgets/QMainWindow>
#include "ui_slam.h"

class Slam : public QMainWindow
{
	Q_OBJECT

public:
	Slam(QWidget *parent = 0);
	~Slam();

private:
	Ui::SlamClass ui;
	
};

#endif // SLAM_H
