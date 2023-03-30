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
#include <QTextEdit>
#include <QSlider>
#include <QWidget>

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
    QTextEdit *pancakesTextEdit = new QTextEdit(&get_cookin_label);
    pancakesTextEdit->setText("Pancakes!\n\nIngredients:\n\n- 1 1/2 cups all-purpose flour\n- 3 1/2 teaspoons baking powder\n- 1 teaspoon salt\n- 1 tablespoon white sugar\n- 1 1/4 cups milk\n- 1 egg\n- 3 tablespoons butter, melted\n\nDirections:\n\n1. In a large mixing bowl, sift together the flour, baking powder, salt, and sugar.\n2. In a separate mixing bowl, beat the egg and mix in the milk and melted butter.\n3. Add the wet ingredients to the dry ingredients and mix until the batter is smooth.\n4. Heat a lightly oiled griddle or frying pan over medium-high heat.\n5. Scoop 1/4 cup of batter for each pancake onto the griddle or frying pan.\n6. Cook the pancakes until bubbles form on the surface and the edges are dry, then flip them over and cook until the other side is golden brown.\n7. Serve hot with your favorite toppings, such as butter and syrup.\n\nEnjoy your delicious homemade pancakes!");
    pancakesTextEdit->setGeometry(0, 0, 500, 400);
    pancakesTextEdit->hide();
    pancakesLabel.setPixmap(pancakesPixmap);
    pancakesLabel.hide();

    QLabel overnightOatsLabel(&get_cookin_label);
    QPixmap overnightOatsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *overnightOatsTextEdit = new QTextEdit(&get_cookin_label);
    overnightOatsTextEdit->setText("Overnight Oats with Fruits and Nuts!\n\nIngredients:\n\n- 1/2 cup rolled oats\n- 1/2 cup almond milk (or any other milk of your choice)\n- 1/4 cup plain Greek yogurt\n- 1 tablespoon honey (optional)\n- 1/4 teaspoon vanilla extract\n- 1/4 cup chopped nuts (e.g. almonds, walnuts, pecans)1/4 cup chopped fresh fruit (e.g. berries, banana, mango)\n\nDirections:\n\n1. In a medium-sized bowl, mix together the oats, milk, Greek yogurt, honey (if using), and vanilla extract until well combined.\n2. Stir in the chopped nuts and fruit, reserving a small amount of each for garnish.\n3. Cover the bowl with plastic wrap or a lid and refrigerate overnight, or for at least 6-8 hours.\n4. In the morning, give the oats a stir and add more milk if needed to reach your desired consistency.\n5. Top with the reserved nuts and fruit and enjoy!\n\nNote: You can also mix in additional spices or flavorings, such as cinnamon or cocoa powder, to customize the recipe to your liking.");
    overnightOatsTextEdit->setGeometry(0, 0, 500, 400);
    overnightOatsTextEdit->hide();
    overnightOatsLabel.setPixmap(overnightOatsPixmap);
    overnightOatsLabel.hide();

    QLabel yoghurtParfaitLabel(&get_cookin_label);
    QPixmap yoghurtParfaitPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *yoghurtParfaitTextEdit = new QTextEdit(&get_cookin_label);
    yoghurtParfaitTextEdit->setText("Yoghurt Parfait with Granola and Berries!\n\nIngredients:\n\n- 1 cup of Greek yogurt\n- 1 cup of granola\n- 1 cup of mixed berries (strawberries, blueberries, raspberries)\n- 2 tablespoons of honey\n\nDirections:\n\n1. Rinse the berries and cut the strawberries into small pieces.\n2. In a small bowl, mix the Greek yogurt and honey until well combined.\n3. In a tall glass, layer the granola, yogurt mixture, and mixed berries in alternating layers until you reach the top of the glass.\n4. Finish with a layer of mixed berries on top.\n5. Serve immediately or chill in the refrigerator until ready to serve.\n\nEnjoy your delicious and healthy yogurt parfait with granola and berries!");
    yoghurtParfaitTextEdit->setGeometry(0, 0, 500, 400);
    yoghurtParfaitTextEdit->hide();
    yoghurtParfaitLabel.setPixmap(yoghurtParfaitPixmap);
    yoghurtParfaitLabel.hide();

    QLabel avacadoToastLabel(&get_cookin_label);
    QPixmap avacadoToastPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *avacadoToastTextEdit = new QTextEdit(&get_cookin_label);
    avacadoToastTextEdit->setText("Avacado Toast with a Poached Egg!\n\nIngredients\n\n- 1 ripe avocado\n- 2 slices of whole grain bread\n- 2 eggs\n- 1 tablespoon white vinegar\n- Salt and pepper to taste\n- Optional toppings: red pepper flakes, sliced cherry tomatoes, feta cheese, chopped herbs\n\nDirections:\n\n1. Start by toasting the bread slices until they are crispy.\n2. While the bread is toasting, prepare the avocado. Cut the avocado in half, remove the pit, and scoop out the flesh into a small bowl. Use a fork to mash the avocado until it is smooth and creamy. Season with salt and pepper to taste.\n3. Next, poach the eggs. Fill a large pot with water and bring to a gentle simmer over medium heat. Add the white vinegar to the pot, which will help the egg whites set more quickly. Crack one egg into a small bowl. Using a slotted spoon, create a whirlpool in the simmering water, then gently pour the egg into the center of the whirlpool. Let the egg cook for about 3 minutes, then use the slotted spoon to remove it from the water. Repeat with the second egg.\n4. Assemble the avocado toast. Spread a generous amount of the mashed avocado onto each slice of toasted bread. Top with the poached egg, and season with additional salt and pepper if desired. Add any optional toppings, such as red pepper flakes, sliced cherry tomatoes, feta cheese, or chopped herbs.\n5. Serve the avocado toast immediately, while the eggs are still warm and the toast is crispy.\n\nEnjoy!");
    avacadoToastTextEdit->setGeometry(0, 0, 500, 400);
    avacadoToastTextEdit->hide();
    avacadoToastLabel.setPixmap(avacadoToastPixmap);
    avacadoToastLabel.hide();

    QPushButton pancakesBackButton("Go Back!", &pancakesLabel);
    pancakesBackButton.setGeometry(360, 440, 120, 40);
    pancakesBackButton.setStyleSheet("background-color: lightblue");
    pancakesBackButton.hide();

    QPushButton overnightOatsBackButton("Go Back!", &overnightOatsLabel);
    overnightOatsBackButton.setGeometry(360, 440, 120, 40);
    overnightOatsBackButton.setStyleSheet("background-color: lightblue");
    overnightOatsBackButton.hide();

    QPushButton yoghurtParfaitBackButton("Go Back!", &yoghurtParfaitLabel);
    yoghurtParfaitBackButton.setGeometry(360, 440, 120, 40);
    yoghurtParfaitBackButton.setStyleSheet("background-color: lightblue");
    yoghurtParfaitBackButton.hide();

    QPushButton avacadoToastBackButton("Go Back!", &avacadoToastLabel);
    avacadoToastBackButton.setGeometry(360, 440, 120, 40);
    avacadoToastBackButton.setStyleSheet("background-color: lightblue");
    avacadoToastBackButton.hide();

    QMenu breakfastDishesCategories("Breakfast Dishes Categories", &get_cookin);
    QAction *pancakesRecipe = breakfastDishesCategories.addAction("Pancakes");
    QAction *overnightOatsRecipe = breakfastDishesCategories.addAction("Overnight Oats with Fruits and Nuts");
    QAction *yoghurtParfaitRecipe = breakfastDishesCategories.addAction("Yoghurt Parfait with Granola and Berries");
    QAction *avacadoToastRecipe = breakfastDishesCategories.addAction("Avacado Toast with a Poached Egg");
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

    QObject::connect(pancakesRecipe, &QAction::triggered, [&pancakesLabel, &pancakesTextEdit, &pancakesPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &pancakesBackButton](){
        breakfastDishesLabel.hide();
        pancakesLabel.show();
        bdBackButton.hide();
        pancakesBackButton.show();
        pancakesTextEdit->show();
    });
    QObject::connect(overnightOatsRecipe, &QAction::triggered, [&overnightOatsLabel, &overnightOatsTextEdit, &overnightOatsPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &overnightOatsBackButton](){
        breakfastDishesLabel.hide();
        overnightOatsLabel.show();
        bdBackButton.hide();
        overnightOatsBackButton.show();
        overnightOatsTextEdit->show();
    });
    QObject::connect(yoghurtParfaitRecipe, &QAction::triggered, [&yoghurtParfaitLabel, &yoghurtParfaitTextEdit, &yoghurtParfaitPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &yoghurtParfaitBackButton](){
        breakfastDishesLabel.hide();
        yoghurtParfaitLabel.show();
        bdBackButton.hide();
        yoghurtParfaitBackButton.show();
        yoghurtParfaitTextEdit->show();
    });
    QObject::connect(avacadoToastRecipe, &QAction::triggered, [&avacadoToastLabel, &avacadoToastTextEdit, &avacadoToastPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &avacadoToastBackButton](){
        breakfastDishesLabel.hide();
        avacadoToastLabel.show();
        bdBackButton.hide();
        avacadoToastBackButton.show();
        avacadoToastTextEdit->show();
    });

    QObject::connect(&bdBackButton, &QPushButton::clicked, [&get_cookin_label, &breakfastDishesLabel, &gcBackButton, &bdBackButton, &seeCategories]() {
        breakfastDishesLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        bdBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&pancakesBackButton, &QPushButton::clicked, [&pancakesLabel, &pancakesTextEdit, &breakfastDishesLabel, &pancakesBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        pancakesLabel.hide();
        pancakesBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        pancakesTextEdit->hide();
    });
    QObject::connect(&overnightOatsBackButton, &QPushButton::clicked, [&overnightOatsLabel, &overnightOatsTextEdit, &breakfastDishesLabel, &overnightOatsBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        overnightOatsLabel.hide();
        overnightOatsBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        overnightOatsTextEdit->hide();
    });
    QObject::connect(&yoghurtParfaitBackButton, &QPushButton::clicked, [&yoghurtParfaitLabel, &yoghurtParfaitTextEdit, &breakfastDishesLabel, &yoghurtParfaitBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        yoghurtParfaitLabel.hide();
        yoghurtParfaitBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        yoghurtParfaitTextEdit->hide();
    });
    QObject::connect(&avacadoToastBackButton, &QPushButton::clicked, [&avacadoToastLabel, &avacadoToastTextEdit, &breakfastDishesLabel, &avacadoToastBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        avacadoToastLabel.hide();
        avacadoToastBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        avacadoToastTextEdit->hide();
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
