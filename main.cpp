#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <QFont>
#include <QVBoxLayout>
#include <QMenu>
#include <QPoint>
#include <QPainter>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //creating a pixmap and adding my image as a parameter
    QPixmap pixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\recipe_rendezvous.png");

    //creating a label and displaying the pixmap in the window using the setPixmap() function
    QLabel label;
    label.setPixmap(pixmap);

    QLabel get_cookin_label(&label);
    get_cookin_label.setGeometry(0, 0, pixmap.width(), pixmap.height());
    get_cookin_label.setScaledContents(true);

    QPixmap get_cookin_image("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\get_cookin_new.png");
    get_cookin_label.setPixmap(get_cookin_image);

    get_cookin_label.hide();

    QLabel credits_label(&label);
    credits_label.setGeometry(0, 0, pixmap.width(), pixmap.height());
    credits_label.setScaledContents(true);

    QPixmap credits_image("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\credits.gif");
    credits_label.setPixmap(credits_image);

    credits_label.hide();

    QPushButton get_cookin("Get Cookin'!", &label);
    get_cookin.setGeometry(20, 250, 150, 50);

    QPushButton gcBackButton("Go Back!", &get_cookin_label);
    gcBackButton.setGeometry(360, 440, 120, 40);
    gcBackButton.setStyleSheet("background-color: lightblue");
    gcBackButton.hide();

    QPushButton quit("Quit", &label);
    quit.setGeometry(20, 310, 150, 50);
    QObject::connect(&quit, &QPushButton::clicked, &QApplication::quit);

    QPushButton credits("Credits", &label);
    credits.setGeometry(20, 370, 150, 50);
    QPushButton cBackButton("Go Back!", &credits_label);
    cBackButton.setGeometry(360, 440, 120, 40);
    cBackButton.setStyleSheet("background-color: lightblue");
    cBackButton.hide();

    QPushButton settings("Settings", &label);
    settings.setGeometry(20, 430, 150, 50);

    QLabel breakfastDishesLabel(&get_cookin_label);
    QPixmap breakfastDishesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishesww.png");
    breakfastDishesLabel.setPixmap(breakfastDishesPixmap);
    breakfastDishesLabel.hide();

    QPushButton bdBackButton("Go Back!", &breakfastDishesLabel);
    bdBackButton.setGeometry(360, 440, 120, 40);
    bdBackButton.setStyleSheet("background-color: lightblue");
    bdBackButton.hide();

    QLabel pancakesLabel(&get_cookin_label);
    QPixmap pancakesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    pancakesLabel.setPixmap(pancakesPixmap);
    QPainter pancakesPainter(&pancakesPixmap);
    QFont recipeFont("Arial", 20);
    pancakesPainter.setFont(recipeFont);
    pancakesPainter.drawText(QPointF(190, 30), "Pancakes!");
    pancakesLabel.setPixmap(pancakesPixmap);
    pancakesLabel.hide();

    QPushButton pancakesBackButton("Go Back!", &pancakesLabel);
    pancakesBackButton.setGeometry(360, 440, 120, 40);
    pancakesBackButton.setStyleSheet("background-color: lightblue");
    pancakesBackButton.hide();

    QMenu breakfastDishesCategories("Breakfast Dishes Categories", &get_cookin);
    QAction *pancakesRecipe = breakfastDishesCategories.addAction("Pancakes");
    QMenu seeBreakfastDishesCategories("Click to see breakfast categories", &get_cookin);
    seeBreakfastDishesCategories.addMenu(&breakfastDishesCategories);

    QMenu categories("Cooking Categories", &get_cookin);
    QAction *breakfastDishes = categories.addAction("Breakfast Dishes");
    QObject::connect(breakfastDishes, &QAction::triggered, [&](){
        breakfastDishesLabel.show();
        gcBackButton.hide();
        bdBackButton.show();
        seeBreakfastDishesCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *appetizersAndSnacks = categories.addAction("Appetizers and Snacks");
    QAction *soupsAndStews = categories.addAction("Soups and Stews");
    QAction *salads = categories.addAction("Salads");
    QAction *vegetarianAndVeganMeals = categories.addAction("Vegetarian and Vegan Meals");
    QAction *seafoodDishes = categories.addAction("Seafood Dishes");
    QAction *poultryDishes = categories.addAction("Poultry Dishes");
    QAction *meatDishes = categories.addAction("Meat Dishes");
    QAction *pastaDishes = categories.addAction("Pasta Dishes");
    QAction *riceDishes = categories.addAction("Rice Dishes");
    QAction *sideDishesAndVegetables = categories.addAction("Side Dishes and Vegetables");
    QAction *saucesDressingsAndMarinades = categories.addAction("Sauces, Dressings and Marinades");
    QAction *bakedGoodsAndDesserts = categories.addAction("Baked Goods and Desserts");
    QAction *beveragesAndCocktails = categories.addAction("Beverages And Cocktails");
    QAction *specialDietaryNeeds = categories.addAction("Special Dietary Needs (gluten-free, dairy-free, low-carb, etc)");
    categories.setStyleSheet("QMenu { background-color: lime; }");

    QMenu seeCategories("Click to see categories", &get_cookin);
    seeCategories.addMenu(&categories);
    seeCategories.setStyleSheet("QMenu { background-color: lime; }");

    QObject::connect(pancakesRecipe, &QAction::triggered, [&pancakesLabel, &breakfastDishesLabel, &bdBackButton, &pancakesBackButton](){
        breakfastDishesLabel.hide();
        pancakesLabel.show();
        bdBackButton.hide();
        pancakesBackButton.show();
    });

    QObject::connect(&bdBackButton, &QPushButton::clicked, [&get_cookin_label, &breakfastDishesLabel, &gcBackButton, &bdBackButton, &seeCategories]() {
        breakfastDishesLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        bdBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&pancakesBackButton, &QPushButton::clicked, [&pancakesLabel, &breakfastDishesLabel, &pancakesBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        pancakesLabel.hide();
        pancakesBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
    });

    QFont font("Tahoma", 16, QFont::Bold);

    get_cookin.setFont(font);
    quit.setFont(font);
    credits.setFont(font);
    settings.setFont(font);
    cBackButton.setFont(font);
    gcBackButton.setFont(font);

    get_cookin.setStyleSheet("background-color: pink");
    quit.setStyleSheet("background-color: red");
    credits.setStyleSheet("background-color: orange");
    settings.setStyleSheet("background-color: yellow");

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

    QObject::connect(&get_cookin, &QPushButton::clicked, [&get_cookin_label, &get_cookin, &quit, &credits, &settings, &label, &gcBackButton, &seeCategories]() {
        gcBackButton.hide();
        get_cookin_label.show();
        get_cookin.hide();
        quit.hide();
        credits.hide();
        settings.hide();

        gcBackButton.show();
        gcBackButton.raise();

        seeCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));

        QObject::connect(&gcBackButton, &QPushButton::clicked, [&label, &get_cookin_label, &get_cookin, &quit, &credits, &settings, &gcBackButton]() {
            get_cookin_label.hide();
            label.show();
            get_cookin.show();
            quit.show();
            credits.show();
            settings.show();
            gcBackButton.hide();
        });
    });


    QObject::connect(&credits, &QPushButton::clicked, [&credits_label, &get_cookin, &quit, &credits, &settings, &label, &cBackButton]() {
        credits_label.show();
        get_cookin.hide();
        quit.hide();
        credits.hide();
        settings.hide();

        QVBoxLayout* layout = new QVBoxLayout(&credits_label);
        QLabel* textLabel = new QLabel("Introducing Recipe Rendezvous, the ultimate cooking recipe app designed by <font color='red'>Fionn O'Gorman</font> (Student ID: 21329354). With Recipe Rendezvous, discover new and exciting recipes right from your front home screen! We are excited to help people learn new recipes and unlock their full culinary potential.", &credits_label);
        textLabel->setWordWrap(true);
        textLabel->setAlignment(Qt::AlignTop | Qt::AlignLeft);
        layout->addWidget(textLabel);
        QFont font("Tahoma", 12.5);
        textLabel->setFont(font);

        textLabel->show();


        cBackButton.show();
        cBackButton.raise();

        QObject::connect(&cBackButton, &QPushButton::clicked, [&label, &credits_label, &get_cookin, &quit, &credits, &settings, &cBackButton]() {
            credits_label.hide();
            label.show();
            get_cookin.show();
            quit.show();
            credits.show();
            settings.show();
            cBackButton.hide();
        });
    });




    return a.exec();
}
