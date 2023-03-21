#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QPixmap>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //creating a pixmap and adding my image as a parameter
    QPixmap pixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\recipe_rendezvous.png");

    //creating a label and displaying the pixmap in the window using the setPixmap() function
    QLabel label;
    label.setPixmap(pixmap);

    //resizing the window to the size of the pixmap
    label.resize(pixmap.size());

    //the function that displays the label on the screen
    label.show();

    //changing the title of the main window
    label.window()->setWindowTitle("Recipe Rendezvous");

    QMainWindow favicon;
    favicon.setCentralWidget(&label);
    favicon.setWindowIcon(QIcon("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\favicon.jpg"));
    favicon.setWindowTitle("Recipe Rendezvous");
    favicon.show();


    return a.exec();
}
