#include "slam.h"
#include "Libraries\Headers\opencv2\core\core.hpp"
#include "Libraries\Headers\opencv2\highgui\highgui.hpp"
#include "Libraries\Headers\opencv2\imgproc\imgproc.hpp"
using namespace cv;

Slam::Slam(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

Slam::~Slam()
{

}
