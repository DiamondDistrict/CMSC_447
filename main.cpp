#include <QApplication>
//#include <QLabel>
//#include <QBitmap>
//#include <QPushButton>
//#include <QSpinBox>
//#include <QComboBox>
//#include <QFileDialog>
//#include <QMessageBox>
//#include <QAction>
//#include <QMenuBar>
//#include <QWidget>
#include "mainwindow.h"

int main(int argc, char **argv){

    // This class takes care of input arguments
    QApplication app (argc, argv);

    MainWindow window;

    window.show();

    // Launches an event loop
    return app.exec();
}

