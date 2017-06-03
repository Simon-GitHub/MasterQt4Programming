#include <QtGui>

#if 0
#include "pathwidget.h"
#else
#include "arrowwidget.h"
#endif
#include "mainwindow.h"

MainWindow::MainWindow()
{
	resize(800,600);
	arrowWidget = new ArrowWidget(this);
	setCentralWidget(arrowWidget);	
}

