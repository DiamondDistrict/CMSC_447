#include <QApplication>
#include <QLabel>
#include <QBitmap>
#include <QPushButton>
#include <QSpinBox>
#include <QComboBox>
#include <QObject>
#include <QGraphicsView>


int main(int argc, char **argv){

    // This class takes care of input arguments
    QApplication app (argc, argv);

    // Creates the main window (width, height)
    QWidget window;
    window.setFixedSize(1000,625);

    QLabel *label = new QLabel(&window);

    // path to map image file
    QPixmap pixmap(":/md.jpg");
    label->setPixmap(pixmap.scaled(1000,600,Qt::KeepAspectRatio));

    // Creates the zoom out button
    // setGeometry(x, y, width, height)
    QPushButton *zoomOut = new QPushButton("-",&window);
    zoomOut->setGeometry(850,575,50,30);
    QObject::connect(zoomOut, SIGNAL(pressed()), label, SLOT(showMaximized()));

    // Creates the zoom in button
    QPushButton *zoomIn = new QPushButton("+",&window);
    zoomIn->setGeometry(925,575,50,30);
    QObject::connect(zoomIn, SIGNAL(pressed()), label, SLOT(showMinimized()));

    // Creates the box to select districts
    QSpinBox *selectDistrict = new QSpinBox(&window);

    // Sets range from 0 to 50
    selectDistrict->setRange(0, 50);

    // Increment selection bt one
    selectDistrict->setSingleStep(1);

    // Set starting value at 0
    selectDistrict->setValue(0);

    selectDistrict->setGeometry(575, 575, 80, 30);

    // Creates the drop down box
    QComboBox *selectState = new QComboBox(&window);
    selectState->addItem("Maryland");
    selectState->addItem("North Carolina");
    selectState->addItem("Wyoming");
    selectState->setGeometry(10, 575, 500, 30);
    QObject::connect(selectState, SIGNAL(activated(QString)), &window, SLOT(update()));
    //QObject::connect(selectState,SIGNAL(activated(QString)), &window,SLOT(setPixmap(QPixmap("/Users/anila/Documents/CMSC 447/QT_stuff/Maryland 2 Outline.gif"))));

    window.show();

    // Launches an event loop
    return app.exec();


}

