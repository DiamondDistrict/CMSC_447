#include <QApplication>
#include "mainwindow.h"

int main(int argc, char **argv){

    // This class takes care of input arguments
    QApplication app (argc, argv);

    // Creates an object to display main window
    MainWindow window;

    window.show();

    // Launches an event loop
    return app.exec();
}

