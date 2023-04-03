#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include <QFont>
#include <QVBoxLayout>
#include <QMenu>
#include <QPoint>
#include <QObject>
#include <QTextEdit>
#include <QSlider>
#include <QCheckBox>
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

    QLabel myFavourites_label(&label);
    myFavourites_label.setGeometry(0, 0, pixmap.width(), pixmap.height());
    myFavourites_label.setScaledContents(true);

    QPixmap myFavourites_image("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\myFavourites.png");
    myFavourites_label.setPixmap(myFavourites_image);

    myFavourites_label.hide();

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

    QPushButton myFavourites("My Favourites", &label);
    myFavourites.setGeometry(20, 430, 150, 50);

    QPushButton mfBackButton("Go Back!", &myFavourites_label);
    mfBackButton.setGeometry(360, 440, 120, 40);
    mfBackButton.setStyleSheet("background-color: lightblue");
    mfBackButton.hide();





    //Labels for the food categories





    QLabel breakfastDishesLabel(&get_cookin_label);
    QPixmap breakfastDishesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    breakfastDishesLabel.setPixmap(breakfastDishesPixmap);
    breakfastDishesLabel.hide();

    QLabel appetizersAndSnacksLabel(&get_cookin_label);
    QPixmap appetizersAndSnacksPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    appetizersAndSnacksLabel.setPixmap(appetizersAndSnacksPixmap);
    appetizersAndSnacksLabel.hide();

    QLabel soupsAndStewsLabel(&get_cookin_label);
    QPixmap soupsAndStewsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    soupsAndStewsLabel.setPixmap(soupsAndStewsPixmap);
    soupsAndStewsLabel.hide();

    QLabel saladsLabel(&get_cookin_label);
    QPixmap saladsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    saladsLabel.setPixmap(saladsPixmap);
    saladsLabel.hide();

    QLabel vegetarianAndVeganMealsLabel(&get_cookin_label);
    QPixmap vegetarianAndVeganMealsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\vegetarian.png");
    vegetarianAndVeganMealsLabel.setPixmap(vegetarianAndVeganMealsPixmap);
    vegetarianAndVeganMealsLabel.hide();

    QLabel seafoodDishesLabel(&get_cookin_label);
    QPixmap seafoodDishesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\seafood_dishes.png");
    seafoodDishesLabel.setPixmap(seafoodDishesPixmap);
    seafoodDishesLabel.hide();

    QLabel poultryDishesLabel(&get_cookin_label);
    QPixmap poultryDishesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\poultry_dishes.png");
    poultryDishesLabel.setPixmap(poultryDishesPixmap);
    poultryDishesLabel.hide();

    QLabel meatDishesLabel(&get_cookin_label);
    QPixmap meatDishesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    meatDishesLabel.setPixmap(meatDishesPixmap);
    meatDishesLabel.hide();

    QLabel pastaDishesLabel(&get_cookin_label);
    QPixmap pastaDishesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\pasta_dishes.png");
    pastaDishesLabel.setPixmap(pastaDishesPixmap);
    pastaDishesLabel.hide();

    QLabel saucesDressingsMarinadesLabel(&get_cookin_label);
    QPixmap saucesDressingsMarinadesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\sauces_dressings_marinades.png");
    saucesDressingsMarinadesLabel.setPixmap(saucesDressingsMarinadesPixmap);
    saucesDressingsMarinadesLabel.hide();

    QLabel dessertsLabel(&get_cookin_label);
    QPixmap dessertsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\desserts.png");
    dessertsLabel.setPixmap(dessertsPixmap);
    dessertsLabel.hide();




    //back buttons for the main food labels





    QPushButton bdBackButton("Go Back!", &breakfastDishesLabel);
    bdBackButton.setGeometry(360, 440, 120, 40);
    bdBackButton.setStyleSheet("background-color: lightblue");
    bdBackButton.hide();

    QPushButton aasBackButton("Go Back!", &appetizersAndSnacksLabel);
    aasBackButton.setGeometry(360, 440, 120, 40);
    aasBackButton.setStyleSheet("background-color: lightblue");
    aasBackButton.hide();

    QPushButton sasBackButton("Go Back!", &soupsAndStewsLabel);
    sasBackButton.setGeometry(360, 440, 120, 40);
    sasBackButton.setStyleSheet("background-color: lightblue");
    sasBackButton.hide();

    QPushButton sBackButton("Go Back!", &saladsLabel);
    sBackButton.setGeometry(360, 440, 120, 40);
    sBackButton.setStyleSheet("background-color: lightblue");
    sBackButton.hide();

    QPushButton vavmBackButton("Go Back!", &vegetarianAndVeganMealsLabel);
    vavmBackButton.setGeometry(360, 440, 120, 40);
    vavmBackButton.setStyleSheet("background-color: lightblue");
    vavmBackButton.hide();

    QPushButton sdBackButton("Go Back!", &seafoodDishesLabel);
    sdBackButton.setGeometry(360, 440, 120, 40);
    sdBackButton.setStyleSheet("background-color: lightblue");
    sdBackButton.hide();

    QPushButton pdBackButton("Go Back!", &poultryDishesLabel);
    pdBackButton.setGeometry(360, 440, 120, 40);
    pdBackButton.setStyleSheet("background-color: lightblue");
    pdBackButton.hide();

    QPushButton mdBackButton("Go Back!", &meatDishesLabel);
    mdBackButton.setGeometry(360, 440, 120, 40);
    mdBackButton.setStyleSheet("background-color: lightblue");
    mdBackButton.hide();

    QPushButton ptdBackButton("Go Back!", &pastaDishesLabel);
    ptdBackButton.setGeometry(360, 440, 120, 40);
    ptdBackButton.setStyleSheet("background-color: lightblue");
    ptdBackButton.hide();

    QPushButton sdmBackButton("Go Back!", &saucesDressingsMarinadesLabel);
    sdmBackButton.setGeometry(360, 440, 120, 40);
    sdmBackButton.setStyleSheet("background-color: lightblue");
    sdmBackButton.hide();

    QPushButton dbgBackButton("Go Back!", &dessertsLabel);
    dbgBackButton.setGeometry(360, 440, 120, 40);
    dbgBackButton.setStyleSheet("background-color: lightblue");
    dbgBackButton.hide();





    //labels for the recipes






    QLabel pancakesLabel(&get_cookin_label);
    QPixmap pancakesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *pancakesTextEdit = new QTextEdit(&get_cookin_label);
    pancakesTextEdit->setText("Pancakes!\n\nIngredients:\n\n- 1 1/2 cups all-purpose flour\n- 3 1/2 teaspoons baking powder\n- 1 teaspoon salt\n- 1 tablespoon white sugar\n- 1 1/4 cups milk\n- 1 egg\n- 3 tablespoons butter, melted\n\nDirections:\n\n1. In a large mixing bowl, sift together the flour, baking powder, salt, and sugar.\n2. In a separate mixing bowl, beat the egg and mix in the milk and melted butter.\n3. Add the wet ingredients to the dry ingredients and mix until the batter is smooth.\n4. Heat a lightly oiled griddle or frying pan over medium-high heat.\n5. Scoop 1/4 cup of batter for each pancake onto the griddle or frying pan.\n6. Cook the pancakes until bubbles form on the surface and the edges are dry, then flip them over and cook until the other side is golden brown.\n7. Serve hot with your favorite toppings, such as butter and syrup.\n\nEnjoy your delicious homemade pancakes!");
    pancakesTextEdit->setGeometry(0, 0, 500, 400);
    pancakesTextEdit->hide();
    pancakesLabel.setPixmap(pancakesPixmap);
    pancakesLabel.hide();
    QCheckBox pancakesCheckBox;
    pancakesCheckBox.setText("Add to My Favourites");
    pancakesCheckBox.setParent(&pancakesLabel);
    pancakesCheckBox.setStyleSheet("QCheckBox { background-color: red; }");
    pancakesCheckBox.move(50, 435);

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

    QLabel breakfastBurritoLabel(&get_cookin_label);
    QPixmap breakfastBurritoPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *breakfastBurritoTextEdit = new QTextEdit(&get_cookin_label);
    breakfastBurritoTextEdit->setText("Breakfast Burrito with Scrambled Eggs, Bacon and Cheese!\n\nIngredients\n\n- 4 large egg4 slices of bacon, chopped\n- 1/2 cup shredded cheddar cheese\n- 4 large flour tortillas\n- 1/2 teaspoon salt\n- 1/4 teaspoon black pepper\n- 1 tablespoon olive oil\n\nDirections:\n\n1. In a large skillet over medium heat, cook the chopped bacon until crispy. Remove from the pan and set aside.\n2. In a small bowl, whisk the eggs with salt and black pepper until well beaten.\n3. In the same skillet, heat the olive oil over medium heat. Add the beaten eggs and scramble until they're cooked through, stirring occasionally.\n4. Warm the flour tortillas in the microwave or in a dry skillet.\n5. Divide the scrambled eggs among the tortillas. Sprinkle with the crispy bacon and shredded cheddar cheese.\n6. Roll up the tortillas, tucking in the sides to make a burrito shape.\n7. Serve hot and enjoy!");
    breakfastBurritoTextEdit->setGeometry(0, 0, 500, 400);
    breakfastBurritoTextEdit->hide();
    breakfastBurritoLabel.setPixmap(breakfastBurritoPixmap);
    breakfastBurritoLabel.hide();

    QLabel shakshukaLabel(&get_cookin_label);
    QPixmap shakshukaPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *shakshukaTextEdit = new QTextEdit(&get_cookin_label);
    shakshukaTextEdit->setText("Shakshuka with Crispy Bread!\n\nIngredients\n\n- 1/4 cup olive oil1 large onion, chopped\n- 4 garlic cloves, minced\n- 1 red bell pepper, seeded and chopped\n- 2 cans (14.5 ounces each) diced tomatoes\n- 2 tsp smoked paprika\n- 1 tsp cumin\n- Salt and black pepper to taste\n- 6 large eggs\n- 1/4 cup crumbled feta cheese\n- 2 tbsp chopped fresh parsley\n- Crusty bread for serving\n\nDirections:\n\n1. Preheat oven to 375°F (190°C).\n2. In a large cast iron skillet or oven-safe skillet, heat the olive oil over medium heat.\n3. Add the chopped onions and cook until they are translucent and starting to brown.\n4. Add the minced garlic and chopped red bell pepper, and cook for another 3-5 minutes, until the pepper is soft.\n5. Pour in the diced tomatoes, smoked paprika, cumin, salt, and black pepper, and stir everything together.\n6. Allow the mixture to simmer for about 10 minutes, or until it has thickened slightly.\n7. Create small wells in the tomato mixture with a spoon and crack the eggs into them.\n8. Sprinkle crumbled feta cheese over the eggs.\n9. Transfer the skillet to the oven and bake until the egg whites are set but the yolks are still runny, about 10-15 minute.\n10. Remove the skillet from the oven and sprinkle chopped parsley over the top.\n11. Serve immediately with crusty bread for dipping and scooping up the shakshuka.");
    shakshukaTextEdit->setGeometry(0, 0, 500, 400);
    shakshukaTextEdit->hide();
    shakshukaLabel.setPixmap(shakshukaPixmap);
    shakshukaLabel.hide();

    QLabel huevosRancherosLabel(&get_cookin_label);
    QPixmap huevosRancherosPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *huevosRancherosTextEdit = new QTextEdit(&get_cookin_label);
    huevosRancherosTextEdit->setText("Huevos Rancheros with Salsa and Guacamole!\n\nIngredients:\n\nFor the salsa:\n\n- 3 medium tomatoes\n- 1/2 red onion\n- 1 jalapeño pepper\n- 2 cloves garlic\n- 1/4 cup fresh cilantro\n- Juice of 1 lime\n- Salt and pepper to taste\n\nFor the guacamole:\n\n- 2 ripe avocados\n- 1/4 red onion, diced\n- 1 small tomato, diced\n- 1/4 cup fresh cilantro\n- Juice of 1 lime\n- Salt and pepper to taste\n\nFor the huevos rancheros:\n\n- 4 corn tortillas\n- 4 large eggs\n- 1/2 cup refried beans\n- 1/4 cup crumbled queso fresco\n- Salt and pepper to taste\n- 1 tablespoon olive oil\n\nDirections:\n\n1. To make the salsa, chop the tomatoes, red onion, jalapeño pepper, garlic, and cilantro and mix together in a bowl. Add lime juice, salt, and pepper to taste. Set aside.\n2. To make the guacamole, mash the avocados in a bowl with a fork. Add the diced red onion, tomato, cilantro, lime juice, salt, and pepper. Mix well and set aside.\n3. Heat the refried beans in a saucepan over low heat until warm.\n4. Heat the tortillas in a dry skillet over medium-high heat until lightly browned and warmed through. Keep the tortillas warm in a clean towel or tortilla warmer.\n5. In the same skillet, heat the olive oil over medium-high heat. Crack the eggs into the skillet and season with salt and pepper. Cook until the whites are set and the yolks are still runny, about 2-3 minutes.\n6. To assemble the huevos rancheros, place a warm tortilla on a plate. Spread a spoonful of refried beans over the tortilla. Top with a fried egg, and spoon salsa and guacamole over the egg. Sprinkle with crumbled queso fresco.\n7. Repeat with the remaining tortillas, eggs, refried beans, salsa, guacamole, and queso fresco.\n8. Serve immediately and enjoy!");
    huevosRancherosTextEdit->setGeometry(0, 0, 500, 400);
    huevosRancherosTextEdit->hide();
    huevosRancherosLabel.setPixmap(huevosRancherosPixmap);
    huevosRancherosLabel.hide();

    QLabel croissantBreakfastSandwichLabel(&get_cookin_label);
    QPixmap croissantBreakfastSandwichPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *croissantBreakfastSandwichTextEdit = new QTextEdit(&get_cookin_label);
    croissantBreakfastSandwichTextEdit->setText("Croissant Breakfast Sandwich with Scrambled Eggs, Bacon and Cheese!\n\nIngredients:\n\n- 2 croissants, sliced in half\n- 4 slices of bacon\n- 4 large eggs\n- 1/4 cup of shredded cheddar cheese\n- Salt and pepper, to taste\n- 1 tablespoon of butter\n\nDirections:\n\n1. Preheat the oven to 350°F (175°C). Line a baking sheet with parchment paper.\n2. In a large skillet over medium heat, cook the bacon until crispy. Remove the bacon from the pan and place it on paper towels to drain.\n3. In the same skillet, melt the butter over medium heat.\n4. Crack the eggs into a bowl and whisk together. Season with salt and pepper, to taste.\n5. Pour the eggs into the skillet and stir constantly until they are scrambled and cooked to your desired doneness.\n6. Sprinkle the shredded cheddar cheese on top of the scrambled eggs and stir until the cheese is melted and the eggs are evenly coated.\n7. Place the croissants on the prepared baking sheet and toast them in the oven for 5-7 minutes, or until they are lightly golden brown.\n8. Assemble the croissant breakfast sandwiches by placing a scoop of the scrambled eggs on the bottom half of each croissant. Top with 2 slices of bacon and the top half of the croissant.\n9. Serve immediately and enjoy your delicious croissant breakfast sandwich!\n\nNote: You can also add other toppings like sliced avocado, tomato, or spinach to your sandwich if you like.");
    croissantBreakfastSandwichTextEdit->setGeometry(0, 0, 500, 400);
    croissantBreakfastSandwichTextEdit->hide();
    croissantBreakfastSandwichLabel.setPixmap(croissantBreakfastSandwichPixmap);
    croissantBreakfastSandwichLabel.hide();

    QLabel eggsBenedictLabel(&get_cookin_label);
    QPixmap eggsBenedictPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *eggsBenedictTextEdit = new QTextEdit(&get_cookin_label);
    eggsBenedictTextEdit->setText("Eggs Benedict with Hollandaise Sauce and Smoked Salmon!\n\nIngredients\n\n- 4 English muffins, split and toasted\n- 8 slices smoked salmon\n- 8 large eggs\n- 1 tablespoon white vinegar\n- Salt and pepper, to taste\n- Fresh chives or parsley, chopped, for garnish\n\nFor the Hollandaise Sauce:\n\n- 3 large egg yolks\n- 1 tablespoon water\n- 1 tablespoon fresh lemon juice\n- 1/2 cup unsalted butter, melted\n- Salt and cayenne pepper, to taste\n\nDirections:\n\n1. To make the Hollandaise sauce, whisk the egg yolks, water, and lemon juice together in a heatproof bowl set over a saucepan of simmering water. Whisk constantly until the mixture starts to thicken and becomes pale yellow, about 2-3 minutes.\n2. Slowly pour the melted butter into the egg mixture, whisking constantly until the sauce has thickened and is smooth. Remove from heat and season with salt and cayenne pepper to taste. Cover and keep warm until ready to serve.\n3. Bring a large pot of water to a boil. Add 1 tablespoon of vinegar to the water. Crack each egg into a separate small bowl. Reduce the heat to low so the water is just simmering, then use a spoon to create a whirlpool in the water. Carefully slide each egg into the center of the whirlpool and cook for 3-4 minutes until the whites are set and the yolks are still runny.\n4. While the eggs are poaching, place a slice of smoked salmon on each toasted English muffin half.Use a slotted spoon to remove the poached eggs from the water and place them on top of the smoked salmon.\n6. Spoon the Hollandaise sauce over the poached eggs and sprinkle with chopped chives or parsley.\n7. Serve immediately and enjoy!");
    eggsBenedictTextEdit->setGeometry(0, 0, 500, 400);
    eggsBenedictTextEdit->hide();
    eggsBenedictLabel.setPixmap(eggsBenedictPixmap);
    eggsBenedictLabel.hide();

    QLabel belgianWafflesLabel(&get_cookin_label);
    QPixmap belgianWafflesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\breakfast_dishes.png");
    QTextEdit *belgianWafflesTextEdit = new QTextEdit(&get_cookin_label);
    belgianWafflesTextEdit->setText("Belgian Waffles Recipe\n\nIngredients:\n\n- 2 cups all-purpose flour\n- 3/4 cup white sugar\n- 3-1/2 teaspoons baking powder\n- 2 eggs\n- 1-1/2 cups warm milk\n- 1/3 cup melted butter\n- 1 teaspoon vanilla extract\n- 1/2 cup whipped cream\n- Fresh fruit for topping (such as strawberries, blueberries, or raspberries)\n\nDirections:\n\n1. Preheat waffle iron.\n2. In a large bowl, whisk together flour, sugar, and baking powder.\n3. In another bowl, beat eggs until fluffy, then mix in warm milk, melted butter, and vanilla extract.\n4. Pour the wet ingredients into the dry ingredients and mix until smooth.\n5. Pour batter onto the preheated waffle iron and cook until golden brown and crisp.\n6. Serve waffles with whipped cream and fresh fruit toppings.\n");
    belgianWafflesTextEdit->setGeometry(0, 0, 500, 400);
    belgianWafflesTextEdit->hide();
    belgianWafflesLabel.setPixmap(belgianWafflesPixmap);
    belgianWafflesLabel.hide();

    QLabel classicGuacamoleLabel(&get_cookin_label);
    QPixmap classicGuacamolePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *classicGuacamoleTextEdit = new QTextEdit(&get_cookin_label);
    classicGuacamoleTextEdit->setText("Classic Guacamole!\n\nIngredients:\n\n- 2 ripe avocados, peeled and pitted\n- 1/4 cup diced red onion\n- 1/4 cup chopped fresh cilantro\n- 2 tablespoons lime juice\n- 1/2 teaspoon salt\n- 1/4 teaspoon ground cumin\n- 1/4 teaspoon cayenne pepper\n\nDirections:\n\n1. In a medium bowl, mash the avocados with a fork or a potato masher.\n2. Stir in the diced red onion, chopped cilantro, lime juice, salt, cumin, and cayenne pepper.\n3. Mix well until all ingredients are combined and the guacamole is smooth and creamy.\n4. Taste and adjust seasoning as needed.\n5. Serve immediately with tortilla chips, crackers, or as a topping for tacos, burritos, or sandwiches.");
    classicGuacamoleTextEdit->setGeometry(0, 0, 500, 400);
    classicGuacamoleTextEdit->hide();
    classicGuacamoleLabel.setPixmap(classicGuacamolePixmap);
    classicGuacamoleLabel.hide();

    QLabel bakedSweetPotatoFriesLabel(&get_cookin_label);
    QPixmap bakedSweetPotatoFriesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *bakedSweetPotatoFriesTextEdit = new QTextEdit(&get_cookin_label);
    bakedSweetPotatoFriesTextEdit->setText("Baked Sweet Potato Fries!\n\nIngredients:\n\n- 2 large sweet potatoes, peeled and cut into sticks\n- 2 tablespoons olive oil\n- 1/2 teaspoon salt\n- 1/2 teaspoon garlic powder\n- 1/2 teaspoon paprika\n\nDirections:\n\n1. Preheat oven to 425°F (220°C). Line a baking sheet with parchment paper.\n2. In a large bowl, toss sweet potato sticks with olive oil, salt, garlic powder, and paprika until evenly coated.\n3. Spread the sweet potato sticks out in a single layer on the prepared baking sheet.\n4. Bake for 20-25 minutes, flipping the fries halfway through, until they are crispy and lightly browned on the outside and tender on the inside.\n5. Serve hot with your favorite dipping sauce, such as ketchup or aioli.");
    bakedSweetPotatoFriesTextEdit->setGeometry(0, 0, 500, 400);
    bakedSweetPotatoFriesTextEdit->hide();
    bakedSweetPotatoFriesLabel.setPixmap(bakedSweetPotatoFriesPixmap);
    bakedSweetPotatoFriesLabel.hide();

    QLabel capreseSkewersLabel(&get_cookin_label);
    QPixmap capreseSkewersPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *capreseSkewersTextEdit = new QTextEdit(&get_cookin_label);
    capreseSkewersTextEdit->setText("Caprese Skewers with Balsamic Glaze!\n\nIngredients:\n\n- 1 pint cherry tomatoes, washed and dried\n- 8 ounces fresh mozzarella, cut into bite-sized pieces\n- 1/2 cup fresh basil leaves, washed and dried\n- 1/4 cup balsamic vinegar\n- 2 tablespoons honey\n- 1/4 teaspoon salt\n- 1/4 teaspoon black pepper\n- 16 skewers\n\nDirections:\n\n1. Thread cherry tomatoes, mozzarella, and basil leaves onto skewers.\n2. In a small saucepan, heat balsamic vinegar, honey, salt, and black pepper over medium heat.\n3. Bring the mixture to a simmer and let it cook for 5-7 minutes, stirring occasionally, until it has thickened into a glaze.\n4. Remove the saucepan from heat and let it cool slightly.\n5. Brush the balsamic glaze over the caprese skewers.\n6. Serve the caprese skewers at room temperature as a tasty appetizer or snack.");
    capreseSkewersTextEdit->setGeometry(0, 0, 500, 400);
    capreseSkewersTextEdit->hide();
    capreseSkewersLabel.setPixmap(capreseSkewersPixmap);
    capreseSkewersLabel.hide();

    QLabel crispyParmesanZucchiniFriesLabel(&get_cookin_label);
    QPixmap crispyParmesanZucchiniFriesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *crispyParmesanZucchiniFriesTextEdit = new QTextEdit(&get_cookin_label);
    crispyParmesanZucchiniFriesTextEdit->setText("Crispy Parmesan Zucchini Fries!\n\nIngredients:\n\n- 2 medium zucchini, cut into fries\n- 1/2 cup all-purpose flour\n- 1/2 teaspoon garlic powder\n- 1/2 teaspoon dried oregano\n- 1/4 teaspoon salt\n- 1/4 teaspoon black pepper\n- 2 eggs, beaten\n- 1 cup seasoned breadcrumbs\n- 1/2 cup grated Parmesan cheese\n- Cooking spray\n\nDirections:\n\n1. Preheat oven to 425°F (220°C). Line a baking sheet with parchment paper.\n2. In a shallow dish, combine flour, garlic powder, oregano, salt, and black pepper.\n3. In another shallow dish, beat eggs.\n4. In a third shallow dish, combine breadcrumbs and grated Parmesan cheese.\n5. Dredge zucchini fries in the flour mixture, shaking off any excess.\n6. Dip the fries into the beaten eggs, then coat them with the breadcrumb mixture.\n7. Place the coated fries in a single layer on the prepared baking sheet.\n8. Spray the fries with cooking spray.\n9. Bake for 15-20 minutes, flipping the fries halfway through, until they are golden brown and crispy.\n10. Serve hot with your favorite dipping sauce, such as marinara or ranch.");
    crispyParmesanZucchiniFriesTextEdit->setGeometry(0, 0, 500, 400);
    crispyParmesanZucchiniFriesTextEdit->hide();
    crispyParmesanZucchiniFriesLabel.setPixmap(capreseSkewersPixmap);
    crispyParmesanZucchiniFriesLabel.hide();

    QLabel spinachAndArtichokeDipLabel(&get_cookin_label);
    QPixmap spinachAndArtichokeDipPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *spinachAndArtichokeDipTextEdit = new QTextEdit(&get_cookin_label);
    spinachAndArtichokeDipTextEdit->setText("Spinach and Artichoke Dip!\n\nIngredients:\n\n- 8 oz cream cheese, softened\n- 1/4 cup mayonnaise\n- 1/4 cup sour cream\n- 1/4 cup grated Parmesan cheese\n- 1/4 cup grated Romano cheese\n- 1/2 cup shredded mozzarella cheese\n- 1 clove garlic, minced\n- 1/4 teaspoon red pepper flakes\n- 1/4 teaspoon salt\n- 1/4 teaspoon black pepper\n- 1 can (14 oz) artichoke hearts, drained and chopped\n- 1 package (10 oz) frozen chopped spinach, thawed and drained\n\nDirections:\n\n1. Preheat oven to 350°F (175°C).\n2. In a large bowl, mix cream cheese, mayonnaise, sour cream, Parmesan cheese, Romano cheese, mozzarella cheese, garlic, red pepper flakes, salt, and black pepper until well combined.\n3. Add chopped artichoke hearts and spinach to the mixture, stirring until evenly distributed.\n4. Spread the mixture evenly in a baking dish.\n5. Bake for 20-25 minutes, or until the dip is hot and bubbly.\n6. Serve hot with tortilla chips, pita chips, or sliced baguette.");
    spinachAndArtichokeDipTextEdit->setGeometry(0, 0, 500, 400);
    spinachAndArtichokeDipTextEdit->hide();
    spinachAndArtichokeDipLabel.setPixmap(spinachAndArtichokeDipPixmap);
    spinachAndArtichokeDipLabel.hide();

    QLabel miniQuichesLabel(&get_cookin_label);
    QPixmap miniQuichesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *miniQuichesTextEdit = new QTextEdit(&get_cookin_label);
    miniQuichesTextEdit->setText("Mini Quiches with Gruyere and Bacon!\n\nIngredients:\n- 1 sheet frozen puff pastry, thawed\n- 6 slices bacon, cooked and crumbled\n- 1/2 cup shredded Gruyere cheese\n- 2 tablespoons chopped fresh chives\n- 3 eggs\n- 1/2 cup heavy cream\n- Salt and black pepper, to taste\n\nDirections:\n\n1. Preheat oven to 375°F (190°C). Grease a 12-cup muffin tin.\n2. Unfold the puff pastry sheet onto a floured surface. Roll it out slightly to smooth out any creases.\n3. Cut the pastry sheet into 12 equal squares.\n4. Fit each pastry square into a muffin cup, pressing it down gently to create a pastry cup.\n5. Sprinkle the crumbled bacon, shredded Gruyere cheese, and chopped chives evenly into each pastry cup.\n6. In a small bowl, whisk together the eggs, heavy cream, salt, and black pepper.\n7. Pour the egg mixture into each pastry cup, filling it up to the top.\n8. Bake for 20-25 minutes, or until the quiches are puffed up and golden brown.\n9. Let cool for a few minutes before removing the quiches from the muffin tin.\n10. Serve warm or at room temperature.");
    miniQuichesTextEdit->setGeometry(0, 0, 500, 400);
    miniQuichesTextEdit->hide();
    miniQuichesLabel.setPixmap(miniQuichesPixmap);
    miniQuichesLabel.hide();

    QLabel buffaloChickenMeatballsLabel(&get_cookin_label);
    QPixmap buffaloChickenMeatballsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *buffaloChickenMeatballsTextEdit = new QTextEdit(&get_cookin_label);
    buffaloChickenMeatballsTextEdit->setText("Buffalo Chicken Meatballs!\n\nIngredients:\n\n- 1 lb ground chicken\n- 1/2 cup panko breadcrumbs\n- 1/4 cup chopped celery\n- 1/4 cup chopped onion\n- 1 egg, lightly beaten\n- 1/4 cup buffalo sauce\n- 1/4 cup crumbled blue cheese\n- 1/4 teaspoon salt\n- 1/4 teaspoon black pepper\n- Ranch or blue cheese dressing, for serving\n\nDirections:\n\n1. Preheat oven to 400°F (200°C). Grease a baking sheet.\n2. In a large bowl, mix together ground chicken, panko breadcrumbs, chopped celery, chopped onion, lightly beaten egg, buffalo sauce, crumbled blue cheese, salt, and black pepper until well combined.\n3. Using a small cookie scoop or tablespoon, form the mixture into 1-inch meatballs and place them onto the prepared baking sheet.\n4. Bake for 15-18 minutes, or until the meatballs are cooked through and lightly browned.\n5. Serve hot with ranch or blue cheese dressing for dipping.");
    buffaloChickenMeatballsTextEdit->setGeometry(0, 0, 500, 400);
    buffaloChickenMeatballsTextEdit->hide();
    buffaloChickenMeatballsLabel.setPixmap(buffaloChickenMeatballsPixmap);
    buffaloChickenMeatballsLabel.hide();

    QLabel grilledShrimpLabel(&get_cookin_label);
    QPixmap grilledShrimpPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *grilledShrimpTextEdit = new QTextEdit(&get_cookin_label);
    grilledShrimpTextEdit->setText("Grilled Shrimp with Mango Salsa!\n\nIngredients:\n\n- 1 lb large shrimp, peeled and deveined\n- 1 tablespoon olive oil\n- Salt and black pepper, to taste\n- 1 large ripe mango, peeled and diced\n- 1/2 red bell pepper, diced\n- 1/4 red onion, diced\n- 2 tablespoons chopped fresh cilantro\n- 1 tablespoon lime juice\n\nDirections:\n\n1. Preheat grill to medium-high heat.\n2. In a bowl, toss the peeled and deveined shrimp with olive oil, salt, and black pepper.\n3. Grill the shrimp for 2-3 minutes per side, or until they are cooked through and lightly charred.\n4. In a separate bowl, combine the diced mango, red bell pepper, red onion, chopped cilantro, and lime juice.\n5. Serve the grilled shrimp hot with the mango salsa on top or on the side.");
    grilledShrimpTextEdit->setGeometry(0, 0, 500, 400);
    grilledShrimpTextEdit->hide();
    grilledShrimpLabel.setPixmap(grilledShrimpPixmap);
    grilledShrimpLabel.hide();

    QLabel sausageRollsLabel(&get_cookin_label);
    QPixmap sausageRollsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *sausageRollsTextEdit = new QTextEdit(&get_cookin_label);
    sausageRollsTextEdit->setText("Homemade Sausage Rolls with Spicy Mustard!\n\nIngredients:\n\n- 1 lb ground pork sausage\n- 1/2 cup breadcrumbs\n- 1/4 cup chopped onion\n- 1 egg, lightly beaten\n- 1 teaspoon dried sage\n- 1/2 teaspoon salt\n- 1/4 teaspoon black pepper\n- 1 sheet frozen puff pastry, thawed\n- 1/4 cup spicy brown mustard\n\nDirections:\n\n1. Preheat oven to 400°F (200°C). Line a baking sheet with parchment paper.\n2. In a large bowl, mix together ground pork sausage, breadcrumbs, chopped onion, lightly beaten egg, dried sage, salt, and black pepper until well combined.\n3. Roll out the puff pastry sheet on a lightly floured surface into a rectangle approximately 12 inches by 8 inches.\n4. Spread the spicy brown mustard evenly over the puff pastry sheet.\n5. Spoon the sausage mixture onto the puff pastry sheet in a line down the center.\n6. Fold the puff pastry over the sausage mixture and press the edges together to seal.\n7. Cut the sausage roll into 8-10 pieces and place them onto the prepared baking sheet.\n8. Bake for 20-25 minutes, or until the pastry is golden brown and the sausage is cooked through.\n9. Serve hot with extra spicy brown mustard for dipping.");
    sausageRollsTextEdit->setGeometry(0, 0, 500, 400);
    sausageRollsTextEdit->hide();
    sausageRollsLabel.setPixmap(sausageRollsPixmap);
    sausageRollsLabel.hide();

    QLabel lobsterBisqueLabel(&get_cookin_label);
    QPixmap lobsterBisquePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    QTextEdit *lobsterBisqueTextEdit = new QTextEdit(&get_cookin_label);
    lobsterBisqueTextEdit->setText("Lobster Bisque Shooters with Truffle Oil!\n\nIngredients:\n\n- 2 lobster tails, cooked and meat removed\n- 1 tablespoon olive oil\n- 1 tablespoon butter\n- 1/2 onion, chopped\n- 2 cloves garlic, minced\n- 1/4 cup brandy\n- 1 tablespoon tomato paste\n- 4 cups fish or seafood stock\n- 1 cup heavy cream\n- Salt and black pepper, to taste\n- Truffle oil, for drizzling\n- Chopped fresh chives, for garnish\n\nDirections:\n\n1. In a large pot, heat the olive oil and butter over medium heat.\n2. Add the chopped onion and minced garlic, and sauté for 2-3 minutes, or until the onion is soft and translucent.\n3. Add the cooked lobster meat to the pot, and stir to combine.\n4. Pour in the brandy, and cook until most of the liquid has evaporated.\n5. Add the tomato paste and fish or seafood stock to the pot, and bring to a simmer.\n6. Allow the soup to simmer for 20-30 minutes, or until it has reduced by about one-third and thickened slightly.\n7. Remove the pot from heat, and use an immersion blender or transfer the soup to a blender to puree until smooth.\n8. Return the pureed soup to the pot, and stir in the heavy cream. Heat the soup gently over low heat until warmed through.\n9. Season with salt and black pepper to taste.\n10. Ladle the soup into shot glasses or small bowls, and drizzle with truffle oil.\n11. Garnish with chopped fresh chives, and serve immediately.");
    lobsterBisqueTextEdit->setGeometry(0, 0, 500, 400);
    lobsterBisqueTextEdit->hide();
    lobsterBisqueLabel.setPixmap(lobsterBisquePixmap);
    lobsterBisqueLabel.hide();

    QLabel tomatoBasilSoupLabel(&get_cookin_label);
    QPixmap tomatoBasilSoupPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *tomatoBasilSoupTextEdit = new QTextEdit(&get_cookin_label);
    tomatoBasilSoupTextEdit->setText("Tomato Basil Soup!\n\nIngredients:\n\n- 2 tablespoons olive oil\n- 1 onion, chopped\n- 2 cloves garlic, minced\n- 2 cans (28 oz each) crushed tomatoes\n- 1 can (14 oz) chicken broth\n- 1 tablespoon sugar\n- 1 teaspoon salt\n- 1/4 teaspoon black pepper\n- 1/4 cup chopped fresh basil leaves\n- 1/2 cup heavy cream\n\nDirections:\n\n1. In a large pot, heat the olive oil over medium heat.\n2. Add the chopped onion and minced garlic, and sauté for 2-3 minutes, or until the onion is soft and translucent.\n3. Add the crushed tomatoes, chicken broth, sugar, salt, and black pepper to the pot, and bring to a boil.\n4. Reduce the heat to low, and simmer the soup for 15-20 minutes, stirring occasionally.\n5. Stir in the chopped fresh basil leaves, and simmer for an additional 5-10 minutes.\n6. Use an immersion blender or transfer the soup to a blender to puree until smooth.\n7. Return the pureed soup to the pot, and stir in the heavy cream. Heat the soup gently over low heat until warmed through.\n8. Season with additional salt and black pepper to taste, if desired.\n9. Serve hot with crusty bread or croutons.");
    tomatoBasilSoupTextEdit->setGeometry(0, 0, 500, 400);
    tomatoBasilSoupTextEdit->hide();
    tomatoBasilSoupLabel.setPixmap(tomatoBasilSoupPixmap);
    tomatoBasilSoupLabel.hide();

    QLabel lentilSoupLabel(&get_cookin_label);
    QPixmap lentilSoupPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *lentilSoupTextEdit = new QTextEdit(&get_cookin_label);
    lentilSoupTextEdit->setText("Lentil Soup!\n\nIngredients:\n\n- 1 cup dry lentils, rinsed and drained\n- 6 cups vegetable broth\n- 1 onion, chopped\n- 2 carrots, peeled and chopped\n- 2 celery stalks, chopped\n- 3 cloves garlic, minced\n- 2 tablespoons olive oil\n- 1 teaspoon ground cumin\n- 1/2 teaspoon paprika\n- 1/4 teaspoon cayenne pepper\n- 1/4 teaspoon black pepper\n- 1 bay leaf\n- Salt, to taste\n- 1/4 cup chopped fresh parsley\n\nDirections:\n\n1. In a large pot, heat the olive oil over medium heat.\n2. Add the chopped onion, carrots, celery, and minced garlic, and sauté for 5-7 minutes, or until the vegetables are soft and the onion is translucent.\n3. Add the rinsed and drained lentils, vegetable broth, ground cumin, paprika, cayenne pepper, black pepper, and bay leaf to the pot, and bring to a boil.\n4. Reduce the heat to low, and simmer the soup for 25-30 minutes, or until the lentils are tender.\n5. Remove the bay leaf, and discard.\n6. Use an immersion blender or transfer about half of the soup to a blender to puree until smooth. Return the pureed soup to the pot.\n7. Season with salt to taste.\n8. Ladle the soup into bowls, and garnish with chopped fresh parsley.\n9. Serve hot with crusty bread or crackers.");
    lentilSoupTextEdit->setGeometry(0, 0, 500, 400);
    lentilSoupTextEdit->hide();
    lentilSoupLabel.setPixmap(lentilSoupPixmap);
    lentilSoupLabel.hide();

    QLabel chickenNoodleSoupLabel(&get_cookin_label);
    QPixmap chickenNoodleSoupPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *chickenNoodleSoupTextEdit = new QTextEdit(&get_cookin_label);
    chickenNoodleSoupTextEdit->setText("Chicken Noodle Soup!\n\nIngredients:\n\n- 2 tablespoons olive oil\n- 1 onion, chopped\n- 3 carrots, peeled and chopped\n- 3 celery stalks, chopped\n- 2 cloves garlic, minced\n- 8 cups chicken broth\n- 2 cups cooked shredded chicken\n- 2 cups egg noodles\n- 1 bay leaf\n- 1/2 teaspoon dried thyme\n- Salt and black pepper, to taste\n- 1/4 cup chopped fresh parsley\n\nDirections:\n\n1. In a large pot, heat the olive oil over medium heat.\n2. Add the chopped onion, carrots, celery, and minced garlic, and sauté for 5-7 minutes, or until the vegetables are soft and the onion is translucent.\n3. Add the chicken broth, shredded chicken, egg noodles, bay leaf, dried thyme, salt, and black pepper to the pot, and bring to a boil.\n4. Reduce the heat to low, and simmer the soup for 15-20 minutes, or until the egg noodles are cooked.\n5. Remove the bay leaf, and discard.\n6. Season with additional salt and black pepper to taste, if desired.\n7. Ladle the soup into bowls, and garnish with chopped fresh parsley.\n8. Serve hot with crusty bread or crackers.");
    chickenNoodleSoupTextEdit->setGeometry(0, 0, 500, 400);
    chickenNoodleSoupTextEdit->hide();
    chickenNoodleSoupLabel.setPixmap(chickenNoodleSoupPixmap);
    chickenNoodleSoupLabel.hide();

    QLabel beefStewLabel(&get_cookin_label);
    QPixmap beefStewPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *beefStewTextEdit = new QTextEdit(&get_cookin_label);
    beefStewTextEdit->setText("Slow Cooker Beef Stew!\n\nIngredients:\n\n- 2 pounds beef stew meat, cut into 1-inch pieces\n- 3 tablespoons flour\n- 1 teaspoon salt\n- 1/2 teaspoon black pepper\n- 1/2 teaspoon garlic powder\n- 1/2 teaspoon paprika\n- 2 tablespoons olive oil\n- 1 onion, chopped\n- 2 carrots, peeled and chopped\n- 2 celery stalks, chopped\n- 3 cloves garlic, minced\n- 4 cups beef broth\n- 1 tablespoon tomato paste\n- 1 bay leaf\n- 1 teaspoon dried thyme\n- 4 potatoes, peeled and chopped into 1-inch pieces\n- 2 cups chopped vegetables (such as carrots, celery, and green beans)\n- Salt and black pepper, to taste\n- Chopped fresh parsley, for garnish\n\nDirections:\n\n1. In a small bowl, mix together the flour, salt, black pepper, garlic powder, and paprika.\n2. Toss the beef stew meat in the flour mixture, making sure all pieces are coated evenly.\n3. In a large skillet, heat the olive oil over medium-high heat. Add the coated beef and cook until browned on all sides.\n4. Transfer the browned beef to a slow cooker.\n5. Add the chopped onion, carrots, celery, minced garlic, beef broth, tomato paste, bay leaf, and dried thyme to the slow cooker. Stir to combine.\n6. Cover the slow cooker and cook on low heat for 8-10 hours, or on high heat for 4-6 hours, or until the beef is tender.\n7. Add the chopped potatoes and vegetables to the slow cooker during the last hour of cooking, and stir to combine.\n8. Season with additional salt and black pepper to taste, if desired.\n9. Ladle the beef stew into bowls, and garnish with chopped fresh parsley.\n10. Serve hot with crusty bread or crackers.");
    beefStewTextEdit->setGeometry(0, 0, 500, 400);
    beefStewTextEdit->hide();
    beefStewLabel.setPixmap(beefStewPixmap);
    beefStewLabel.hide();

    QLabel butternutSquashSoupLabel(&get_cookin_label);
    QPixmap butternutSquashSoupPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *butternutSquashSoupTextEdit = new QTextEdit(&get_cookin_label);
    butternutSquashSoupTextEdit->setText("Butternut Squash Soup with Cinnamon and Maple Syrup!\n\nIngredients:\n\n- 1 butternut squash, peeled and seeded\n- 2 tablespoons olive oil\n- 1 onion, chopped\n- 2 cloves garlic, minced\n- 1/2 teaspoon cinnamon\n- 1/4 teaspoon nutmeg\n- 4 cups vegetable broth\n- 1/2 cup pure maple syrup\n- Salt and pepper, to taste\n\nDirections:\n\n1. Preheat the oven to 375°F (190°C). Cut the butternut squash into 1-inch cubes and place them on a baking sheet. Drizzle with olive oil and season with salt and pepper. Roast for 25-30 minutes, or until tender and lightly browned.\n2. In a large pot, heat the olive oil over medium heat. Add the chopped onion and minced garlic, and cook until the onion is translucent.\n3. Add the roasted butternut squash, cinnamon, nutmeg, and vegetable broth to the pot. Bring to a boil, then reduce the heat and simmer for 15-20 minutes.\n4. Using an immersion blender, puree the soup until smooth. Alternatively, you can transfer the soup in batches to a blender and puree until smooth.\n5. Stir in the pure maple syrup and season with salt and pepper to taste.\n6. Serve hot with a drizzle of maple syrup and a sprinkle of cinnamon on top.");
    butternutSquashSoupTextEdit->setGeometry(0, 0, 500, 400);
    butternutSquashSoupTextEdit->hide();
    butternutSquashSoupLabel.setPixmap(butternutSquashSoupPixmap);
    butternutSquashSoupLabel.hide();

    QLabel sausageAndKaleSoupLabel(&get_cookin_label);
    QPixmap sausageAndKaleSoupPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *sausageAndKaleSoupTextEdit = new QTextEdit(&get_cookin_label);
    sausageAndKaleSoupTextEdit->setText("Spicy Sausage and Kale Soup!\n\nIngredients:\n\n- 1 pound spicy Italian sausage, casings removed\n- 1 onion, chopped\n- 3 cloves garlic, minced\n- 4 cups chicken broth\n- 1 can (14.5 ounces) diced tomatoes\n- 1 can (15.5 ounces) cannellini beans, drained and rinsed\n- 1 bunch kale, stems removed and chopped\n- Salt and pepper, to taste\n\nDirections:\n\n1. In a large pot or Dutch oven, brown the sausage over medium-high heat, breaking it up into small pieces as it cooks.\n2. Add the chopped onion and minced garlic to the pot, and cook until the onion is translucent.\n3. Add the chicken broth, diced tomatoes, and cannellini beans to the pot. Bring to a boil, then reduce the heat and simmer for 20-30 minutes.\n4. Add the chopped kale to the pot, and cook until wilted, about 5-10 minutes.\n5. Season with salt and pepper to taste.\n6. Serve hot, garnished with grated Parmesan cheese if desired.");
    sausageAndKaleSoupTextEdit->setGeometry(0, 0, 500, 400);
    sausageAndKaleSoupTextEdit->hide();
    sausageAndKaleSoupLabel.setPixmap(sausageAndKaleSoupPixmap);
    sausageAndKaleSoupLabel.hide();

    QLabel creamyMushroomSoupLabel(&get_cookin_label);
    QPixmap creamyMushroomSoupPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *creamyMushroomSoupTextEdit = new QTextEdit(&get_cookin_label);
    creamyMushroomSoupTextEdit->setText("Creamy Mushroom Soup!n\nIngredients:\n\n- 1 pound mushrooms, sliced\n- 1 onion, chopped\n- 3 cloves garlic, minced\n- 4 cups chicken broth\n- 1 cup heavy cream\n- 2 tablespoons butter\n- 2 tablespoons all-purpose flour\n- Salt and pepper, to taste\n\nDirections:\n\n1. In a large pot or Dutch oven, melt the butter over medium-high heat. Add the sliced mushrooms, chopped onion, and minced garlic, and cook until the mushrooms release their liquid and the onion is translucent.\n2. Sprinkle the flour over the mushrooms and stir to combine. Cook for 1-2 minutes to cook off the raw flour taste.\n3. Add the chicken broth to the pot, and bring to a boil. Reduce the heat and simmer for 15-20 minutes, or until the soup has thickened and the mushrooms are tender.\n4. Using an immersion blender, puree the soup until smooth. Alternatively, you can transfer the soup in batches to a blender and puree until smooth.\n5. Add the heavy cream to the pot and stir to combine. Heat the soup over low heat until warmed through, but do not boil.\n6. Season with salt and pepper to taste.\n7. Serve hot, garnished with chopped fresh parsley or chives if desired.");
    creamyMushroomSoupTextEdit->setGeometry(0, 0, 500, 400);
    creamyMushroomSoupTextEdit->hide();
    creamyMushroomSoupLabel.setPixmap(creamyMushroomSoupPixmap);
    creamyMushroomSoupLabel.hide();

    QLabel frenchOnionSoupLabel(&get_cookin_label);
    QPixmap frenchOnionSoupPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *frenchOnionSoupTextEdit = new QTextEdit(&get_cookin_label);
    frenchOnionSoupTextEdit->setText("French Onion Soup with Gruyere Croutons!\n\nIngredients:\n\n- 4 large onions, thinly sliced\n- 3 tablespoons butter\n- 3 cloves garlic, minced\n- 1 tablespoon all-purpose flour\n- 6 cups beef broth\n- 1/2 cup dry red wine\n- 1 bay leaf\n- 1 teaspoon dried thyme\n- Salt and pepper, to taste\n- 8 slices baguette\n- 2 cups shredded Gruyere cheese\n\nDirections:\n\n1. In a large pot or Dutch oven, melt the butter over medium-high heat. Add the thinly sliced onions and minced garlic, and cook until the onions are caramelized, stirring frequently to prevent burning.\n2. Sprinkle the flour over the onions and stir to combine. Cook for 1-2 minutes to cook off the raw flour taste.\n3. Add the beef broth, red wine, bay leaf, and dried thyme to the pot. Bring to a boil, then reduce the heat and simmer for 30-40 minutes, or until the soup has thickened and the flavors have melded.\n4. Preheat the oven to 350°F (180°C). Arrange the baguette slices on a baking sheet, and sprinkle with the shredded Gruyere cheese.\n5. Bake the baguette slices for 10-15 minutes, or until the cheese is melted and bubbly.\n6. Ladle the hot soup into bowls and top each serving with a Gruyere crouton.\n7. Serve hot, garnished with chopped fresh parsley or chives if desired.");
    frenchOnionSoupTextEdit->setGeometry(0, 0, 500, 400);
    frenchOnionSoupTextEdit->hide();
    frenchOnionSoupLabel.setPixmap(frenchOnionSoupPixmap);
    frenchOnionSoupLabel.hide();

    QLabel seafoodChowderLabel(&get_cookin_label);
    QPixmap seafoodChowderPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *seafoodChowderTextEdit = new QTextEdit(&get_cookin_label);
    seafoodChowderTextEdit->setText("Seafood Chowder with Bacon and Corn!\n\nIngredients:\n\n- 4 slices bacon, diced\n- 1 medium onion, chopped\n- 2 cloves garlic, minced\n- 2 cups potatoes, peeled and diced\n- 2 cups corn kernels (fresh or frozen)\n- 2 cups seafood stock\n- 1 cup heavy cream\n- 1 pound mixed seafood (such as shrimp, scallops, and clams), cleaned and chopped\n- 1/4 cup fresh parsley, chopped\n- Salt and pepper, to taste\n\nDirections:\n\n1. In a large pot or Dutch oven, cook the diced bacon over medium heat until crispy. Remove the bacon with a slotted spoon and set aside on a paper towel-lined plate.\n2. Add the chopped onion and minced garlic to the pot with the bacon fat, and cook until the onion is translucent and softened.\n3. Add the diced potatoes, corn kernels, and seafood stock to the pot. Bring to a boil, then reduce the heat and simmer until the potatoes are tender, about 15-20 minutes.\n4. Stir in the heavy cream and chopped mixed seafood. Simmer for an additional 5-7 minutes, or until the seafood is cooked through.\n5. Season the chowder with salt and pepper to taste. Stir in the chopped parsley.\n6. Ladle the chowder into bowls and top each serving with the reserved bacon.\n7. Serve hot with crusty bread.");
    seafoodChowderTextEdit->setGeometry(0, 0, 500, 400);
    seafoodChowderTextEdit->hide();
    seafoodChowderLabel.setPixmap(frenchOnionSoupPixmap);
    seafoodChowderLabel.hide();

    QLabel beefBourguignonLabel(&get_cookin_label);
    QPixmap beefBourguignonPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    QTextEdit *beefBourguignonTextEdit = new QTextEdit(&get_cookin_label);
    beefBourguignonTextEdit->setText("Beef Bourguignon!\n\nIngredients:\n\n- 2 pounds beef chuck, cut into 1-inch pieces\n- 6 slices bacon, diced\n- 2 cups red wine\n- 2 cups beef broth\n- 2 tablespoons tomato paste\n- 1 onion, chopped\n- 3 garlic cloves, minced\n- 2 carrots, chopped\n- 2 stalks celery, chopped\n- 1 teaspoon thyme\n- 2 bay leaves\n- 1 pound mushrooms, quartered\n- 1 tablespoon butter\n- Salt and pepper, to taste\n- Chopped fresh parsley, for garnish\n\nDirections:\n\n1. Preheat the oven to 350°F.\n2. In a large Dutch oven, cook the diced bacon over medium heat until crispy. Remove the bacon with a slotted spoon and set aside on a paper towel-lined plate.\n3. In the same pot, brown the beef in batches over medium-high heat. Remove the beef with a slotted spoon and set aside with the bacon.\n4. Add the chopped onion and minced garlic to the pot and cook until the onion is translucent and softened.\n5. Add the carrots, celery, thyme, and bay leaves to the pot. Cook for a few minutes until the vegetables start to soften.\n6. Add the beef and bacon back to the pot, along with the red wine, beef broth, and tomato paste. Stir to combine.\n7. Cover the pot with a lid and bake in the oven for 2 1/2 to 3 hours, or until the beef is tender.\n8. While the beef is cooking, melt the butter in a skillet over medium heat. Add the mushrooms and cook until they release their liquid and are browned.\n9. Add the mushrooms to the pot with the beef, and simmer for an additional 10-15 minutes.\n10. Season the beef bourguignon with salt and pepper to taste.\n11. Ladle the beef bourguignon into bowls and garnish with chopped parsley.\n12. Serve hot with crusty bread or over mashed potatoes.");
    beefBourguignonTextEdit->setGeometry(0, 0, 500, 400);
    beefBourguignonTextEdit->hide();
    beefBourguignonLabel.setPixmap(beefBourguignonPixmap);
    beefBourguignonLabel.hide();

    QLabel caesarSaladLabel(&get_cookin_label);
    QPixmap caesarSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *caesarSaladTextEdit = new QTextEdit(&get_cookin_label);
    caesarSaladTextEdit->setText("Caesar Salad!\n\nIngredients:\n\n- 1 head romaine lettuce\n- 1/2 cup croutons\n- 1/4 cup grated Parmesan cheese\n- 1/4 cup olive oil\n- 2 tablespoons lemon juice\n- 1 tablespoon Dijon mustard\n- 1 garlic clove, minced\n- 1/4 teaspoon salt\n- 1/4 teaspoon black pepper\n- 1 anchovy fillet, minced (optional)\n- 1 hard-boiled egg, sliced (optional)\n\nDirections:\n\n1. Rinse the lettuce and dry it well. Tear the lettuce leaves into bite-sized pieces and place them in a large salad bowl.\n2. In a small bowl, whisk together the olive oil, lemon juice, Dijon mustard, minced garlic, salt, and black pepper.\n3. If using anchovy fillet, add it to the dressing and whisk until smooth.\n4. Pour the dressing over the lettuce and toss until the lettuce is evenly coated.\n5. Add the croutons and grated Parmesan cheese to the salad and toss again.\n6. Top the salad with sliced hard-boiled egg, if desired.\n7. Serve immediately.");
    caesarSaladTextEdit->setGeometry(0, 0, 500, 400);
    caesarSaladTextEdit->hide();
    caesarSaladLabel.setPixmap(caesarSaladPixmap);
    caesarSaladLabel.hide();

    QLabel greekSaladLabel(&get_cookin_label);
    QPixmap greekSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *greekSaladTextEdit = new QTextEdit(&get_cookin_label);
    greekSaladTextEdit->setText("Greek Salad!\n\nIngredients:\n\n- 1 head romaine lettuce, chopped\n- 1 large cucumber, peeled and sliced\n- 1 pint cherry tomatoes, halved\n- 1/2 red onion, thinly sliced\n- 1/2 cup Kalamata olives, pitted\n- 4 ounces feta cheese, crumbled\n- 1/4 cup olive oil\n- 2 tablespoons red wine vinegar\n- 1 tablespoon freshly squeezed lemon juice\n- 1 teaspoon dried oregano\n- Salt and freshly ground black pepper\n\nDirections:\n\n1. In a large salad bowl, combine the chopped lettuce, sliced cucumber, halved cherry tomatoes, thinly sliced red onion, and pitted Kalamata olives.\n2. In a small bowl, whisk together the olive oil, red wine vinegar, lemon juice, dried oregano, salt, and black pepper.\n3. Pour the dressing over the salad and toss until the vegetables are evenly coated.\n4. Sprinkle the crumbled feta cheese over the top of the salad.\n5. Serve immediately.");
    greekSaladTextEdit->setGeometry(0, 0, 500, 400);
    greekSaladTextEdit->hide();
    greekSaladLabel.setPixmap(greekSaladPixmap);
    greekSaladLabel.hide();

    QLabel capreseSaladLabel(&get_cookin_label);
    QPixmap capreseSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *capreseSaladTextEdit = new QTextEdit(&get_cookin_label);
    capreseSaladTextEdit->setText("Caprese Salad!\n\nIngredients:\n\n- 3 ripe tomatoes, sliced\n- 1 pound fresh mozzarella cheese, sliced\n- 1/2 cup fresh basil leaves\n- 1/4 cup extra-virgin olive oil\n- 2 tablespoons balsamic vinegar\n- Salt and freshly ground black pepper\n\nDirections:\n\n1. Arrange the sliced tomatoes on a large platter.\n2. Top each tomato slice with a slice of fresh mozzarella cheese.\n3. Place a fresh basil leaf on top of each slice of cheese.\n4. In a small bowl, whisk together the olive oil and balsamic vinegar.\n5. Drizzle the dressing over the salad.\n6. Season with salt and black pepper, to taste.\n7. Serve immediately.");
    capreseSaladTextEdit->setGeometry(0, 0, 500, 400);
    capreseSaladTextEdit->hide();
    capreseSaladLabel.setPixmap(capreseSaladPixmap);
    capreseSaladLabel.hide();

    QLabel spinachSaladLabel(&get_cookin_label);
    QPixmap spinachSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *spinachSaladTextEdit = new QTextEdit(&get_cookin_label);
    spinachSaladTextEdit->setText("Spinach Salad with Bacon and Eggs!\n\nIngredients:\n\n- 6 cups fresh spinach leaves\n- 4 slices bacon, cooked and crumbled\n- 2 hard-boiled eggs, peeled and chopped\n- 1/4 cup red onion, thinly sliced\n- 1/4 cup crumbled blue cheese\n- 1/4 cup olive oil\n- 2 tablespoons red wine vinegar\n- 1 tablespoon Dijon mustard\n- 1 tablespoon honey\n- Salt and freshly ground black pepper\n\nDirections:\n\n1. In a large salad bowl, combine the fresh spinach leaves, crumbled bacon, chopped hard-boiled eggs, thinly sliced red onion, and crumbled blue cheese.\n2. In a small bowl, whisk together the olive oil, red wine vinegar, Dijon mustard, honey, salt, and black pepper.\n3. Pour the dressing over the salad and toss until the spinach leaves are evenly coated.\n4. Serve immediately.");
    spinachSaladTextEdit->setGeometry(0, 0, 500, 400);
    spinachSaladTextEdit->hide();
    spinachSaladLabel.setPixmap(spinachSaladPixmap);
    spinachSaladLabel.hide();

    QLabel cobbSaladLabel(&get_cookin_label);
    QPixmap cobbSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *cobbSaladTextEdit = new QTextEdit(&get_cookin_label);
    cobbSaladTextEdit->setText("Cobb Salad!\n\nIngredients:\n\n- 6 cups chopped romaine lettuce\n- 2 cups cooked and chopped chicken breast\n- 4 slices bacon, cooked and crumbled\n- 2 hard-boiled eggs, peeled and chopped\n- 1 ripe avocado, peeled, pitted, and chopped\n- 1 cup cherry tomatoes, halved\n- 1/2 cup crumbled blue cheese\n- 1/4 cup chopped fresh chives\n- 1/4 cup olive oil\n- 2 tablespoons red wine vinegar\n- 1 teaspoon Dijon mustard\n- Salt and freshly ground black pepper\n\nDirections:\n\n1. In a large salad bowl, combine the chopped romaine lettuce, cooked and chopped chicken breast, crumbled bacon, chopped hard-boiled eggs, chopped avocado, cherry tomatoes, crumbled blue cheese, and chopped fresh chives.\n2. In a small bowl, whisk together the olive oil, red wine vinegar, Dijon mustard, salt, and black pepper.\n3. Pour the dressing over the salad and toss until all of the ingredients are evenly coated.\n4. Serve immediately.");
    cobbSaladTextEdit->setGeometry(0, 0, 500, 400);
    cobbSaladTextEdit->hide();
    cobbSaladLabel.setPixmap(cobbSaladPixmap);
    cobbSaladLabel.hide();

    QLabel quinoaSaladLabel(&get_cookin_label);
    QPixmap quinoaSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *quinoaSaladTextEdit = new QTextEdit(&get_cookin_label);
    quinoaSaladTextEdit->setText("Quinoa Salad with Roasted Vegetables and Feta!\n\nIngredients:\n\n- 1 cup quinoa, rinsed\n- 2 cups vegetable broth or water\n- 1 red onion, cut into wedges\n- 1 red bell pepper, seeded and cut into chunks\n- 1 zucchini, cut into chunks\n- 1 yellow squash, cut into chunks\n- 1 cup cherry tomatoes, halved\n- 2 cloves garlic, minced\n- 3 tablespoons olive oil\n- 1 teaspoon dried oregano\n- Salt and freshly ground black pepper\n- 1/2 cup crumbled feta cheese\n- 1/4 cup chopped fresh parsley\n- 1/4 cup chopped fresh mint\n\nDirections:\n\n1. Preheat the oven to 400°F.\n2. In a medium saucepan, combine the quinoa and vegetable broth or water. Bring to a boil, then reduce the heat to low and simmer for 15-20 minutes, or until the quinoa is tender and the liquid has been absorbed.\n3. In a large bowl, combine the red onion, red bell pepper, zucchini, yellow squash, cherry tomatoes, garlic, olive oil, dried oregano, salt, and black pepper. Toss to coat the vegetables evenly.\n4. Spread the vegetables out on a baking sheet and roast for 20-25 minutes, or until tender and lightly browned.\n5. In a large bowl, combine the cooked quinoa and roasted vegetables. Add the crumbled feta cheese, chopped fresh parsley, and chopped fresh mint. Toss to combine.\n6. Serve warm or at room temperature.");
    quinoaSaladTextEdit->setGeometry(0, 0, 500, 400);
    quinoaSaladTextEdit->hide();
    quinoaSaladLabel.setPixmap(quinoaSaladPixmap);
    quinoaSaladLabel.hide();

    QLabel grilledChickenSaladLabel(&get_cookin_label);
    QPixmap grilledChickenSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *grilledChickenSaladTextEdit = new QTextEdit(&get_cookin_label);
    grilledChickenSaladTextEdit->setText("Grilled Chicken Salad with Avocado and Mango!\n\nIngredients:\n\n- 2 boneless, skinless chicken breasts\n- Salt and freshly ground black pepper\n- 1 tablespoon olive oil\n- 1/2 large mango, peeled and cut into chunks\n- 1/2 large avocado, peeled and cut into chunks\n- 1/4 red onion, thinly sliced\n- 1/4 cup chopped fresh cilantro\n- 1/4 cup lime juice\n- 2 tablespoons honey\n- 2 tablespoons olive oil\n- Salt and freshly ground black pepper\n- 6 cups mixed salad greens\n\nDirections:\n\n1. Preheat a grill or grill pan to medium-high heat.\n2. Season the chicken breasts with salt and pepper and brush them with olive oil.\n3. Grill the chicken for 6-7 minutes per side, or until cooked through. Let the chicken rest for a few minutes, then slice it thinly.\n4. In a large bowl, combine the mango, avocado, red onion, cilantro, lime juice, honey, olive oil, salt, and black pepper. Toss to coat the ingredients evenly.\n5. Add the mixed salad greens to the bowl and toss to combine.\n6. Divide the salad among 4 plates and top each serving with the sliced grilled chicken.\n7. Serve immediately.");
    grilledChickenSaladTextEdit->setGeometry(0, 0, 500, 400);
    grilledChickenSaladTextEdit->hide();
    grilledChickenSaladLabel.setPixmap(grilledChickenSaladPixmap);
    grilledChickenSaladLabel.hide();

    QLabel thaiBeefSaladLabel(&get_cookin_label);
    QPixmap thaiBeefSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *thaiBeefSaladTextEdit = new QTextEdit(&get_cookin_label);
    thaiBeefSaladTextEdit->setText("Thai Beef Salad with Lime Dressing!\n\nIngredients:\n\n- 1 lb beef sirloin, thinly sliced\n- Salt and freshly ground black pepper\n- 1 tablespoon vegetable oil\n- 1 head iceberg lettuce, chopped\n- 1/2 red onion, thinly sliced\n- 1/2 cucumber, thinly sliced\n- 1/2 red bell pepper, thinly sliced\n- 1/2 cup fresh cilantro leaves\n- 1/2 cup fresh mint leaves\n\nFor the dressing:\n- 2 tablespoons fish sauce\n- 2 tablespoons fresh lime juice\n- 1 tablespoon honey\n- 1 garlic clove, minced\n- 1 small red chili, seeded and finely chopped\n\nDirections:\n\n1. Season the beef with salt and pepper. Heat the vegetable oil in a large skillet over high heat. Add the beef and cook for 2-3 minutes per side, or until browned and cooked to your liking.\n2. In a large bowl, combine the chopped lettuce, sliced onion, sliced cucumber, sliced bell pepper, cilantro, and mint.\n3. In a small bowl, whisk together the fish sauce, lime juice, honey, garlic, and chili until well combined.\n4. Add the cooked beef to the bowl with the salad ingredients and toss to combine.\n5. Drizzle the dressing over the salad and toss again to coat evenly.\n6. Serve immediately.");
    thaiBeefSaladTextEdit->setGeometry(0, 0, 500, 400);
    thaiBeefSaladTextEdit->hide();
    thaiBeefSaladLabel.setPixmap(thaiBeefSaladPixmap);
    thaiBeefSaladLabel.hide();

    QLabel grilledPeachSaladLabel(&get_cookin_label);
    QPixmap grilledPeachSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *grilledPeachSaladTextEdit = new QTextEdit(&get_cookin_label);
    grilledPeachSaladTextEdit->setText("Grilled Peach Salad with Burrata and Prosciutto!\n\nIngredients:\n\n- 4 peaches, halved and pitted\n- 4 cups arugula\n- 8 slices prosciutto, torn into bite-sized pieces\n- 8 oz burrata cheese\n- 1/4 cup balsamic vinegar\n- 2 tablespoons honey\n- 1/4 cup extra-virgin olive oil\n- Salt and freshly ground black pepper\n\nDirections:\n\n1. Preheat a grill to medium-high heat.\n2. In a small bowl, whisk together the balsamic vinegar, honey, and olive oil. Season with salt and pepper to taste.\n3. Brush the peach halves with olive oil and season with salt and pepper.\n4. Grill the peaches, cut side down, for 2-3 minutes or until slightly charred. Remove from the grill and let cool for a few minutes.\n5. In a large bowl, toss the arugula with half of the balsamic dressing. Divide the dressed arugula among four plates.\n6. Top the arugula with the grilled peaches, prosciutto, and burrata cheese.\n7. Drizzle the remaining dressing over the top of the salad and season with additional salt and pepper to taste.\n8. Serve immediately and enjoy!");
    grilledPeachSaladTextEdit->setGeometry(0, 0, 500, 400);
    grilledPeachSaladTextEdit->hide();
    grilledPeachSaladLabel.setPixmap(grilledPeachSaladPixmap);
    grilledPeachSaladLabel.hide();

    QLabel goatCheeseSaladLabel(&get_cookin_label);
    QPixmap goatCheeseSaladPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\salads.png");
    QTextEdit *goatCheeseSaladTextEdit = new QTextEdit(&get_cookin_label);
    goatCheeseSaladTextEdit->setText("Warm Goat Cheese Salad with Honey Mustard Dressing!\n\nIngredients:\n\n- 4 cups mixed salad greens\n- 4 oz goat cheese, sliced into 1/2-inch rounds\n- 1/4 cup panko breadcrumbs\n- 1/4 cup all-purpose flour\n- 1 egg, beaten\n- 2 tablespoons olive oil\n- Salt and freshly ground black pepper\n\nFor the Honey Mustard Dressing:\n- 1/4 cup dijon mustard\n- 2 tablespoons honey\n- 2 tablespoons apple cider vinegar\n- 1/4 cup extra-virgin olive oil\n- Salt and freshly ground black pepper\n\nDirections:\n\n1. Preheat the oven to 375°F.\n2. In a small bowl, mix together the dijon mustard, honey, apple cider vinegar, olive oil, salt, and pepper to make the dressing.\n3. In a shallow bowl, mix together the breadcrumbs, flour, salt, and pepper.\n4. Dip the goat cheese rounds in the beaten egg and then coat in the breadcrumb mixture.\n5. Heat the olive oil in a large skillet over medium-high heat. Fry the goat cheese rounds for about 30 seconds on each side until golden brown. Remove and place on a paper towel-lined plate to drain excess oil.\n6. Arrange the salad greens on four plates. Top each salad with a warm goat cheese round.\n7. Drizzle the honey mustard dressing over the salads and serve immediately.\n\nEnjoy your Warm Goat Cheese Salad with Honey Mustard Dressing!");
    goatCheeseSaladTextEdit->setGeometry(0, 0, 500, 400);
    goatCheeseSaladTextEdit->hide();
    goatCheeseSaladLabel.setPixmap(goatCheeseSaladPixmap);
    goatCheeseSaladLabel.hide();

    QLabel lentilChiliLabel(&get_cookin_label);
    QPixmap lentilChiliPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\vegetarian.png");
    QTextEdit *lentilChiliTextEdit = new QTextEdit(&get_cookin_label);
    lentilChiliTextEdit->setText("Vegan Lentil Chili!\n\nIngredients:\n\n- 1 tablespoon olive oil\n- 1 onion, chopped\n- 3 cloves garlic, minced\n- 1 bell pepper, chopped\n- 1 jalapeño pepper, chopped (optional)\n- 1 tablespoon chili powder\n- 1 teaspoon ground cumin\n- 1/2 teaspoon smoked paprika\n- 1/2 teaspoon dried oregano\n- 1/2 teaspoon salt\n- 1 cup brown or green lentils, rinsed and drained\n- 1 can (14.5 oz) diced tomatoes\n- 1 can (8 oz) tomato sauce\n- 2 cups vegetable broth\n- 1/2 cup chopped fresh cilantro\n- Juice of 1 lime\n\nDirections:\n\n1. Heat olive oil in a large pot over medium heat. Add onion, garlic, bell pepper, and jalapeño pepper (if using) and cook until softened, about 5 minutes.\n\n2. Add chili powder, cumin, smoked paprika, oregano, and salt. Cook for 1 minute until fragrant.\n\n3. Add lentils, diced tomatoes, tomato sauce, and vegetable broth. Bring to a boil, then reduce heat and simmer for 30-40 minutes until lentils are tender.\n\n4. Remove from heat and stir in cilantro and lime juice. Serve hot.");
    lentilChiliTextEdit->setGeometry(0, 0, 500, 400);
    lentilChiliTextEdit->hide();
    lentilChiliLabel.setPixmap(lentilChiliPixmap);
    lentilChiliLabel.hide();

    QLabel stirFryLabel(&get_cookin_label);
    QPixmap stirFryPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\vegetarian.png");
    QTextEdit *stirFryTextEdit = new QTextEdit(&get_cookin_label);
    stirFryTextEdit->setText("Veggie Stir Fry with Tofu!\n\nIngredients:\n\n- 1 block of firm tofu, drained and pressed\n- 2 tablespoons of soy sauce\n- 1 tablespoon of cornstarch\n- 1 tablespoon of vegetable oil\n- 1 red bell pepper, sliced\n- 1 yellow onion, sliced\n- 2 cloves of garlic, minced\n- 2 cups of broccoli florets\n- 1 cup of sliced mushrooms\n- 1/4 cup of hoisin sauce\n- 2 tablespoons of water\n- Salt and pepper, to taste\n\nDirections:\n\n1. Cut the tofu into 1-inch cubes and toss with soy sauce and cornstarch.\n2. Heat vegetable oil in a large skillet over medium-high heat. Add tofu and cook until golden brown, about 5 minutes. Remove tofu from skillet and set aside.\n3. In the same skillet, add bell pepper, onion, and garlic. Cook until the vegetables are tender, about 5 minutes.\n4. Add broccoli and mushrooms to the skillet and cook for another 3-4 minutes, or until the broccoli is bright green and tender.\n5. Add hoisin sauce and water to the skillet and stir to combine.\n6. Return the tofu to the skillet and toss to combine with the vegetables and sauce.\n7. Season with salt and pepper to taste.\n8. Serve hot with rice or noodles.");
    stirFryTextEdit->setGeometry(0, 0, 500, 400);
    stirFryTextEdit->hide();
    stirFryLabel.setPixmap(stirFryPixmap);
    stirFryLabel.hide();

    QLabel friedRiceLabel(&get_cookin_label);
    QPixmap friedRicePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\vegetarian.png");
    QTextEdit *friedRiceTextEdit = new QTextEdit(&get_cookin_label);
    friedRiceTextEdit->setText("Vegan Cauliflower Fried Rice!\n\nIngredients:\n\n- 1 head cauliflower, grated\n- 1 red bell pepper, chopped\n- 1 green bell pepper, chopped\n- 1 yellow onion, chopped\n- 2 cloves garlic, minced\n- 1 cup frozen peas, thawed\n- 1/4 cup soy sauce\n- 1 tablespoon toasted sesame oil\n- 1 tablespoon vegetable oil\n- Salt and pepper, to taste\n\nDirections:\n\n1. Heat vegetable oil in a large skillet over medium heat.\n2. Add onion and garlic, and cook until softened, about 3-5 minutes.\n3. Add bell peppers, and cook for another 3-5 minutes until softened.\n4. Add grated cauliflower, soy sauce, and sesame oil to the skillet. Cook for about 5-7 minutes, stirring occasionally, until the cauliflower is tender and slightly browned.\n5. Add the thawed peas and cook for another 2-3 minutes until heated through.\n6. Season with salt and pepper to taste.\n\nEnjoy your delicious vegan cauliflower fried rice!");
    friedRiceTextEdit->setGeometry(0, 0, 500, 400);
    friedRiceTextEdit->hide();
    friedRiceLabel.setPixmap(friedRicePixmap);
    friedRiceLabel.hide();

    QLabel shepherdsPieLabel(&get_cookin_label);
    QPixmap shepherdsPiePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\vegetarian.png");
    QTextEdit *shepherdsPieTextEdit = new QTextEdit(&get_cookin_label);
    shepherdsPieTextEdit->setText("Vegetarian Shepherd's Pie!\n\nIngredients:\n\n- 2 lbs potatoes, peeled and chopped\n- 1 cup milk (or non-dairy milk)\n- 2 tbsp butter (or vegan butter)\n- Salt and pepper\n- 2 tbsp olive oil\n- 1 onion, chopped\n- 3 cloves garlic, minced\n- 1 package (12 oz) vegetarian ground beef crumbles\n- 2 carrots, peeled and chopped\n- 1 cup frozen peas\n- 1 cup frozen corn\n- 1 tsp thyme\n- 1 tsp rosemary\n- 2 tbsp flour\n- 2 cups vegetable broth\n\nDirections:\n\n1. Preheat oven to 375°F.\n2. Boil potatoes in a large pot until tender. Drain and mash with milk, butter, salt, and pepper.\n3. In a large skillet, heat olive oil over medium heat. Add onion and garlic and cook until softened.\n4. Add vegetarian ground beef crumbles, carrots, peas, corn, thyme, and rosemary. Cook for 5 minutes.\n5. Stir in flour and cook for 1 minute.\n6. Add vegetable broth and bring to a boil. Reduce heat and simmer for 10 minutes.\n7. Pour vegetable mixture into a 9x13 inch baking dish. Top with mashed potatoes.\n8. Bake for 30-35 minutes or until heated through and potatoes are lightly browned on top.");
    shepherdsPieTextEdit->setGeometry(0, 0, 500, 400);
    shepherdsPieTextEdit->hide();
    shepherdsPieLabel.setPixmap(shepherdsPiePixmap);
    shepherdsPieLabel.hide();

    QLabel vegetableLasagnaLabel(&get_cookin_label);
    QPixmap vegetableLasagnaPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\vegetarian.png");
    QTextEdit *vegetableLasagnaTextEdit = new QTextEdit(&get_cookin_label);
    vegetableLasagnaTextEdit->setText("Roasted Vegetable Lasagna\n\nIngredients:\n\n- 1 pound lasagna noodles\n- 2 cups ricotta cheese\n- 1 cup grated Parmesan cheese\n- 2 eggs\n- 1 tablespoon dried basil\n- 2 cups roasted vegetables (such as zucchini, eggplant, bell peppers, and mushrooms)\n- 2 cups marinara sauce\n- 2 cups shredded mozzarella cheese\n- Salt and pepper, to taste\n\nDirections:\n\n1. Preheat oven to 375°F.\n2. Cook lasagna noodles according to package directions. Drain and set aside.\n3. In a mixing bowl, combine ricotta cheese, Parmesan cheese, eggs, basil, salt, and pepper.\n4. In a 9x13 inch baking dish, spread a thin layer of marinara sauce on the bottom.\n5. Layer lasagna noodles on top of the sauce, then spread a layer of the ricotta mixture on top.\n6. Add a layer of roasted vegetables, then another layer of marinara sauce.\n7. Repeat layers until all ingredients are used, ending with a layer of marinara sauce.\n8. Sprinkle shredded mozzarella cheese on top.\n9. Bake for 45-50 minutes, or until the cheese is melted and bubbly.\n10. Let cool for 5-10 minutes before serving.\n\nEnjoy!");
    vegetableLasagnaTextEdit->setGeometry(0, 0, 500, 400);
    vegetableLasagnaTextEdit->hide();
    vegetableLasagnaLabel.setPixmap(vegetableLasagnaPixmap);
    vegetableLasagnaLabel.hide();

    QLabel panSearedSalmonLabel(&get_cookin_label);
    QPixmap panSearedSalmonPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\seafood_dishes.png");
    QTextEdit *panSearedSalmonTextEdit = new QTextEdit(&get_cookin_label);
    panSearedSalmonTextEdit->setText("Pan-Seared Salmon with Lemon Butter Sauce!\n\nIngredients:\n\n- 4 salmon fillets\n- salt and black pepper to taste\n- 2 tablespoons olive oil\n- 1/4 cup butter\n- 3 cloves garlic, minced\n- juice of 1 lemon\n- 2 tablespoons chopped fresh parsley\n\nDirections:\n\n1. Season the salmon fillets with salt and black pepper.\n2. Heat the olive oil in a large skillet over medium-high heat.\n3. Place the salmon fillets skin-side down in the skillet and cook for 4-5 minutes until crispy. Flip and cook for another 2-3 minutes until cooked through.\n4. Remove the salmon from the skillet and set aside on a plate.\n5. In the same skillet, melt the butter over medium heat.\n6. Add the garlic and sauté for 1-2 minutes until fragrant.\n7. Stir in the lemon juice and parsley.\n8. Spoon the lemon butter sauce over the salmon fillets and serve immediately.");
    panSearedSalmonTextEdit->setGeometry(0, 0, 500, 400);
    panSearedSalmonTextEdit->hide();
    panSearedSalmonLabel.setPixmap(panSearedSalmonPixmap);
    panSearedSalmonLabel.hide();

    QLabel shrimpScampiLabel(&get_cookin_label);
    QPixmap shrimpScampiPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\seafood_dishes.png");
    QTextEdit *shrimpScampiTextEdit = new QTextEdit(&get_cookin_label);
    shrimpScampiTextEdit->setText("Shrimp Scampi with Linguine!\n\nIngredients:\n\n- 1 pound linguine\n- 4 tablespoons unsalted butter\n- 4 tablespoons olive oil\n- 4 garlic cloves, minced\n- 1 teaspoon salt\n- 1/2 teaspoon black pepper\n- 1/3 cup chicken broth\n- 1/4 cup fresh lemon juice\n- 1/4 cup chopped fresh parsley leaves\n- 1 pound large shrimp, peeled and deveined\n\nDirections:\n\n1. Cook linguine according to package instructions.\n2. In a large skillet, melt butter and olive oil over medium heat. Add garlic, salt, and black pepper and cook for 1-2 minutes until fragrant.\n3. Add chicken broth, lemon juice, and parsley to the skillet and bring to a boil.\n4. Add shrimp to the skillet and cook for 2-3 minutes until pink and cooked through.\n5. Serve shrimp and sauce over cooked linguine.");
    shrimpScampiTextEdit->setGeometry(0, 0, 500, 400);
    shrimpScampiTextEdit->hide();
    shrimpScampiLabel.setPixmap(shrimpScampiPixmap);
    shrimpScampiLabel.hide();

    QLabel lobsterTailsLabel(&get_cookin_label);
    QPixmap lobsterTailsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\seafood_dishes.png");
    QTextEdit *lobsterTailsTextEdit = new QTextEdit(&get_cookin_label);
    lobsterTailsTextEdit->setText("Grilled Lobster Tails with Garlic Butter!\n\nIngredients:\n\n- 4 lobster tails, split in half lengthwise\n- 1/2 cup unsalted butter, melted\n- 4 cloves garlic, minced\n- 1 tablespoon chopped fresh parsley\n- Salt and black pepper, to taste\n\nDirections:\n\n1. Preheat grill to medium-high heat.\n2. In a small bowl, combine melted butter, garlic, and parsley. Set aside.\n3. Season the lobster tails with salt and black pepper.\n4. Brush the flesh side of the lobster tails with the garlic butter mixture.\n5. Place the lobster tails flesh side down on the grill and cook for 5-7 minutes.\n6. Brush the shell side of the lobster tails with the garlic butter mixture and flip them over on the grill.\n7. Cook for an additional 5-7 minutes or until the lobster meat is opaque and cooked through.\n8. Serve the lobster tails with additional garlic butter on top, if desired.");
    lobsterTailsTextEdit->setGeometry(0, 0, 500, 400);
    lobsterTailsTextEdit->hide();
    lobsterTailsLabel.setPixmap(lobsterTailsPixmap);
    lobsterTailsLabel.hide();

    QLabel cioppinoLabel(&get_cookin_label);
    QPixmap cioppinoPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\seafood_dishes.png");
    QTextEdit *cioppinoTextEdit = new QTextEdit(&get_cookin_label);
    cioppinoTextEdit->setText("Cioppino (Italian Seafood Stew)!\n\nIngredients:\n\n- 1/4 cup olive oil\n- 1 onion, chopped\n- 1 green bell pepper, chopped\n- 1 fennel bulb, chopped\n- 4 cloves garlic, minced\n- 1/2 teaspoon red pepper flakes\n- 1/2 cup tomato paste\n- 1 (28-ounce) can crushed tomatoes\n- 1 cup dry red wine\n- 2 cups fish stock\n- 1 bay leaf\n- 1 pound mussels, scrubbed and debearded\n- 1 pound clams, scrubbed\n- 1 pound shrimp, peeled and deveined\n- 1/2 pound sea scallops\n- 1/2 pound calamari, cleaned and sliced into rings\n- Salt and pepper to taste\n- Chopped fresh parsley for garnish\n\nDirections:\n\n1. In a large pot or Dutch oven, heat the olive oil over medium heat.\n2. Add the onion, bell pepper, fennel, and garlic and cook until softened, about 5 minutes.\n3. Add the red pepper flakes and cook for 1 minute.\n4. Add the tomato paste and cook for 2 minutes.\n5. Add the crushed tomatoes, red wine, fish stock, and bay leaf and bring to a simmer.\n6. Simmer for 30 minutes.\n7. Add the mussels, clams, shrimp, scallops, and calamari and simmer until the seafood is cooked through, about 5-10 minutes.\n8. Season with salt and pepper to taste.\n9. Serve hot, garnished with chopped fresh parsley.");
    cioppinoTextEdit->setGeometry(0, 0, 500, 400);
    cioppinoTextEdit->hide();
    cioppinoLabel.setPixmap(cioppinoPixmap);
    cioppinoLabel.hide();

    QLabel mahiMahiLabel(&get_cookin_label);
    QPixmap mahiMahiPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\seafood_dishes.png");
    QTextEdit *mahiMahiTextEdit = new QTextEdit(&get_cookin_label);
    mahiMahiTextEdit->setText("Blackened Mahi Mahi with Mango Salsa!\n\nIngredients:\n\n- 4 Mahi Mahi fillets\n- 2 tsp smoked paprika\n- 1 tsp garlic powder\n- 1 tsp onion powder\n- 1 tsp dried oregano\n- 1/2 tsp cumin\n- 1/2 tsp cayenne pepper\n- Salt and pepper\n- 2 tbsp olive oil\n\nFor the Mango Salsa:\n- 1 large mango, diced\n- 1/2 red onion, diced\n- 1 red bell pepper, diced\n- 1 jalapeno pepper, seeded and diced\n- Juice of 1 lime\n- Salt and pepper\n\nDirections:\n\n1. Preheat the oven to 375°F.\n2. In a small bowl, mix together the smoked paprika, garlic powder, onion powder, oregano, cumin, cayenne pepper, salt, and pepper.\n3. Pat the Mahi Mahi fillets dry with paper towels and generously coat them with the spice mixture.\n4. Heat the olive oil in a large oven-safe skillet over medium-high heat. Once hot, add the fillets and cook for 2-3 minutes per side until blackened.\n5. Transfer the skillet to the oven and bake for an additional 6-8 minutes or until the fish is cooked through and flakes easily with a fork.\n6. Meanwhile, in a medium bowl, combine the diced mango, red onion, red bell pepper, jalapeno pepper, lime juice, salt, and pepper. Stir well to combine.\n7. Once the fish is cooked, remove the skillet from the oven and let it rest for a few minutes.\n8. Serve the Mahi Mahi fillets with a generous spoonful of the Mango Salsa on top.");
    mahiMahiTextEdit->setGeometry(0, 0, 500, 400);
    mahiMahiTextEdit->hide();
    mahiMahiLabel.setPixmap(mahiMahiPixmap);
    mahiMahiLabel.hide();

    QLabel chickenPiccataLabel(&get_cookin_label);
    QPixmap chickenPiccataPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\poultry_dishes.png");
    QTextEdit *chickenPiccataTextEdit = new QTextEdit(&get_cookin_label);
    chickenPiccataTextEdit->setText("Chicken Piccata!\n\nIngredients:\n\n- 4 boneless, skinless chicken breasts\n- Salt and freshly ground black pepper\n- 1/2 cup all-purpose flour\n- 4 tablespoons unsalted butter\n- 2 tablespoons olive oil\n- 1/2 cup chicken broth\n- 1/4 cup fresh lemon juice\n- 1/4 cup brined capers, rinsed\n- 1/3 cup fresh parsley, chopped\n\nDirections:\n\n1. Season chicken with salt and pepper.\n2. Dredge chicken in flour and shake off excess.\n3. In a large skillet over medium-high heat, melt 2 tablespoons of butter with 3 tablespoons olive oil.\n4. When butter and oil start to sizzle, add 2 pieces of chicken and cook for 3 minutes.\n5. When chicken is browned, flip and cook other side for 3 minutes.\n6. Remove and transfer to plate.\n7. Melt 2 more tablespoons butter and add another 2 tablespoons olive oil.\n8. When butter and oil start to sizzle, add the other 2 pieces of chicken and brown both sides in the same manner.\n9. Remove pan from heat and add chicken to the plate.\n10. Into the pan add the chicken broth, lemon juice and capers.\n11. Return to stove and bring to boil, scraping up brown bits from the pan for extra flavor.\n12. Check for seasoning.\n13. Return all the chicken to the pan and simmer for 5 minutes.\n14. Remove chicken to platter.\n15. Add remaining 2 tablespoons butter to sauce and whisk vigorously.\n16. Pour sauce over chicken and garnish with parsley.");
    chickenPiccataTextEdit->setGeometry(0, 0, 500, 400);
    chickenPiccataTextEdit->hide();
    chickenPiccataLabel.setPixmap(chickenPiccataPixmap);
    chickenPiccataLabel.hide();

    QLabel chickenAndDumplingsLabel(&get_cookin_label);
    QPixmap chickenAndDumplingsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\poultry_dishes.png");
    QTextEdit *chickenAndDumplingsTextEdit = new QTextEdit(&get_cookin_label);
    chickenAndDumplingsTextEdit->setText("Chicken and Dumplings Recipe!\n\nIngredients:\n\n- 2 lbs boneless, skinless chicken thighs\n- 2 tbsp vegetable oil\n- 1 onion, chopped\n- 3 celery stalks, chopped\n- 3 carrots, chopped\n- 3 cloves garlic, minced\n- 2 tbsp all-purpose flour\n- 6 cups chicken broth\n- 1 bay leaf\n- 1 tsp dried thyme\n- 1 tsp salt\n- 1/2 tsp black pepper\n- 1 cup frozen peas\n- 1 cup all-purpose flour\n- 2 tsp baking powder\n- 1/2 tsp salt\n- 1/4 cup unsalted butter, melted\n- 1/2 cup milk\n\nDirections:\n\n1. Heat oil in a large pot over medium-high heat. Add chicken and cook until browned on all sides. Remove chicken from pot and set aside.\n2. Add onion, celery, and carrots to the same pot and cook until softened, about 5 minutes. Add garlic and cook for an additional 30 seconds.\n3. Stir in flour and cook for 1-2 minutes until golden brown. Gradually add chicken broth, stirring constantly to prevent lumps. Add bay leaf, thyme, salt, and pepper.\n4. Return chicken to pot and bring to a boil. Reduce heat to low and let simmer for 30 minutes.\n5. While chicken is simmering, make the dumplings. In a bowl, mix together flour, baking powder, and salt. Stir in melted butter and milk until just combined.\n6. Drop spoonfuls of dumpling mixture onto the simmering chicken mixture. Cover pot and let cook for 15-20 minutes, until dumplings are cooked through.\n7. Stir in frozen peas and cook for an additional 2-3 minutes. Serve hot and enjoy!");
    chickenAndDumplingsTextEdit->setGeometry(0, 0, 500, 400);
    chickenAndDumplingsTextEdit->hide();
    chickenAndDumplingsLabel.setPixmap(chickenAndDumplingsPixmap);
    chickenAndDumplingsLabel.hide();

    QLabel turkeyBurgersLabel(&get_cookin_label);
    QPixmap turkeyBurgersPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\poultry_dishes.png");
    QTextEdit *turkeyBurgersTextEdit = new QTextEdit(&get_cookin_label);
    turkeyBurgersTextEdit->setText("Turkey Burgers with Avocado and Caramelized Onions!\n\nIngredients:\n\n- 1 pound ground turkey\n- 1/2 cup breadcrumbs\n- 1/4 cup diced onion\n- 1/4 cup chopped fresh parsley\n- 1 tablespoon Dijon mustard\n- 1/2 teaspoon garlic powder\n- Salt and pepper, to taste\n- 1 avocado, sliced\n- 1 large onion, sliced\n- 1 tablespoon olive oil\n- 4 hamburger buns\n\nDirections:\n\n1. Preheat grill to medium-high heat.\n2. In a large bowl, mix together ground turkey, breadcrumbs, diced onion, parsley, Dijon mustard, garlic powder, salt, and pepper. Form into 4 patties.\n3. In a skillet over medium heat, add olive oil and sliced onion. Cook, stirring occasionally, until onions are caramelized, about 20 minutes.\n4. Grill turkey burgers for 4-5 minutes per side, or until cooked through.\n5. Assemble burgers on buns with sliced avocado and caramelized onions. Enjoy!");
    turkeyBurgersTextEdit->setGeometry(0, 0, 500, 400);
    turkeyBurgersTextEdit->hide();
    turkeyBurgersLabel.setPixmap(turkeyBurgersPixmap);
    turkeyBurgersLabel.hide();

    QLabel roastChickenLabel(&get_cookin_label);
    QPixmap roastChickenPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\poultry_dishes.png");
    QTextEdit *roastChickenTextEdit = new QTextEdit(&get_cookin_label);
    roastChickenTextEdit->setText("Lemon Garlic Roast Chicken!\n\nIngredients:\n\n-1 whole chicken (4-5 lbs)\n-1/4 cup butter, softened\n-4 cloves garlic, minced\n-1 lemon, zested and juiced\n-1 tsp salt\n-1/2 tsp black pepper\n-1/2 tsp dried thyme\n\nDirections:\n\n1. Preheat oven to 425 degrees F.\n2. In a small bowl, combine butter, garlic, lemon zest, salt, pepper, and thyme.\n3. Pat chicken dry and spread the butter mixture all over the chicken, including under the skin.\n4. Place the chicken in a roasting pan and pour lemon juice over the top.\n5. Roast for 1 to 1 1/2 hours or until the internal temperature of the chicken reaches 165 degrees F.\n6. Let the chicken rest for 10-15 minutes before carving and serving.");
    roastChickenTextEdit->setGeometry(0, 0, 500, 400);
    roastChickenTextEdit->hide();
    roastChickenLabel.setPixmap(roastChickenPixmap);
    roastChickenLabel.hide();

    QLabel marsalaLabel(&get_cookin_label);
    QPixmap marsalaPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\poultry_dishes.png");
    QTextEdit *marsalaTextEdit = new QTextEdit(&get_cookin_label);
    marsalaTextEdit->setText("Chicken and Mushroom Marsala!\n\nIngredients:\n\n- 4 boneless, skinless chicken breasts\n- 1/4 cup all-purpose flour\n- 1/2 teaspoon salt\n- 1/2 teaspoon black pepper\n- 2 tablespoons olive oil\n- 8 ounces sliced mushrooms\n- 2 garlic cloves, minced\n- 1 cup Marsala wine\n- 1 cup chicken broth\n- 1/2 cup heavy cream\n- Fresh parsley, chopped\n\nDirections:\n\n1. Season the chicken with salt and pepper and coat it in flour.\n2. Heat the olive oil in a large skillet over medium-high heat. Add the chicken and cook for 5-7 minutes per side, until browned and cooked through. Remove from the skillet and set aside.\n3. Add the mushrooms to the skillet and cook for 5 minutes, until browned. Add the garlic and cook for 30 seconds.\n4. Pour in the Marsala wine and chicken broth and bring to a boil. Reduce the heat to low and let simmer for 10-15 minutes, until the sauce has thickened.\n5. Stir in the heavy cream and return the chicken to the skillet. Cook for 5 minutes, until the chicken is heated through and the sauce is thick and creamy.\n6. Garnish with fresh parsley and serve hot.");
    marsalaTextEdit->setGeometry(0, 0, 500, 400);
    marsalaTextEdit->hide();
    marsalaLabel.setPixmap(marsalaPixmap);
    marsalaLabel.hide();

    QLabel beefStroganoffLabel(&get_cookin_label);
    QPixmap beefStroganoffPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *beefStroganoffTextEdit = new QTextEdit(&get_cookin_label);
    beefStroganoffTextEdit->setText("Beef Stroganoff!\n\nIngredients:\n\n- 1 lb beef sirloin, cut into thin strips\n- 2 tbsp olive oil\n- 2 tbsp butter\n- 1 onion, chopped\n- 8 oz mushrooms, sliced\n- 1 tbsp all-purpose flour\n- 1 1/2 cups beef broth\n- 1/2 cup sour cream\n- 1 tsp dijon mustard\n- 1 tsp paprika\n- Salt and pepper to taste\n\nDirections:\n\n1. Heat the olive oil and butter in a large skillet over medium heat.\n2. Add the onion and mushrooms and sauté until they are softened, about 5 minutes.\n3. Add the beef strips and cook until browned, about 5 minutes.\n4. Sprinkle the flour over the meat and vegetables and stir to combine.\n5. Add the beef broth, dijon mustard, paprika, salt, and pepper and bring the mixture to a simmer.\n6. Reduce the heat to low and let the stroganoff simmer until the sauce has thickened, about 10 minutes.\n7. Stir in the sour cream and heat through.\n8. Serve the stroganoff over egg noodles or rice.");
    beefStroganoffTextEdit->setGeometry(0, 0, 500, 400);
    beefStroganoffTextEdit->hide();
    beefStroganoffLabel.setPixmap(beefStroganoffPixmap);
    beefStroganoffLabel.hide();

    QLabel lambChopsLabel(&get_cookin_label);
    QPixmap lambChopsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *lambChopsTextEdit = new QTextEdit(&get_cookin_label);
    lambChopsTextEdit->setText("Lamb Chops with Mint Chimichurri!\n\nIngredients:\n\n- 4 lamb chops\n- 2 tablespoons olive oil\n- Salt and freshly ground black pepper\n- 1 cup packed fresh mint leaves\n- 1/4 cup packed fresh parsley leaves\n- 1/4 cup red wine vinegar\n- 2 garlic cloves, chopped\n- 1/4 teaspoon red pepper flakes\n- 1/2 cup extra-virgin olive oil\n\nDirections:\n\n1. Preheat oven to 375 degrees F.\n2. Heat 2 tablespoons of olive oil in a large ovenproof skillet over high heat.\n3. Season the lamb chops with salt and pepper on both sides, then add them to the skillet and cook until browned, about 3 minutes per side.\n4. Transfer the skillet to the oven and roast for 10 to 15 minutes, or until the lamb chops are cooked to your desired level of doneness.\n5. While the lamb chops are cooking, prepare the mint chimichurri by combining the mint, parsley, red wine vinegar, garlic, red pepper flakes, and extra-virgin olive oil in a food processor or blender.\n6. Pulse until the herbs are finely chopped and the mixture is well combined.\n7. Once the lamb chops are finished cooking, let them rest for a few minutes before serving with the mint chimichurri on top.\nEnjoy!");
    lambChopsTextEdit->setGeometry(0, 0, 500, 400);
    lambChopsTextEdit->hide();
    lambChopsLabel.setPixmap(lambChopsPixmap);
    lambChopsLabel.hide();

    QLabel italianMeatballsLabel(&get_cookin_label);
    QPixmap italianMeatballsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *italianMeatballsTextEdit = new QTextEdit(&get_cookin_label);
    italianMeatballsTextEdit->setText("Italian Meatballs in Tomato Sauce!\n\nIngredients:\n\n- 1 pound ground beef\n- 1/2 pound ground pork\n- 1/2 cup bread crumbs\n- 1/4 cup grated Parmesan cheese\n- 1/4 cup chopped fresh parsley\n- 1/4 cup milk\n- 1 large egg\n- 1/2 teaspoon garlic powder\n- 1/2 teaspoon onion powder\n- Salt and pepper, to taste\n- 2 tablespoons olive oil\n- 1 large onion, chopped\n- 3 cloves garlic, minced\n- 1 can (28 oz) crushed tomatoes\n- 1/2 cup red wine\n- 1 tablespoon tomato paste\n- 1 tablespoon chopped fresh basil\n- 1 tablespoon chopped fresh oregano\n- 1 bay leaf\n\nDirections:\n\n1. Preheat oven to 375°F.\n2. In a large bowl, mix together ground beef, ground pork, bread crumbs, Parmesan cheese, parsley, milk, egg, garlic powder, onion powder, salt, and pepper.\n3. Shape the mixture into meatballs, about 1 1/2 inch in diameter.\n4. Heat olive oil in a large skillet over medium-high heat. Add the meatballs and cook until browned on all sides.\n5. Remove the meatballs from the skillet and set aside.\n6. In the same skillet, add the onion and garlic and cook until soft.\n7. Add the crushed tomatoes, red wine, tomato paste, basil, oregano, bay leaf, salt, and pepper. Bring to a simmer and cook for 10 minutes.\n8. Add the meatballs back to the skillet and transfer to the preheated oven.\n9. Bake for 25 minutes.\n10. Serve hot with pasta or bread.");
    italianMeatballsTextEdit->setGeometry(0, 0, 500, 400);
    italianMeatballsTextEdit->hide();
    italianMeatballsLabel.setPixmap(italianMeatballsPixmap);
    italianMeatballsLabel.hide();

    QLabel porkChopsLabel(&get_cookin_label);
    QPixmap porkChopsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *porkChopsTextEdit = new QTextEdit(&get_cookin_label);
    porkChopsTextEdit->setText("Pork Chops with Apple Cider Glaze!\n\nIngredients:\n\n- 4 bone-in pork chops\n- Salt and black pepper to taste\n- 1 tablespoon olive oil\n- 1/2 cup apple cider\n- 1/4 cup chicken broth\n- 2 tablespoons unsalted butter\n- 1 tablespoon Dijon mustard\n- 1 tablespoon chopped fresh thyme leaves\n- 1 tablespoon chopped fresh parsley leaves\n\nDirections:\n\n1. Season pork chops with salt and black pepper.\n2. Heat olive oil in a large skillet over medium-high heat.\n3. Add pork chops and cook until browned, about 3-4 minutes per side.\n4. Remove pork chops from skillet and set aside.\n5. Pour apple cider and chicken broth into the skillet, scraping up any browned bits.\n6. Add butter, Dijon mustard, thyme, and parsley and stir until butter is melted and sauce is well combined.\n7. Return pork chops to the skillet and spoon sauce over them.\n8. Reduce heat to medium-low and simmer until pork chops are cooked through and sauce has thickened, about 10 minutes.\n9. Serve pork chops with the apple cider glaze spooned over the top.");
    porkChopsTextEdit->setGeometry(0, 0, 500, 400);
    porkChopsTextEdit->hide();
    porkChopsLabel.setPixmap(porkChopsPixmap);
    porkChopsLabel.hide();

    QLabel koreanBBQLabel(&get_cookin_label);
    QPixmap koreanBBQPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *koreanBBQTextEdit = new QTextEdit(&get_cookin_label);
    koreanBBQTextEdit->setText("Korean BBQ Short Ribs (Galbi)!\n\nIngredients:\n\n- 2 pounds beef short ribs, cut into 1/4-inch thick slices\n- 1/2 cup soy sauce\n- 1/4 cup brown sugar\n- 1/4 cup honey\n- 2 tablespoons sesame oil\n- 1 tablespoon grated ginger\n- 4 cloves garlic, minced\n- 2 green onions, thinly sliced\n- 1/4 teaspoon black pepper\n\nDirections:\n\n1. In a large bowl, whisk together soy sauce, brown sugar, honey, sesame oil, ginger, garlic, green onions, and black pepper.\n2. Add sliced beef to the bowl and mix well to coat evenly.\n3. Cover the bowl with plastic wrap and marinate in the refrigerator for at least 1 hour (or up to 24 hours) to allow the flavors to meld together.\n4. Preheat grill or grill pan to medium-high heat. Remove beef from marinade and shake off excess. Grill beef for 3-4 minutes per side, or until nicely charred and cooked through.\n5. Serve hot with steamed rice and your favorite vegetable side dish.");
    koreanBBQTextEdit->setGeometry(0, 0, 500, 400);
    koreanBBQTextEdit->hide();
    koreanBBQLabel.setPixmap(koreanBBQPixmap);
    koreanBBQLabel.hide();

    QLabel spaghettiBologneseLabel(&get_cookin_label);
    QPixmap spaghettiBolognesePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *spaghettiBologneseTextEdit = new QTextEdit(&get_cookin_label);
    spaghettiBologneseTextEdit->setText("Spaghetti Bolognese!\n\nIngredients:\n\n- 1 lb spaghetti\n- 1 lb ground beef\n- 1 onion, chopped\n- 3 garlic cloves, minced\n- 1 can (28 oz) crushed tomatoes\n- 1/2 cup beef broth\n- 2 tbsp tomato paste\n- 1 tsp dried basil\n- 1 tsp dried oregano\n- 1/4 tsp red pepper flakes\n- Salt and pepper to taste\n\nDirections:\n\n1. Cook spaghetti according to package instructions.\n2. In a large skillet, cook ground beef over medium heat until browned. Add onion and garlic and cook until softened.\n3. Add crushed tomatoes, beef broth, tomato paste, basil, oregano, red pepper flakes, salt, and pepper. Stir well and bring to a simmer.\n4. Reduce heat to low and let the sauce simmer for about 20-30 minutes, stirring occasionally.\n5. Serve the spaghetti topped with the bolognese sauce.");
    spaghettiBologneseTextEdit->setGeometry(0, 0, 500, 400);
    spaghettiBologneseTextEdit->hide();
    spaghettiBologneseLabel.setPixmap(spaghettiBolognesePixmap);
    spaghettiBologneseLabel.hide();

    QLabel fettuccineAlfredoLabel(&get_cookin_label);
    QPixmap fettuccineAlfredoPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *fettuccineAlfredoTextEdit = new QTextEdit(&get_cookin_label);
    fettuccineAlfredoTextEdit->setText("Fettuccine Alfredo with Chicken and Broccoli! \n\nIngredients:\n\n- 8 oz fettuccine pasta\n- 1 lb boneless, skinless chicken breasts, sliced into strips\n- 2 cups broccoli florets\n- 1/2 cup unsalted butter\n- 1 cup heavy cream\n- 1/2 cup freshly grated Parmesan cheese\n- 2 cloves garlic, minced\n- Salt and pepper to taste\n\nDirections:\n\n1. Cook the fettuccine pasta according to package instructions. Drain and set aside.\n2. In a large skillet, melt the butter over medium-high heat. Add the chicken and cook until browned and cooked through, about 6-8 minutes.\n3. Add the garlic and broccoli to the skillet and cook for an additional 2-3 minutes.\n4. Pour in the heavy cream and stir to combine. Bring the mixture to a simmer and let cook for 2-3 minutes until slightly thickened.\n5. Add the Parmesan cheese to the skillet and stir to combine. Continue cooking until the cheese has melted and the sauce is smooth.\n6. Add the cooked fettuccine pasta to the skillet and toss to coat with the sauce.\n7. Serve hot and enjoy!");
    fettuccineAlfredoTextEdit->setGeometry(0, 0, 500, 400);
    fettuccineAlfredoTextEdit->hide();
    fettuccineAlfredoLabel.setPixmap(fettuccineAlfredoPixmap);
    fettuccineAlfredoLabel.hide();

    QLabel linguineLabel(&get_cookin_label);
    QPixmap linguinePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *linguineTextEdit = new QTextEdit(&get_cookin_label);
    linguineTextEdit->setText("Linguine with Clams and White Wine Sauce!\n\nIngredients:\n\n-1 pound linguine\n-2 dozen littleneck clams, scrubbed\n-1/2 cup dry white wine\n-1/4 cup olive oil\n-4 cloves garlic, minced\n-1/4 teaspoon red pepper flakes\n-1/4 cup chopped fresh parsley\n-Kosher salt and freshly ground black pepper\n\nDirections:\n\n1. Bring a large pot of salted water to a boil. Add the linguine and cook until al dente, about 8 to 10 minutes. Drain the pasta, reserving 1 cup of the pasta water.\n2. Meanwhile, in a large skillet over medium heat, combine the clams, white wine, and 1/4 cup of water. Cover and cook until the clams have opened, about 5 to 7 minutes. Discard any clams that do not open.\n3. In a separate skillet, heat the olive oil over medium heat. Add the garlic and red pepper flakes, and cook until fragrant, about 1 to 2 minutes. Add the reserved pasta water, parsley, and cooked linguine. Toss to coat the pasta.\n4. Divide the pasta among serving bowls and top with the cooked clams. Season with salt and pepper to taste. Serve immediately.");
    linguineTextEdit->setGeometry(0, 0, 500, 400);
    linguineTextEdit->hide();
    linguineLabel.setPixmap(linguinePixmap);
    linguineLabel.hide();

    QLabel pestoPastaLabel(&get_cookin_label);
    QPixmap pestoPastaPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *pestoPastaTextEdit = new QTextEdit(&get_cookin_label);
    pestoPastaTextEdit->setText("Pesto Pasta with Roasted Cherry Tomatoes!\n\nIngredients:\n\n- 1 pound pasta\n- 1/2 cup prepared basil pesto\n- 1 pint cherry tomatoes\n- 1/4 cup olive oil\n- Salt and pepper, to taste\n- Parmesan cheese, for serving\n\nDirections:\n\n1. Preheat oven to 400 degrees F (200 degrees C).\n2. Toss cherry tomatoes with olive oil and season with salt and pepper. Spread them out on a baking sheet and roast for 15-20 minutes or until they burst and start to caramelize.\n3. Cook pasta according to package instructions.\n4. Drain pasta and return it to the pot. Add prepared pesto and roasted cherry tomatoes, stirring to combine.\n5. Serve with grated Parmesan cheese.");
    pestoPastaTextEdit->setGeometry(0, 0, 500, 400);
    pestoPastaTextEdit->hide();
    pestoPastaLabel.setPixmap(pestoPastaPixmap);
    pestoPastaLabel.hide();

    QLabel rigatoniLabel(&get_cookin_label);
    QPixmap rigatoniPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\meat_dishes.png");
    QTextEdit *rigatoniTextEdit = new QTextEdit(&get_cookin_label);
    rigatoniTextEdit->setText("Rigatoni with Sausage and Mushroom Ragu!\n\nIngredients:\n\n- 1 pound rigatoni\n- 1 pound Italian sausage\n- 1 onion, diced\n- 4 cloves garlic, minced\n- 1 tablespoon tomato paste\n- 2 cans diced tomatoes\n- 1 cup beef broth\n- 1 teaspoon dried oregano\n- 1 teaspoon dried basil\n- 1/2 teaspoon red pepper flakes\n- Salt and pepper, to taste\n- 8 ounces mushrooms, sliced\n- 1/2 cup grated Parmesan cheese\n\nDirections:\n\n1. Cook the rigatoni according to package instructions. Drain and set aside.\n2. In a large pot or Dutch oven, cook the sausage over medium-high heat, breaking it up with a wooden spoon, until browned and cooked through. Transfer the sausage to a plate.\n3. Add the onion to the pot and sauté until softened, about 5 minutes. Add the garlic and cook for another minute.\n4. Stir in the tomato paste and cook for 2 minutes, until fragrant.\n5. Add the diced tomatoes (with their juices), beef broth, oregano, basil, red pepper flakes, salt, and pepper. Bring to a boil, then reduce the heat and simmer for 15-20 minutes, until the sauce has thickened slightly.\n6. While the sauce is simmering, heat a large skillet over medium-high heat. Add the mushrooms and cook, stirring occasionally, until browned and tender.\n7. Add the cooked sausage and mushrooms to the pot with the tomato sauce. Stir to combine and heat through.\n8. Serve the rigatoni with the sausage and mushroom ragu, topped with grated Parmesan cheese.");
    rigatoniTextEdit->setGeometry(0, 0, 500, 400);
    rigatoniTextEdit->hide();
    rigatoniLabel.setPixmap(rigatoniPixmap);
    rigatoniLabel.hide();

    QLabel chimichurriLabel(&get_cookin_label);
    QPixmap chimichurriPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\sauces_dressings_marinades.png");
    QTextEdit *chimichurriTextEdit = new QTextEdit(&get_cookin_label);
    chimichurriTextEdit->setText("Chimichurri Sauce!\n\nIngredients:\n\n- 1 cup fresh parsley leaves\n- 1 cup fresh cilantro leaves\n- 4 garlic cloves\n- 1 shallot\n- 1/2 cup olive oil\n- 2 tbsp red wine vinegar\n- 1/2 tsp salt\n- 1/4 tsp red pepper flakes\n\nDirections:\n\n1. Finely chop parsley, cilantro, garlic, and shallot and place in a medium-sized bowl.\n2. Add olive oil, red wine vinegar, salt, and red pepper flakes to the bowl and mix well.\n3. Cover and refrigerate for at least 1 hour to let the flavors meld.\n4. Serve chilled or at room temperature with grilled meats or vegetables.");
    chimichurriTextEdit->setGeometry(0, 0, 500, 400);
    chimichurriTextEdit->hide();
    chimichurriLabel.setPixmap(chimichurriPixmap);
    chimichurriLabel.hide();

    QLabel honeyMustardDressingLabel(&get_cookin_label);
    QPixmap honeyMustardDressingPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\sauces_dressings_marinades.png");
    QTextEdit *honeyMustardDressingTextEdit = new QTextEdit(&get_cookin_label);
    honeyMustardDressingTextEdit->setText("Honey Mustard Dressing!\n\nIngredients:\n\n- 1/4 cup dijon mustard\n- 1/4 cup honey\n- 3 tbsp apple cider vinegar\n- 1/4 cup olive oil\n- Salt and pepper to taste\n\nDirections:\n\n1. In a small bowl, whisk together the dijon mustard, honey, and apple cider vinegar.\n2. Slowly drizzle in the olive oil, whisking constantly, until the dressing is emulsified.\n3. Season with salt and pepper to taste.\n4. Store in the refrigerator for up to one week.");
    honeyMustardDressingTextEdit->setGeometry(0, 0, 500, 400);
    honeyMustardDressingTextEdit->hide();
    honeyMustardDressingLabel.setPixmap(honeyMustardDressingPixmap);
    honeyMustardDressingLabel.hide();

    QLabel redWineSauceLabel(&get_cookin_label);
    QPixmap redWineSaucePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\sauces_dressings_marinades.png");
    QTextEdit *redWineSauceTextEdit = new QTextEdit(&get_cookin_label);
    redWineSauceTextEdit->setText("Red Wine Sauce!\n\nIngredients:\n\n- 2 tablespoons butter\n- 1/2 cup finely chopped shallots\n- 2 cups dry red wine\n- 2 cups beef broth\n- 1 tablespoon tomato paste\n- 1 tablespoon chopped fresh thyme\n- Salt and freshly ground black pepper to taste\n\nDirections:\n\n1. Melt the butter in a large saucepan over medium heat.\n2. Add the shallots and sauté for 2-3 minutes, until softened.\n3. Pour in the red wine and beef broth, and add the tomato paste and thyme.\n4. Bring to a boil, then reduce the heat and simmer for 20-30 minutes, until the sauce has thickened and reduced by about half.\n5. Strain the sauce through a fine-mesh sieve into a clean saucepan.\n6. Return the sauce to a simmer and cook for an additional 5-10 minutes, until it has thickened to your desired consistency.\n7. Season with salt and pepper to taste.\n8. Serve the sauce warm with your favorite meat dishes.");
    redWineSauceTextEdit->setGeometry(0, 0, 500, 400);
    redWineSauceTextEdit->hide();
    redWineSauceLabel.setPixmap(redWineSaucePixmap);
    redWineSauceLabel.hide();

    QLabel thaiPeanutSauceLabel(&get_cookin_label);
    QPixmap thaiPeanutSaucePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\sauces_dressings_marinades.png");
    QTextEdit *thaiPeanutSauceTextEdit = new QTextEdit(&get_cookin_label);
    thaiPeanutSauceTextEdit->setText("Thai Peanut Sauce!\n\nIngredients:\n\n- 1/2 cup creamy peanut butter\n- 1/4 cup low sodium soy sauce\n- 3 tablespoons honey\n- 2 tablespoons rice vinegar\n- 1 tablespoon toasted sesame oil\n- 1 tablespoon grated fresh ginger\n- 2 cloves garlic, minced\n- 1/4-1/2 teaspoon red pepper flakes\n- 1/4 cup warm water\n\nDirections:\n\n1. In a medium bowl, whisk together peanut butter, soy sauce, honey, rice vinegar, sesame oil, ginger, garlic, and red pepper flakes.\n2. Gradually whisk in warm water until the sauce reaches a pourable consistency.\n3. Taste and adjust seasoning as needed.\n4. Serve with your favorite dish, such as noodles or stir-fry.");
    thaiPeanutSauceTextEdit->setGeometry(0, 0, 500, 400);
    thaiPeanutSauceTextEdit->hide();
    thaiPeanutSauceLabel.setPixmap(thaiPeanutSaucePixmap);
    thaiPeanutSauceLabel.hide();

    QLabel caesarDressingLabel(&get_cookin_label);
    QPixmap caesarDressingPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\sauces_dressings_marinades.png");
    QTextEdit *caesarDressingTextEdit = new QTextEdit(&get_cookin_label);
    caesarDressingTextEdit->setText("Caesar Dressing!\n\nIngredients:\n\n- 2 cloves garlic, minced\n- 1 teaspoon anchovy paste\n- 2 tablespoons freshly squeezed lemon juice\n- 1 teaspoon Dijon mustard\n- 1 teaspoon Worcestershire sauce\n- 1 cup mayonnaise\n- 1/2 cup freshly grated Parmesan cheese\n- Salt and freshly ground black pepper\n- 1/4 cup olive oil\n\nDirections:\n\n1. In a small bowl, whisk together the garlic, anchovy paste, lemon juice, Dijon mustard, and Worcestershire sauce.\n2. In a separate bowl, mix together the mayonnaise and Parmesan cheese.\n3. Add the garlic mixture to the mayonnaise mixture and stir well to combine.\n4. Season with salt and pepper to taste.\n5. Slowly whisk in the olive oil until the dressing is smooth and creamy.\n6. Store in the refrigerator until ready to use.");
    caesarDressingTextEdit->setGeometry(0, 0, 500, 400);
    caesarDressingTextEdit->hide();
    caesarDressingLabel.setPixmap(caesarDressingPixmap);
    caesarDressingLabel.hide();

    QLabel chocolateChipCookiesLabel(&get_cookin_label);
    QPixmap chocolateChipCookiesPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\desserts.png");
    QTextEdit *chocolateChipCookiesTextEdit = new QTextEdit(&get_cookin_label);
    chocolateChipCookiesTextEdit->setText("Classic Chocolate Chip Cookies!\n\nIngredients:\n\n1 cup (2 sticks) unsalted butter, softened\n1 cup white sugar\n1 cup brown sugar\n2 large eggs\n1 tsp vanilla extract\n3 cups all-purpose flour\n1 tsp baking soda\n1/2 tsp salt\n2 cups semisweet chocolate chips\n\nDirections:\n\n1. Preheat the oven to 375°F.\n2. In a large bowl, cream together the butter, white sugar, and brown sugar until smooth.\n3. Beat in the eggs one at a time, then stir in the vanilla.\n4. In a separate bowl, whisk together the flour, baking soda, and salt.\n5. Gradually mix the dry ingredients into the wet ingredients until fully combined.\n6. Stir in the chocolate chips.\n7. Drop spoonfuls of the dough onto a baking sheet lined with parchment paper.\n8. Bake for 10-12 minutes or until lightly golden brown.\n9. Let the cookies cool on the baking sheet for a few minutes before transferring them to a wire rack to cool completely.");
    chocolateChipCookiesTextEdit->setGeometry(0, 0, 500, 400);
    chocolateChipCookiesTextEdit->hide();
    chocolateChipCookiesLabel.setPixmap(chocolateChipCookiesPixmap);
    chocolateChipCookiesLabel.hide();

    QLabel blueberryMuffinsLabel(&get_cookin_label);
    QPixmap blueberryMuffinsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\desserts.png");
    QTextEdit *blueberryMuffinsTextEdit = new QTextEdit(&get_cookin_label);
    blueberryMuffinsTextEdit->setText("Blueberry Muffins!\n\nIngredients:\n\n- 2 cups all-purpose flour\n- 2/3 cup granulated sugar\n- 1 tablespoon baking powder\n- 1/2 teaspoon salt\n- 1 egg\n- 3/4 cup milk\n- 1/3 cup vegetable oil\n- 1 teaspoon vanilla extract\n- 1 1/2 cups fresh blueberries\n\nDirections:\n\n1. Preheat oven to 400°F. Line a 12-cup muffin tin with paper liners.\n2. In a large bowl, whisk together the flour, sugar, baking powder, and salt.\n3. In another bowl, whisk together the egg, milk, vegetable oil, and vanilla extract.\n4. Add the wet ingredients to the dry ingredients and stir until just combined. Fold in the blueberries.\n5. Divide the batter evenly among the muffin cups.\n6. Bake for 18-20 minutes, or until a toothpick inserted into the center of a muffin comes out clean.\n7. Let the muffins cool in the tin for 5 minutes before transferring to a wire rack to cool completely.");
    blueberryMuffinsTextEdit->setGeometry(0, 0, 500, 400);
    blueberryMuffinsTextEdit->hide();
    blueberryMuffinsLabel.setPixmap(blueberryMuffinsPixmap);
    blueberryMuffinsLabel.hide();

    QLabel cheesecakeLabel(&get_cookin_label);
    QPixmap cheesecakePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\desserts.png");
    QTextEdit *cheesecakeTextEdit = new QTextEdit(&get_cookin_label);
    cheesecakeTextEdit->setText("Cheesecake!\n\nIngredients:\n\n1 1/2 cups graham cracker crumbs\n1/4 cup white sugar\n1/4 cup melted butter\n4 (8 oz) packages cream cheese, softened\n1 1/4 cups white sugar\n1/4 cup all-purpose flour\n4 eggs\n2 egg yolks\n1/3 cup heavy whipping cream\n1 teaspoon vanilla extract\n\nDirections:\n\n1. Preheat oven to 325°F (165°C).\n2. In a medium bowl, mix graham cracker crumbs, 1/4 cup white sugar, and melted butter until well blended. Press mixture onto bottom and up the sides of a 9 inch springform pan.\n3. In a large bowl, mix cream cheese, 1 1/4 cups white sugar, and flour until smooth. Beat in eggs and egg yolks one at a time, then stir in heavy cream and vanilla. Pour mixture into crust.\n4. Bake for 60 to 70 minutes, or until the center is almost set. Allow cheesecake to cool, then refrigerate for several hours or overnight before serving.");
    cheesecakeTextEdit->setGeometry(0, 0, 500, 400);
    cheesecakeTextEdit->hide();
    cheesecakeLabel.setPixmap(cheesecakePixmap);
    cheesecakeLabel.hide();

    QLabel applePieLabel(&get_cookin_label);
    QPixmap applePiePixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\desserts.png");
    QTextEdit *applePieTextEdit = new QTextEdit(&get_cookin_label);
    applePieTextEdit->setText("Apple Pie!\n\nIngredients:\n\n- 2 1/2 cups all-purpose flour\n- 1 tsp salt\n- 1 tsp sugar\n- 1 cup unsalted butter, cold and cubed\n- 1/4 to 1/2 cup ice water\n- 6 cups sliced apples (peeled and cored)\n- 1/2 cup granulated sugar\n- 1/4 cup brown sugar\n- 1/4 tsp salt\n- 1 tsp cinnamon\n- 1/4 tsp nutmeg\n- 1/4 tsp allspice\n- 2 tbsp unsalted butter, melted\n- 1 egg, beaten\n\nDirections:\n\n1. In a large bowl, whisk together the flour, salt, and sugar. Add the butter and use a pastry blender or your fingers to cut the butter into the flour mixture until it resembles coarse crumbs.\n2. Gradually add the ice water, 1 tablespoon at a time, until the dough comes together into a ball. Divide the dough in half and flatten each half into a disk. Wrap the disks in plastic wrap and refrigerate for at least 1 hour.\n3. Preheat the oven to 375°F (190°C). In a large bowl, toss the apples with the sugars, salt, cinnamon, nutmeg, allspice, and melted butter.\n4. On a lightly floured surface, roll out one disk of dough to fit a 9-inch pie dish. Place the dough in the dish and trim the edges. Pour the apple mixture into the crust.\n5. Roll out the second disk of dough and cut it into strips. Place the strips over the apples in a lattice pattern. Brush the beaten egg over the lattice.\n6. Bake for 45 to 50 minutes, or until the crust is golden brown and the apples are tender. Let cool before serving.");
    applePieTextEdit->setGeometry(0, 0, 500, 400);
    applePieTextEdit->hide();
    applePieLabel.setPixmap(applePiePixmap);
    applePieLabel.hide();

    QLabel lemonBarsLabel(&get_cookin_label);
    QPixmap lemonBarsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\desserts.png");
    QTextEdit *lemonBarsTextEdit = new QTextEdit(&get_cookin_label);
    lemonBarsTextEdit->setText("Lemon Bars!\n\nIngredients:\n\n1 cup unsalted butter, softened\n1/2 cup white sugar\n2 cups all-purpose flour\n4 large eggs\n1 1/2 cups white sugar\n1/4 cup all-purpose flour\n2 lemons, juiced and zested\npowdered sugar, for dusting\nDirections:\n\n1. Preheat oven to 350 degrees F (175 degrees C).\n2. In a medium bowl, cream together the butter and 1/2 cup sugar. Mix in 2 cups flour until well blended. Press mixture into the bottom of an ungreased 9x13 inch baking pan.\n3. Bake for 15-20 minutes in the preheated oven, or until firm and golden.\n4. In another bowl, whisk together the remaining 1 1/2 cups sugar and 1/4 cup flour. Whisk in the eggs, lemon juice, and lemon zest. Pour over the baked crust.\n5. Bake for an additional 20 minutes in the preheated oven. The bars will firm up as they cool.\n6. Once cooled, dust with powdered sugar and cut into squares.");
    lemonBarsTextEdit->setGeometry(0, 0, 500, 400);
    lemonBarsTextEdit->hide();
    lemonBarsLabel.setPixmap(lemonBarsPixmap);
    lemonBarsLabel.hide();





    //back buttons for the recipes





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

    QPushButton breakfastBurritoBackButton("Go Back!", &breakfastBurritoLabel);
    breakfastBurritoBackButton.setGeometry(360, 440, 120, 40);
    breakfastBurritoBackButton.setStyleSheet("background-color: lightblue");
    breakfastBurritoBackButton.hide();

    QPushButton shakshukaBackButton("Go Back!", &shakshukaLabel);
    shakshukaBackButton.setGeometry(360, 440, 120, 40);
    shakshukaBackButton.setStyleSheet("background-color: lightblue");
    shakshukaBackButton.hide();

    QPushButton huevosRancherosBackButton("Go Back!", &huevosRancherosLabel);
    huevosRancherosBackButton.setGeometry(360, 440, 120, 40);
    huevosRancherosBackButton.setStyleSheet("background-color: lightblue");
    huevosRancherosBackButton.hide();

    QPushButton croissantBreakfastSandwichBackButton("Go Back!", &croissantBreakfastSandwichLabel);
    croissantBreakfastSandwichBackButton.setGeometry(360, 440, 120, 40);
    croissantBreakfastSandwichBackButton.setStyleSheet("background-color: lightblue");
    croissantBreakfastSandwichBackButton.hide();

    QPushButton eggsBenedictBackButton("Go Back!", &eggsBenedictLabel);
    eggsBenedictBackButton.setGeometry(360, 440, 120, 40);
    eggsBenedictBackButton.setStyleSheet("background-color: lightblue");
    eggsBenedictBackButton.hide();

    QPushButton belgianWafflesBackButton("Go Back!", &belgianWafflesLabel);
    belgianWafflesBackButton.setGeometry(360, 440, 120, 40);
    belgianWafflesBackButton.setStyleSheet("background-color: lightblue");
    belgianWafflesBackButton.hide();

    QPushButton classicGuacamoleBackButton("Go Back!", &classicGuacamoleLabel);
    classicGuacamoleBackButton.setGeometry(360, 440, 120, 40);
    classicGuacamoleBackButton.setStyleSheet("background-color: lightblue");
    classicGuacamoleBackButton.hide();

    QPushButton bakedSweetPotatoFriesBackButton("Go Back!", &bakedSweetPotatoFriesLabel);
    bakedSweetPotatoFriesBackButton.setGeometry(360, 440, 120, 40);
    bakedSweetPotatoFriesBackButton.setStyleSheet("background-color: lightblue");
    bakedSweetPotatoFriesBackButton.hide();

    QPushButton capreseSkewersBackButton("Go Back!", &capreseSkewersLabel);
    capreseSkewersBackButton.setGeometry(360, 440, 120, 40);
    capreseSkewersBackButton.setStyleSheet("background-color: lightblue");
    capreseSkewersBackButton.hide();

    QPushButton crispyParmesanZucchiniFriesBackButton("Go Back!", &crispyParmesanZucchiniFriesLabel);
    crispyParmesanZucchiniFriesBackButton.setGeometry(360, 440, 120, 40);
    crispyParmesanZucchiniFriesBackButton.setStyleSheet("background-color: lightblue");
    crispyParmesanZucchiniFriesBackButton.hide();

    QPushButton spinachAndArtichokeDipBackButton("Go Back!", &spinachAndArtichokeDipLabel);
    spinachAndArtichokeDipBackButton.setGeometry(360, 440, 120, 40);
    spinachAndArtichokeDipBackButton.setStyleSheet("background-color: lightblue");
    spinachAndArtichokeDipBackButton.hide();

    QPushButton miniQuichesBackButton("Go Back!", &miniQuichesLabel);
    miniQuichesBackButton.setGeometry(360, 440, 120, 40);
    miniQuichesBackButton.setStyleSheet("background-color: lightblue");
    miniQuichesBackButton.hide();

    QPushButton buffaloChickenMeatballsBackButton("Go Back!", &buffaloChickenMeatballsLabel);
    buffaloChickenMeatballsBackButton.setGeometry(360, 440, 120, 40);
    buffaloChickenMeatballsBackButton.setStyleSheet("background-color: lightblue");
    buffaloChickenMeatballsBackButton.hide();

    QPushButton grilledShrimpBackButton("Go Back!", &grilledShrimpLabel);
    grilledShrimpBackButton.setGeometry(360, 440, 120, 40);
    grilledShrimpBackButton.setStyleSheet("background-color: lightblue");
    grilledShrimpBackButton.hide();

    QPushButton sausageRollsBackButton("Go Back!", &sausageRollsLabel);
    sausageRollsBackButton.setGeometry(360, 440, 120, 40);
    sausageRollsBackButton.setStyleSheet("background-color: lightblue");
    sausageRollsBackButton.hide();

    QPushButton lobsterBisqueBackButton("Go Back!", &lobsterBisqueLabel);
    lobsterBisqueBackButton.setGeometry(360, 440, 120, 40);
    lobsterBisqueBackButton.setStyleSheet("background-color: lightblue");
    lobsterBisqueBackButton.hide();

    QPushButton tomatoBasilSoupBackButton("Go Back!", &tomatoBasilSoupLabel);
    tomatoBasilSoupBackButton.setGeometry(360, 440, 120, 40);
    tomatoBasilSoupBackButton.setStyleSheet("background-color: lightblue");
    tomatoBasilSoupBackButton.hide();

    QPushButton lentilSoupBackButton("Go Back!", &lentilSoupLabel);
    lentilSoupBackButton.setGeometry(360, 440, 120, 40);
    lentilSoupBackButton.setStyleSheet("background-color: lightblue");
    lentilSoupBackButton.hide();

    QPushButton chickenNoodleSoupBackButton("Go Back!", &chickenNoodleSoupLabel);
    chickenNoodleSoupBackButton.setGeometry(360, 440, 120, 40);
    chickenNoodleSoupBackButton.setStyleSheet("background-color: lightblue");
    chickenNoodleSoupBackButton.hide();

    QPushButton beefStewBackButton("Go Back!", &beefStewLabel);
    beefStewBackButton.setGeometry(360, 440, 120, 40);
    beefStewBackButton.setStyleSheet("background-color: lightblue");
    beefStewBackButton.hide();

    QPushButton butternutSquashSoupBackButton("Go Back!", &butternutSquashSoupLabel);
    butternutSquashSoupBackButton.setGeometry(360, 440, 120, 40);
    butternutSquashSoupBackButton.setStyleSheet("background-color: lightblue");
    butternutSquashSoupBackButton.hide();

    QPushButton sausageAndKaleSoupBackButton("Go Back!", &sausageAndKaleSoupLabel);
    sausageAndKaleSoupBackButton.setGeometry(360, 440, 120, 40);
    sausageAndKaleSoupBackButton.setStyleSheet("background-color: lightblue");
    sausageAndKaleSoupBackButton.hide();

    QPushButton creamyMushroomSoupBackButton("Go Back!", &creamyMushroomSoupLabel);
    creamyMushroomSoupBackButton.setGeometry(360, 440, 120, 40);
    creamyMushroomSoupBackButton.setStyleSheet("background-color: lightblue");
    creamyMushroomSoupBackButton.hide();

    QPushButton frenchOnionSoupBackButton("Go Back!", &frenchOnionSoupLabel);
    frenchOnionSoupBackButton.setGeometry(360, 440, 120, 40);
    frenchOnionSoupBackButton.setStyleSheet("background-color: lightblue");
    frenchOnionSoupBackButton.hide();

    QPushButton seafoodChowderBackButton("Go Back!", &seafoodChowderLabel);
    seafoodChowderBackButton.setGeometry(360, 440, 120, 40);
    seafoodChowderBackButton.setStyleSheet("background-color: lightblue");
    seafoodChowderBackButton.hide();

    QPushButton beefBourguignonBackButton("Go Back!", &beefBourguignonLabel);
    beefBourguignonBackButton.setGeometry(360, 440, 120, 40);
    beefBourguignonBackButton.setStyleSheet("background-color: lightblue");
    beefBourguignonBackButton.hide();

    QPushButton caesarSaladBackButton("Go Back!", &caesarSaladLabel);
    caesarSaladBackButton.setGeometry(360, 440, 120, 40);
    caesarSaladBackButton.setStyleSheet("background-color: lightblue");
    caesarSaladBackButton.hide();

    QPushButton greekSaladBackButton("Go Back!", &greekSaladLabel);
    greekSaladBackButton.setGeometry(360, 440, 120, 40);
    greekSaladBackButton.setStyleSheet("background-color: lightblue");
    greekSaladBackButton.hide();

    QPushButton capreseSaladBackButton("Go Back!", &capreseSaladLabel);
    capreseSaladBackButton.setGeometry(360, 440, 120, 40);
    capreseSaladBackButton.setStyleSheet("background-color: lightblue");
    capreseSaladBackButton.hide();

    QPushButton spinachSaladBackButton("Go Back!", &spinachSaladLabel);
    spinachSaladBackButton.setGeometry(360, 440, 120, 40);
    spinachSaladBackButton.setStyleSheet("background-color: lightblue");
    spinachSaladBackButton.hide();

    QPushButton cobbSaladBackButton("Go Back!", &cobbSaladLabel);
    cobbSaladBackButton.setGeometry(360, 440, 120, 40);
    cobbSaladBackButton.setStyleSheet("background-color: lightblue");
    cobbSaladBackButton.hide();

    QPushButton quinoaSaladBackButton("Go Back!", &quinoaSaladLabel);
    quinoaSaladBackButton.setGeometry(360, 440, 120, 40);
    quinoaSaladBackButton.setStyleSheet("background-color: lightblue");
    quinoaSaladBackButton.hide();

    QPushButton grilledChickenSaladBackButton("Go Back!", &grilledChickenSaladLabel);
    grilledChickenSaladBackButton.setGeometry(360, 440, 120, 40);
    grilledChickenSaladBackButton.setStyleSheet("background-color: lightblue");
    grilledChickenSaladBackButton.hide();

    QPushButton thaiBeefSaladBackButton("Go Back!", &thaiBeefSaladLabel);
    thaiBeefSaladBackButton.setGeometry(360, 440, 120, 40);
    thaiBeefSaladBackButton.setStyleSheet("background-color: lightblue");
    thaiBeefSaladBackButton.hide();

    QPushButton grilledPeachSaladBackButton("Go Back!", &grilledPeachSaladLabel);
    grilledPeachSaladBackButton.setGeometry(360, 440, 120, 40);
    grilledPeachSaladBackButton.setStyleSheet("background-color: lightblue");
    grilledPeachSaladBackButton.hide();

    QPushButton goatCheeseSaladBackButton("Go Back!", &goatCheeseSaladLabel);
    goatCheeseSaladBackButton.setGeometry(360, 440, 120, 40);
    goatCheeseSaladBackButton.setStyleSheet("background-color: lightblue");
    goatCheeseSaladBackButton.hide();

    QPushButton lentilChiliBackButton("Go Back!", &lentilChiliLabel);
    lentilChiliBackButton.setGeometry(360, 440, 120, 40);
    lentilChiliBackButton.setStyleSheet("background-color: lightblue");
    lentilChiliBackButton.hide();

    QPushButton stirFryBackButton("Go Back!", &stirFryLabel);
    stirFryBackButton.setGeometry(360, 440, 120, 40);
    stirFryBackButton.setStyleSheet("background-color: lightblue");
    stirFryBackButton.hide();

    QPushButton friedRiceBackButton("Go Back!", &friedRiceLabel);
    friedRiceBackButton.setGeometry(360, 440, 120, 40);
    friedRiceBackButton.setStyleSheet("background-color: lightblue");
    friedRiceBackButton.hide();

    QPushButton shepherdsPieBackButton("Go Back!", &shepherdsPieLabel);
    shepherdsPieBackButton.setGeometry(360, 440, 120, 40);
    shepherdsPieBackButton.setStyleSheet("background-color: lightblue");
    shepherdsPieBackButton.hide();

    QPushButton vegetableLasagnaBackButton("Go Back!", &vegetableLasagnaLabel);
    vegetableLasagnaBackButton.setGeometry(360, 440, 120, 40);
    vegetableLasagnaBackButton.setStyleSheet("background-color: lightblue");
    vegetableLasagnaBackButton.hide();

    QPushButton panSearedSalmonBackButton("Go Back!", &panSearedSalmonLabel);
    panSearedSalmonBackButton.setGeometry(360, 440, 120, 40);
    panSearedSalmonBackButton.setStyleSheet("background-color: lightblue");
    panSearedSalmonBackButton.hide();

    QPushButton shrimpScampiBackButton("Go Back!", &shrimpScampiLabel);
    shrimpScampiBackButton.setGeometry(360, 440, 120, 40);
    shrimpScampiBackButton.setStyleSheet("background-color: lightblue");
    shrimpScampiBackButton.hide();

    QPushButton lobsterTailsBackButton("Go Back!", &lobsterTailsLabel);
    lobsterTailsBackButton.setGeometry(360, 440, 120, 40);
    lobsterTailsBackButton.setStyleSheet("background-color: lightblue");
    lobsterTailsBackButton.hide();

    QPushButton cioppinoBackButton("Go Back!", &cioppinoLabel);
    cioppinoBackButton.setGeometry(360, 440, 120, 40);
    cioppinoBackButton.setStyleSheet("background-color: lightblue");
    cioppinoBackButton.hide();

    QPushButton mahiMahiBackButton("Go Back!", &cioppinoLabel);
    mahiMahiBackButton.setGeometry(360, 440, 120, 40);
    mahiMahiBackButton.setStyleSheet("background-color: lightblue");
    mahiMahiBackButton.hide();

    QPushButton chickenPiccataBackButton("Go Back!", &chickenPiccataLabel);
    chickenPiccataBackButton.setGeometry(360, 440, 120, 40);
    chickenPiccataBackButton.setStyleSheet("background-color: lightblue");
    chickenPiccataBackButton.hide();

    QPushButton chickenAndDumplingsBackButton("Go Back!", &chickenAndDumplingsLabel);
    chickenAndDumplingsBackButton.setGeometry(360, 440, 120, 40);
    chickenAndDumplingsBackButton.setStyleSheet("background-color: lightblue");
    chickenAndDumplingsBackButton.hide();

    QPushButton turkeyBurgersBackButton("Go Back!", &turkeyBurgersLabel);
    turkeyBurgersBackButton.setGeometry(360, 440, 120, 40);
    turkeyBurgersBackButton.setStyleSheet("background-color: lightblue");
    turkeyBurgersBackButton.hide();

    QPushButton roastChickenBackButton("Go Back!", &roastChickenLabel);
    roastChickenBackButton.setGeometry(360, 440, 120, 40);
    roastChickenBackButton.setStyleSheet("background-color: lightblue");
    roastChickenBackButton.hide();

    QPushButton marsalaBackButton("Go Back!", &marsalaLabel);
    marsalaBackButton.setGeometry(360, 440, 120, 40);
    marsalaBackButton.setStyleSheet("background-color: lightblue");
    marsalaBackButton.hide();

    QPushButton beefStroganoffBackButton("Go Back!", &beefStroganoffLabel);
    beefStroganoffBackButton.setGeometry(360, 440, 120, 40);
    beefStroganoffBackButton.setStyleSheet("background-color: lightblue");
    beefStroganoffBackButton.hide();

    QPushButton lambChopsBackButton("Go Back!", &lambChopsLabel);
    lambChopsBackButton.setGeometry(360, 440, 120, 40);
    lambChopsBackButton.setStyleSheet("background-color: lightblue");
    lambChopsBackButton.hide();

    QPushButton italianMeatballsBackButton("Go Back!", &italianMeatballsLabel);
    italianMeatballsBackButton.setGeometry(360, 440, 120, 40);
    italianMeatballsBackButton.setStyleSheet("background-color: lightblue");
    italianMeatballsBackButton.hide();

    QPushButton porkChopsBackButton("Go Back!", &porkChopsLabel);
    porkChopsBackButton.setGeometry(360, 440, 120, 40);
    porkChopsBackButton.setStyleSheet("background-color: lightblue");
    porkChopsBackButton.hide();

    QPushButton koreanBBQBackButton("Go Back!", &koreanBBQLabel);
    koreanBBQBackButton.setGeometry(360, 440, 120, 40);
    koreanBBQBackButton.setStyleSheet("background-color: lightblue");
    koreanBBQBackButton.hide();

    QPushButton spaghettiBologneseBackButton("Go Back!", &spaghettiBologneseLabel);
    spaghettiBologneseBackButton.setGeometry(360, 440, 120, 40);
    spaghettiBologneseBackButton.setStyleSheet("background-color: lightblue");
    spaghettiBologneseBackButton.hide();

    QPushButton fettuccineAlfredoBackButton("Go Back!", &fettuccineAlfredoLabel);
    fettuccineAlfredoBackButton.setGeometry(360, 440, 120, 40);
    fettuccineAlfredoBackButton.setStyleSheet("background-color: lightblue");
    fettuccineAlfredoBackButton.hide();

    QPushButton linguineBackButton("Go Back!", &linguineLabel);
    linguineBackButton.setGeometry(360, 440, 120, 40);
    linguineBackButton.setStyleSheet("background-color: lightblue");
    linguineBackButton.hide();

    QPushButton pestoPastaBackButton("Go Back!", &pestoPastaLabel);
    pestoPastaBackButton.setGeometry(360, 440, 120, 40);
    pestoPastaBackButton.setStyleSheet("background-color: lightblue");
    pestoPastaBackButton.hide();

    QPushButton rigatoniBackButton("Go Back!", &rigatoniLabel);
    rigatoniBackButton.setGeometry(360, 440, 120, 40);
    rigatoniBackButton.setStyleSheet("background-color: lightblue");
    rigatoniBackButton.hide();

    QPushButton chimichurriBackButton("Go Back!", &chimichurriLabel);
    chimichurriBackButton.setGeometry(360, 440, 120, 40);
    chimichurriBackButton.setStyleSheet("background-color: lightblue");
    chimichurriBackButton.hide();

    QPushButton honeyMustardDressingBackButton("Go Back!", &honeyMustardDressingLabel);
    honeyMustardDressingBackButton.setGeometry(360, 440, 120, 40);
    honeyMustardDressingBackButton.setStyleSheet("background-color: lightblue");
    honeyMustardDressingBackButton.hide();

    QPushButton redWineSauceBackButton("Go Back!", &redWineSauceLabel);
    redWineSauceBackButton.setGeometry(360, 440, 120, 40);
    redWineSauceBackButton.setStyleSheet("background-color: lightblue");
    redWineSauceBackButton.hide();

    QPushButton thaiPeanutSauceBackButton("Go Back!", &thaiPeanutSauceLabel);
    thaiPeanutSauceBackButton.setGeometry(360, 440, 120, 40);
    thaiPeanutSauceBackButton.setStyleSheet("background-color: lightblue");
    thaiPeanutSauceBackButton.hide();

    QPushButton caesarDressingBackButton("Go Back!", &caesarDressingLabel);
    caesarDressingBackButton.setGeometry(360, 440, 120, 40);
    caesarDressingBackButton.setStyleSheet("background-color: lightblue");
    caesarDressingBackButton.hide();

    QPushButton chocolateChipCookiesBackButton("Go Back!", &chocolateChipCookiesLabel);
    chocolateChipCookiesBackButton.setGeometry(360, 440, 120, 40);
    chocolateChipCookiesBackButton.setStyleSheet("background-color: lightblue");
    chocolateChipCookiesBackButton.hide();

    QPushButton blueberryMuffinsBackButton("Go Back!", &blueberryMuffinsLabel);
    blueberryMuffinsBackButton.setGeometry(360, 440, 120, 40);
    blueberryMuffinsBackButton.setStyleSheet("background-color: lightblue");
    blueberryMuffinsBackButton.hide();

    QPushButton cheesecakeBackButton("Go Back!", &cheesecakeLabel);
    cheesecakeBackButton.setGeometry(360, 440, 120, 40);
    cheesecakeBackButton.setStyleSheet("background-color: lightblue");
    cheesecakeBackButton.hide();

    QPushButton applePieBackButton("Go Back!", &applePieLabel);
    applePieBackButton.setGeometry(360, 440, 120, 40);
    applePieBackButton.setStyleSheet("background-color: lightblue");
    applePieBackButton.hide();

    QPushButton lemonBarsBackButton("Go Back!", &lemonBarsLabel);
    lemonBarsBackButton.setGeometry(360, 440, 120, 40);
    lemonBarsBackButton.setStyleSheet("background-color: lightblue");
    lemonBarsBackButton.hide();





    //menus and menu entries for each of the food categories





    QMenu breakfastDishesCategories("Breakfast Dishes Categories", &get_cookin);
    QAction *pancakesRecipe = breakfastDishesCategories.addAction("Pancakes");
    QAction *overnightOatsRecipe = breakfastDishesCategories.addAction("Overnight Oats with Fruits and Nuts");
    QAction *yoghurtParfaitRecipe = breakfastDishesCategories.addAction("Yoghurt Parfait with Granola and Berries");
    QAction *avacadoToastRecipe = breakfastDishesCategories.addAction("Avacado Toast with a Poached Egg");
    QAction *breakfastBurritoRecipe = breakfastDishesCategories.addAction("Breakfast Burrito with Scrambled Eggs, Bacon and Cheese");
    QAction *shakshukaRecipe = breakfastDishesCategories.addAction("Shakshuka with Crusty Bread");
    QAction *huevosRancherosRecipe = breakfastDishesCategories.addAction("Huevos Rancheros with Salsa and Guacamole");
    QAction *croissantBreakfastSandwichRecipe = breakfastDishesCategories.addAction("Croissant Breakfast Sandwich with Scrambled Eggs, Bacon and Cheese");
    QAction *eggsBenedictRecipe = breakfastDishesCategories.addAction("Eggs Benedict with Hollandaise Sauce and Smoked Salmon");
    QAction *belgianWafflesRecipe = breakfastDishesCategories.addAction("Belgian Waffles with Whipped Cream and Fresh Fruit Toppings");
    QMenu seeBreakfastDishesCategories("Click to see breakfast categories", &get_cookin);
    seeBreakfastDishesCategories.addMenu(&breakfastDishesCategories);

    QMenu appetizersAndSnacksCategories("Appetizers and Snacks", &get_cookin);
    QAction *classicGuacamoleRecipe = appetizersAndSnacksCategories.addAction("Classic Guacamole");
    QAction *bakedSweetPotatoFriesRecipe = appetizersAndSnacksCategories.addAction("Baked Sweet Potato Fries");
    QAction *capreseSkewersRecipe = appetizersAndSnacksCategories.addAction("Caprese Skewers with Balsamic Glaze");
    QAction *crispyParmesanZucchiniFriesRecipe = appetizersAndSnacksCategories.addAction("Crispy Parmesan Zucchini Fries");
    QAction *spinachAndArtichokeDipRecipe = appetizersAndSnacksCategories.addAction("Spinach and Artichoke Dip");
    QAction *miniQuichesRecipe = appetizersAndSnacksCategories.addAction("Mini Quiches with Gruyere and Bacon");
    QAction *buffaloChickenMeatballsRecipe = appetizersAndSnacksCategories.addAction("Buffalo Chicken Meatballs");
    QAction *grilledShrimpRecipe = appetizersAndSnacksCategories.addAction("Grilled Shrimp with Mango Salsa");
    QAction *sausageRollsRecipe = appetizersAndSnacksCategories.addAction("Homemade Sausage Rolls with Spicy Mustard");
    QAction *lobsterBisqueRecipe = appetizersAndSnacksCategories.addAction("Lobster Bisque Shooters with Truffle Oil");
    QMenu seeAppetizersAndSnacksCategories("Click to see appetizers and snacks", &get_cookin);
    seeAppetizersAndSnacksCategories.addMenu(&appetizersAndSnacksCategories);

    QMenu soupsAndStewsCategories("Soups and Stews", &get_cookin);
    QAction *tomatoBasilSoupRecipe = soupsAndStewsCategories.addAction("Tomato Basil Soup");
    QAction *lentilSoupRecipe = soupsAndStewsCategories.addAction("Lentil Soup");
    QAction *chickenNoodleSoupRecipe = soupsAndStewsCategories.addAction("Chicken Noodle Soup");
    QAction *beefStewRecipe = soupsAndStewsCategories.addAction("Slow Cooker Beef Stew");
    QAction *butternutSquashRecipe = soupsAndStewsCategories.addAction("Butternut Squash Soup with Cinnamon and Maple Syrup");
    QAction *sausageAndKaleSoupRecipe = soupsAndStewsCategories.addAction("Spicy Sausage and Kale Soup");
    QAction *creamyMushroomSoupRecipe = soupsAndStewsCategories.addAction("Creamy Mushroom Soup");
    QAction *frenchOnionSoupRecipe = soupsAndStewsCategories.addAction("French Onion Soup with Gruyere Croutons");
    QAction *seafoodChowderRecipe = soupsAndStewsCategories.addAction("Seafood Chowder with Bacon and Corn");
    QAction *beefBourguignonRecipe = soupsAndStewsCategories.addAction("Beef Bourguignon");
    QMenu seeSoupsAndStewsCategories("Click to see soups and stews", &get_cookin);
    seeSoupsAndStewsCategories.addMenu(&soupsAndStewsCategories);

    QMenu saladsCategories("Salads", &get_cookin);
    QAction *caesarSaladRecipe = saladsCategories.addAction("Caesar Salad");
    QAction *greekSaladRecipe = saladsCategories.addAction("Greek Salad");
    QAction *capreseSaladRecipe = saladsCategories.addAction("Caprese Salad");
    QAction *spinachSaladRecipe = saladsCategories.addAction("Spinach Salad with Bacon and Eggs");
    QAction *cobbSaladRecipe = saladsCategories.addAction("Cobb Salad");
    QAction *quinoaSaladRecipe = saladsCategories.addAction("Quinoa Salad with Roasted Vegetables and Feta");
    QAction *grilledChickenSaladRecipe = saladsCategories.addAction("Grilled Chicken Salad with Avocado and Mango");
    QAction *thaiBeefSaladRecipe = saladsCategories.addAction("Thai Beef Salad with Lime Dressing");
    QAction *grilledPeachSaladRecipe = saladsCategories.addAction("Grilled Peach Salad with Burrata and Prosciutto");
    QAction *goatCheeseSaladRecipe = saladsCategories.addAction("Warm Goat Cheese Salad with Honey Mustard Dressing");
    QMenu seeSaladsCategories("Click to see salads", &get_cookin);
    seeSaladsCategories.addMenu(&saladsCategories);

    QMenu vegetarianAndVeganMealsCategories("Vegetarian and Vegan Meals", &get_cookin);
    QAction *lentilChiliRecipe = vegetarianAndVeganMealsCategories.addAction("Vegan Lentil Chili");
    QAction *stirFryRecipe = vegetarianAndVeganMealsCategories.addAction("Veggie Stir Fry with Tofu");
    QAction *friedRiceRecipe = vegetarianAndVeganMealsCategories.addAction("Vegan Cauliflower Fried Rice");
    QAction *shepherdsPieRecipe = vegetarianAndVeganMealsCategories.addAction("Vegetarian Shepherd's Pie");
    QAction *vegetableLasagnaRecipe = vegetarianAndVeganMealsCategories.addAction("Roasted Vegetable Lasagna");
    QMenu seeVegetarianAndVeganMealsCategories("Click to see vegetarian and vegan meals", &get_cookin);
    seeVegetarianAndVeganMealsCategories.addMenu(&vegetarianAndVeganMealsCategories);

    QMenu seafoodDishesCategories("Seafood Dishes", &get_cookin);
    QAction *panSearedSalmonRecipe = seafoodDishesCategories.addAction("Pan-Seared Salmon with Lemon Butter Sauce");
    QAction *shrimpScampiRecipe = seafoodDishesCategories.addAction("Shrimp Scampi with Linguine");
    QAction *lobsterTailsRecipe = seafoodDishesCategories.addAction("Grilled Lobster Tails with Garlic Butter");
    QAction *cioppinoRecipe = seafoodDishesCategories.addAction("Cioppino (Italian Seafood Stew)");
    QAction *mahiMahiRecipe = seafoodDishesCategories.addAction("Blackened Mahi Mahi with Mango Salsa");
    QMenu seeSeafoodDishesCategories("Click to see seafood dishes", &get_cookin);
    seeSeafoodDishesCategories.addMenu(&seafoodDishesCategories);

    QMenu poultryDishesCategories("Poultry Dishes", &get_cookin);
    QAction *chickenPiccataRecipe = poultryDishesCategories.addAction("Chicken Piccata");
    QAction *chickenAndDumplingsRecipe = poultryDishesCategories.addAction("Chicken and Dumplings");
    QAction *turkeyBurgersRecipe = poultryDishesCategories.addAction("Turkey Burgers with Avocado and Caramelized Onions");
    QAction *roastChickenRecipe = poultryDishesCategories.addAction("Lemon Garlic Roast Chicken");
    QAction *marsalaRecipe = poultryDishesCategories.addAction("Chicken and Mushroom Marsala");
    QMenu seePoultryDishesCategories("Click to see poultry dishes", &get_cookin);
    seePoultryDishesCategories.addMenu(&poultryDishesCategories);

    QMenu meatDishesCategories("Meat Dishes", &get_cookin);
    QAction *beefStroganoffRecipe = meatDishesCategories.addAction("Beef Stroganoff");
    QAction *lambChopsRecipe = meatDishesCategories.addAction("Lamb Chops with Mint Chimichurri");
    QAction *italianMeatballsRecipe = meatDishesCategories.addAction("Italian Meatballs in Tomato Sauce");
    QAction *porkChopsRecipe = meatDishesCategories.addAction("Pork Chops with Apple Cider Glaze");
    QAction *koreanBBQRecipe = meatDishesCategories.addAction("Korean BBQ Short Ribs (Galbi)");
    QMenu seeMeatDishesCategories("Click to see meat dishes", &get_cookin);
    seeMeatDishesCategories.addMenu(&meatDishesCategories);

    QMenu pastaDishesCategories("Meat Dishes", &get_cookin);
    QAction *spaghettiBologneseRecipe = pastaDishesCategories.addAction("Spaghetti Bolognese");
    QAction *fettuccineAlfredoRecipe = pastaDishesCategories.addAction("Fettuccine Alfredo with Chicken and Brocolli");
    QAction *linguineRecipe = pastaDishesCategories.addAction("Linguine with Clams and White Wine Sauce");
    QAction *pestoPastaRecipe = pastaDishesCategories.addAction("Pesto Pasta with Roasted Cherry Tomatoes");
    QAction *rigatoniRecipe = pastaDishesCategories.addAction("Rigatoni with Sausage and Mushroom Ragu");
    QMenu seePastaDishesCategories("Click to see pasta dishes", &get_cookin);
    seePastaDishesCategories.addMenu(&pastaDishesCategories);

    QMenu saucesDressingsMarinadesCategories("Sauces, Dressings and Marinades", &get_cookin);
    QAction *chimichurryRecipe = saucesDressingsMarinadesCategories.addAction("Chimichurry Sauce");
    QAction *honeyMustardDressingRecipe = saucesDressingsMarinadesCategories.addAction("Honey Mustard Dressing");
    QAction *redWineSauceRecipe = saucesDressingsMarinadesCategories.addAction("Red Wine Sauce");
    QAction *thaiPeanutSauceRecipe = saucesDressingsMarinadesCategories.addAction("Thai Peanut Sauce");
    QAction *caesarDressingRecipe = saucesDressingsMarinadesCategories.addAction("Caesar Dressing");
    QMenu seeSaucesDressingsMarinadesCategories("Click to see sauces, dressings and marinades", &get_cookin);
    seeSaucesDressingsMarinadesCategories.addMenu(&saucesDressingsMarinadesCategories);

    QMenu dessertsCategories("Desserts and Baked Goods", &get_cookin);
    QAction *chocolateChipCookiesRecipe = dessertsCategories.addAction("Classic Chocolate Chip Cookies");
    QAction *blueberryMuffinsRecipe = dessertsCategories.addAction("Blueberry Muffins");
    QAction *cheesecakeRecipe = dessertsCategories.addAction("Cheesecake");
    QAction *applePieRecipe = dessertsCategories.addAction("Apple Pie");
    QAction *lemonBarsRecipe = dessertsCategories.addAction("Lemon Bars");
    QMenu seeDessertsCategories("Click to see desserts and baked goods", &get_cookin);
    seeDessertsCategories.addMenu(&dessertsCategories);





    //functions for each of the QActions





    QMenu categories("Cooking Categories", &get_cookin);
    QAction *breakfastDishes = categories.addAction("Breakfast Dishes");
    QObject::connect(breakfastDishes, &QAction::triggered, [&](){
        breakfastDishesLabel.show();
        gcBackButton.hide();
        bdBackButton.show();
        seeBreakfastDishesCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *appetizersAndSnacks = categories.addAction("Appetizers and Snacks");
    QObject::connect(appetizersAndSnacks, &QAction::triggered, [&](){
        appetizersAndSnacksLabel.show();
        gcBackButton.hide();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *soupsAndStews = categories.addAction("Soups and Stews");
    QObject::connect(soupsAndStews, &QAction::triggered, [&](){
        soupsAndStewsLabel.show();
        gcBackButton.hide();
        sasBackButton.show();
        seeSoupsAndStewsCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *salads = categories.addAction("Salads");
    QObject::connect(salads, &QAction::triggered, [&](){
        saladsLabel.show();
        gcBackButton.hide();
        sBackButton.show();
        seeSaladsCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *vegetarianAndVeganMeals = categories.addAction("Vegetarian and Vegan Meals");
    QObject::connect(vegetarianAndVeganMeals, &QAction::triggered, [&](){
        vegetarianAndVeganMealsLabel.show();
        gcBackButton.hide();
        vavmBackButton.show();
        seeVegetarianAndVeganMealsCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *seafoodDishes = categories.addAction("Seafood Dishes");
    QObject::connect(seafoodDishes, &QAction::triggered, [&](){
        seafoodDishesLabel.show();
        gcBackButton.hide();
        sdBackButton.show();
        seeSeafoodDishesCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *poultryDishes = categories.addAction("Poultry Dishes");
    QObject::connect(poultryDishes, &QAction::triggered, [&](){
        poultryDishesLabel.show();
        gcBackButton.hide();
        pdBackButton.show();
        seePoultryDishesCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *meatDishes = categories.addAction("Meat Dishes");
    QObject::connect(meatDishes, &QAction::triggered, [&](){
        meatDishesLabel.show();
        gcBackButton.hide();
        mdBackButton.show();
        seeMeatDishesCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *pastaDishes = categories.addAction("Pasta Dishes");
    QObject::connect(pastaDishes, &QAction::triggered, [&](){
        pastaDishesLabel.show();
        gcBackButton.hide();
        ptdBackButton.show();
        seePastaDishesCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *saucesDressingsMarinades = categories.addAction("Sauces, Dressings and Marinades");
    QObject::connect(saucesDressingsMarinades, &QAction::triggered, [&](){
        saucesDressingsMarinadesLabel.show();
        gcBackButton.hide();
        sdmBackButton.show();
        seeSaucesDressingsMarinadesCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    QAction *dessertsAndBakedGoods = categories.addAction("Desserts and Baked Goods");
    QObject::connect(dessertsAndBakedGoods, &QAction::triggered, [&](){
        dessertsLabel.show();
        gcBackButton.hide();
        dbgBackButton.show();
        seeDessertsCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));
    });
    categories.setStyleSheet("QMenu { background-color: lime; }");

    QMenu seeCategories("Click to see categories", &get_cookin);
    seeCategories.addMenu(&categories);
    seeCategories.setStyleSheet("QMenu { background-color: lime; }");





    //functions for each of the recipes







    QObject::connect(pancakesRecipe, &QAction::triggered, [&pancakesLabel, &pancakesTextEdit, &pancakesCheckBox, &pancakesPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &pancakesBackButton](){
        breakfastDishesLabel.hide();
        pancakesLabel.show();
        bdBackButton.hide();
        pancakesBackButton.show();
        pancakesTextEdit->show();
        pancakesCheckBox.show();
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
    QObject::connect(breakfastBurritoRecipe, &QAction::triggered, [&breakfastBurritoLabel, &breakfastBurritoTextEdit, &breakfastBurritoPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &breakfastBurritoBackButton](){
        breakfastDishesLabel.hide();
        breakfastBurritoLabel.show();
        bdBackButton.hide();
        breakfastBurritoBackButton.show();
        breakfastBurritoTextEdit->show();
    });
    QObject::connect(shakshukaRecipe, &QAction::triggered, [&shakshukaLabel, &shakshukaTextEdit, &shakshukaPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &shakshukaBackButton](){
        breakfastDishesLabel.hide();
        shakshukaLabel.show();
        bdBackButton.hide();
        shakshukaBackButton.show();
        shakshukaTextEdit->show();
    });
    QObject::connect(huevosRancherosRecipe, &QAction::triggered, [&huevosRancherosLabel, &huevosRancherosTextEdit, &huevosRancherosPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &huevosRancherosBackButton](){
        breakfastDishesLabel.hide();
        huevosRancherosLabel.show();
        bdBackButton.hide();
        huevosRancherosBackButton.show();
        huevosRancherosTextEdit->show();
    });
    QObject::connect(croissantBreakfastSandwichRecipe, &QAction::triggered, [&croissantBreakfastSandwichLabel, &croissantBreakfastSandwichTextEdit, &croissantBreakfastSandwichPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &croissantBreakfastSandwichBackButton](){
        breakfastDishesLabel.hide();
        croissantBreakfastSandwichLabel.show();
        bdBackButton.hide();
        croissantBreakfastSandwichBackButton.show();
        croissantBreakfastSandwichTextEdit->show();
    });
    QObject::connect(eggsBenedictRecipe, &QAction::triggered, [&eggsBenedictLabel, &eggsBenedictTextEdit, &eggsBenedictPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &eggsBenedictBackButton](){
        breakfastDishesLabel.hide();
        eggsBenedictLabel.show();
        bdBackButton.hide();
        eggsBenedictBackButton.show();
        eggsBenedictTextEdit->show();
    });
    QObject::connect(belgianWafflesRecipe, &QAction::triggered, [&belgianWafflesLabel, &belgianWafflesTextEdit, &belgianWafflesPixmap, &get_cookin_label, &breakfastDishesLabel, &bdBackButton, &belgianWafflesBackButton](){
        breakfastDishesLabel.hide();
        belgianWafflesLabel.show();
        bdBackButton.hide();
        belgianWafflesBackButton.show();
        belgianWafflesTextEdit->show();
    });
    QObject::connect(classicGuacamoleRecipe, &QAction::triggered, [&classicGuacamoleLabel, &classicGuacamoleTextEdit, &classicGuacamolePixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &classicGuacamoleBackButton](){
        classicGuacamoleLabel.show();
        aasBackButton.hide();
        classicGuacamoleBackButton.show();
        classicGuacamoleTextEdit->show();
    });
    QObject::connect(bakedSweetPotatoFriesRecipe, &QAction::triggered, [&bakedSweetPotatoFriesLabel, &bakedSweetPotatoFriesTextEdit, &bakedSweetPotatoFriesPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &bakedSweetPotatoFriesBackButton](){
        bakedSweetPotatoFriesLabel.show();
        aasBackButton.hide();
        bakedSweetPotatoFriesBackButton.show();
        bakedSweetPotatoFriesTextEdit->show();
    });
    QObject::connect(capreseSkewersRecipe, &QAction::triggered, [&capreseSkewersLabel, capreseSkewersTextEdit, &capreseSkewersPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &capreseSkewersBackButton](){
        capreseSkewersLabel.show();
        aasBackButton.hide();
        capreseSkewersBackButton.show();
        capreseSkewersTextEdit->show();
    });
    QObject::connect(crispyParmesanZucchiniFriesRecipe, &QAction::triggered, [&crispyParmesanZucchiniFriesLabel, &crispyParmesanZucchiniFriesTextEdit, &crispyParmesanZucchiniFriesPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &crispyParmesanZucchiniFriesBackButton](){
        crispyParmesanZucchiniFriesLabel.show();
        aasBackButton.hide();
        crispyParmesanZucchiniFriesBackButton.show();
        crispyParmesanZucchiniFriesTextEdit->show();
    });
    QObject::connect(spinachAndArtichokeDipRecipe, &QAction::triggered, [&spinachAndArtichokeDipLabel, &spinachAndArtichokeDipTextEdit, &spinachAndArtichokeDipPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &spinachAndArtichokeDipBackButton](){
        spinachAndArtichokeDipLabel.show();
        aasBackButton.hide();
        spinachAndArtichokeDipBackButton.show();
        spinachAndArtichokeDipTextEdit->show();
    });
    QObject::connect(miniQuichesRecipe, &QAction::triggered, [&miniQuichesLabel, &miniQuichesTextEdit, &miniQuichesPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &miniQuichesBackButton](){
        miniQuichesLabel.show();
        aasBackButton.hide();
        miniQuichesBackButton.show();
        miniQuichesTextEdit->show();
    });
    QObject::connect(buffaloChickenMeatballsRecipe, &QAction::triggered, [&buffaloChickenMeatballsLabel, &buffaloChickenMeatballsTextEdit, &buffaloChickenMeatballsPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &buffaloChickenMeatballsBackButton](){
        buffaloChickenMeatballsLabel.show();
        aasBackButton.hide();
        buffaloChickenMeatballsBackButton.show();
        buffaloChickenMeatballsTextEdit->show();
    });
    QObject::connect(grilledShrimpRecipe, &QAction::triggered, [&grilledShrimpLabel, &grilledShrimpTextEdit, &grilledShrimpPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &grilledShrimpBackButton](){
        grilledShrimpLabel.show();
        aasBackButton.hide();
        grilledShrimpBackButton.show();
        grilledShrimpTextEdit->show();
    });
    QObject::connect(sausageRollsRecipe, &QAction::triggered, [&sausageRollsLabel, &sausageRollsTextEdit, &sausageRollsPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &sausageRollsBackButton](){
        sausageRollsLabel.show();
        aasBackButton.hide();
        sausageRollsBackButton.show();
        sausageRollsTextEdit->show();
    });
    QObject::connect(lobsterBisqueRecipe, &QAction::triggered, [&lobsterBisqueLabel, &lobsterBisqueTextEdit, &lobsterBisquePixmap, &get_cookin_label, &appetizersAndSnacksLabel, &aasBackButton, &lobsterBisqueBackButton](){
        lobsterBisqueLabel.show();
        aasBackButton.hide();
        lobsterBisqueBackButton.show();
        lobsterBisqueTextEdit->show();
    });
    QObject::connect(tomatoBasilSoupRecipe, &QAction::triggered, [&tomatoBasilSoupLabel, &tomatoBasilSoupTextEdit, &tomatoBasilSoupPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &tomatoBasilSoupBackButton](){
        tomatoBasilSoupLabel.show();
        sasBackButton.hide();
        tomatoBasilSoupBackButton.show();
        tomatoBasilSoupTextEdit->show();
    });
    QObject::connect(lentilSoupRecipe, &QAction::triggered, [&lentilSoupLabel, &lentilSoupTextEdit, &lentilSoupPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &lentilSoupBackButton](){
        lentilSoupLabel.show();
        sasBackButton.hide();
        lentilSoupBackButton.show();
        lentilSoupTextEdit->show();
    });
    QObject::connect(chickenNoodleSoupRecipe, &QAction::triggered, [&chickenNoodleSoupLabel, &chickenNoodleSoupTextEdit, &chickenNoodleSoupPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &chickenNoodleSoupBackButton](){
        chickenNoodleSoupLabel.show();
        sasBackButton.hide();
        chickenNoodleSoupBackButton.show();
        chickenNoodleSoupTextEdit->show();
    });
    QObject::connect(beefStewRecipe, &QAction::triggered, [&beefStewLabel, &beefStewTextEdit, &beefStewPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &beefStewBackButton](){
        beefStewLabel.show();
        sasBackButton.hide();
        beefStewBackButton.show();
        beefStewTextEdit->show();
    });
    QObject::connect(butternutSquashRecipe, &QAction::triggered, [&butternutSquashSoupLabel, &butternutSquashSoupTextEdit, &butternutSquashSoupPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &butternutSquashSoupBackButton](){
        butternutSquashSoupLabel.show();
        sasBackButton.hide();
        butternutSquashSoupBackButton.show();
        butternutSquashSoupTextEdit->show();
    });
    QObject::connect(sausageAndKaleSoupRecipe, &QAction::triggered, [&sausageAndKaleSoupLabel, &sausageAndKaleSoupTextEdit, &sausageAndKaleSoupPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &sausageAndKaleSoupBackButton](){
        sausageAndKaleSoupLabel.show();
        sasBackButton.hide();
        sausageAndKaleSoupBackButton.show();
        sausageAndKaleSoupTextEdit->show();
    });
    QObject::connect(creamyMushroomSoupRecipe, &QAction::triggered, [&creamyMushroomSoupLabel, &creamyMushroomSoupTextEdit, &creamyMushroomSoupPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &creamyMushroomSoupBackButton](){
        creamyMushroomSoupLabel.show();
        sasBackButton.hide();
        creamyMushroomSoupBackButton.show();
        creamyMushroomSoupTextEdit->show();
    });
    QObject::connect(frenchOnionSoupRecipe, &QAction::triggered, [&frenchOnionSoupLabel, &frenchOnionSoupTextEdit, &frenchOnionSoupPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &frenchOnionSoupBackButton](){
        frenchOnionSoupLabel.show();
        sasBackButton.hide();
        frenchOnionSoupBackButton.show();
        frenchOnionSoupTextEdit->show();
    });
    QObject::connect(seafoodChowderRecipe, &QAction::triggered, [&seafoodChowderLabel, &seafoodChowderTextEdit, &seafoodChowderPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &seafoodChowderBackButton](){
        seafoodChowderLabel.show();
        sasBackButton.hide();
        seafoodChowderBackButton.show();
        seafoodChowderTextEdit->show();
    });
    QObject::connect(beefBourguignonRecipe, &QAction::triggered, [&beefBourguignonLabel, &beefBourguignonTextEdit, &beefBourguignonPixmap, &get_cookin_label, &appetizersAndSnacksLabel, &sasBackButton, &beefBourguignonBackButton](){
        beefBourguignonLabel.show();
        sasBackButton.hide();
        beefBourguignonBackButton.show();
        beefBourguignonTextEdit->show();
    });
    QObject::connect(caesarSaladRecipe, &QAction::triggered, [&caesarSaladLabel, &caesarSaladTextEdit, &caesarSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &caesarSaladBackButton](){
        caesarSaladLabel.show();
        sBackButton.hide();
        caesarSaladBackButton.show();
        caesarSaladTextEdit->show();
    });
    QObject::connect(greekSaladRecipe, &QAction::triggered, [&greekSaladLabel, &greekSaladTextEdit, &greekSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &greekSaladBackButton](){
        greekSaladLabel.show();
        sBackButton.hide();
        greekSaladBackButton.show();
        greekSaladTextEdit->show();
    });
    QObject::connect(capreseSaladRecipe, &QAction::triggered, [&capreseSaladLabel, &capreseSaladTextEdit, &capreseSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &capreseSaladBackButton](){
        capreseSaladLabel.show();
        sBackButton.hide();
        capreseSaladBackButton.show();
        capreseSaladTextEdit->show();
    });
    QObject::connect(spinachSaladRecipe, &QAction::triggered, [&spinachSaladLabel, &spinachSaladTextEdit, &spinachSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &spinachSaladBackButton](){
        spinachSaladLabel.show();
        sBackButton.hide();
        spinachSaladBackButton.show();
        spinachSaladTextEdit->show();
    });
    QObject::connect(cobbSaladRecipe, &QAction::triggered, [&cobbSaladLabel, &cobbSaladTextEdit, &cobbSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &cobbSaladBackButton](){
        cobbSaladLabel.show();
        sBackButton.hide();
        cobbSaladBackButton.show();
        cobbSaladTextEdit->show();
    });
    QObject::connect(quinoaSaladRecipe, &QAction::triggered, [&quinoaSaladLabel, &quinoaSaladTextEdit, &quinoaSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &quinoaSaladBackButton](){
        quinoaSaladLabel.show();
        sBackButton.hide();
        quinoaSaladBackButton.show();
        quinoaSaladTextEdit->show();
    });
    QObject::connect(grilledChickenSaladRecipe, &QAction::triggered, [&grilledChickenSaladLabel, &grilledChickenSaladTextEdit, &grilledChickenSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &grilledChickenSaladBackButton](){
        grilledChickenSaladLabel.show();
        sBackButton.hide();
        grilledChickenSaladBackButton.show();
        grilledChickenSaladTextEdit->show();
    });
    QObject::connect(thaiBeefSaladRecipe, &QAction::triggered, [&thaiBeefSaladLabel, &thaiBeefSaladTextEdit, &thaiBeefSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &thaiBeefSaladBackButton](){
        thaiBeefSaladLabel.show();
        sBackButton.hide();
        thaiBeefSaladBackButton.show();
        thaiBeefSaladTextEdit->show();
    });
    QObject::connect(grilledPeachSaladRecipe, &QAction::triggered, [&grilledPeachSaladLabel, &grilledPeachSaladTextEdit, &grilledPeachSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &grilledPeachSaladBackButton](){
        grilledPeachSaladLabel.show();
        sBackButton.hide();
        grilledPeachSaladBackButton.show();
        grilledPeachSaladTextEdit->show();
    });
    QObject::connect(goatCheeseSaladRecipe, &QAction::triggered, [&goatCheeseSaladLabel, &goatCheeseSaladTextEdit, &goatCheeseSaladPixmap, &get_cookin_label, &saladsLabel, &sBackButton, &goatCheeseSaladBackButton](){
        goatCheeseSaladLabel.show();
        sBackButton.hide();
        goatCheeseSaladBackButton.show();
        goatCheeseSaladTextEdit->show();
    });
    QObject::connect(lentilChiliRecipe, &QAction::triggered, [&lentilChiliLabel, &lentilChiliTextEdit, &lentilChiliPixmap, &get_cookin_label, &vegetarianAndVeganMealsLabel, &vavmBackButton, &lentilChiliBackButton](){
        lentilChiliLabel.show();
        vavmBackButton.hide();
        lentilChiliBackButton.show();
        lentilChiliTextEdit->show();
    });
    QObject::connect(stirFryRecipe, &QAction::triggered, [&stirFryLabel, &stirFryTextEdit, &stirFryPixmap, &get_cookin_label, &vegetarianAndVeganMealsLabel, &vavmBackButton, &stirFryBackButton](){
        stirFryLabel.show();
        vavmBackButton.hide();
        stirFryBackButton.show();
        stirFryTextEdit->show();
    });
    QObject::connect(friedRiceRecipe, &QAction::triggered, [&friedRiceLabel, &friedRiceTextEdit, &friedRicePixmap, &get_cookin_label, &vegetarianAndVeganMealsLabel, &vavmBackButton, &friedRiceBackButton](){
        friedRiceLabel.show();
        vavmBackButton.hide();
        friedRiceBackButton.show();
        friedRiceTextEdit->show();
    });
    QObject::connect(shepherdsPieRecipe, &QAction::triggered, [&shepherdsPieLabel, &shepherdsPieTextEdit, &shepherdsPiePixmap, &get_cookin_label, &vegetarianAndVeganMealsLabel, &vavmBackButton, &shepherdsPieBackButton](){
        shepherdsPieLabel.show();
        vavmBackButton.hide();
        shepherdsPieBackButton.show();
        shepherdsPieTextEdit->show();
    });
    QObject::connect(vegetableLasagnaRecipe, &QAction::triggered, [&vegetableLasagnaLabel, &vegetableLasagnaTextEdit, &vegetableLasagnaPixmap, &get_cookin_label, &vegetarianAndVeganMealsLabel, &vavmBackButton, &vegetableLasagnaBackButton](){
        vegetableLasagnaLabel.show();
        vavmBackButton.hide();
        vegetableLasagnaBackButton.show();
        vegetableLasagnaTextEdit->show();
    });
    QObject::connect(panSearedSalmonRecipe, &QAction::triggered, [&panSearedSalmonLabel, &panSearedSalmonTextEdit, &panSearedSalmonPixmap, &get_cookin_label, &seafoodDishesLabel, &sdBackButton, &panSearedSalmonBackButton](){
        panSearedSalmonLabel.show();
        sdBackButton.hide();
        panSearedSalmonBackButton.show();
        panSearedSalmonTextEdit->show();
    });
    QObject::connect(shrimpScampiRecipe, &QAction::triggered, [&shrimpScampiLabel, &shrimpScampiTextEdit, &shrimpScampiPixmap, &get_cookin_label, &seafoodDishesLabel, &sdBackButton, &shrimpScampiBackButton](){
        shrimpScampiLabel.show();
        sdBackButton.hide();
        shrimpScampiBackButton.show();
        shrimpScampiTextEdit->show();
    });
    QObject::connect(lobsterTailsRecipe, &QAction::triggered, [&lobsterTailsLabel, &lobsterTailsTextEdit, &lobsterTailsPixmap, &get_cookin_label, &seafoodDishesLabel, &sdBackButton, &lobsterTailsBackButton](){
        lobsterTailsLabel.show();
        sdBackButton.hide();
        lobsterTailsBackButton.show();
        lobsterTailsTextEdit->show();
    });
    QObject::connect(cioppinoRecipe, &QAction::triggered, [&cioppinoLabel, &cioppinoTextEdit, &lobsterTailsPixmap, &get_cookin_label, &seafoodDishesLabel, &sdBackButton, &cioppinoBackButton](){
        cioppinoLabel.show();
        sdBackButton.hide();
        cioppinoBackButton.show();
        cioppinoTextEdit->show();
    });
    QObject::connect(mahiMahiRecipe, &QAction::triggered, [&mahiMahiLabel, &mahiMahiTextEdit, &mahiMahiPixmap, &get_cookin_label, &seafoodDishesLabel, &sdBackButton, &mahiMahiBackButton](){
        mahiMahiLabel.show();
        sdBackButton.hide();
        mahiMahiBackButton.show();
        mahiMahiTextEdit->show();
    });
    QObject::connect(chickenPiccataRecipe, &QAction::triggered, [&chickenPiccataLabel, &chickenPiccataTextEdit, &chickenPiccataPixmap, &get_cookin_label, &poultryDishesLabel, &pdBackButton, &chickenPiccataBackButton](){
        chickenPiccataLabel.show();
        pdBackButton.hide();
        chickenPiccataBackButton.show();
        chickenPiccataTextEdit->show();
    });
    QObject::connect(chickenAndDumplingsRecipe, &QAction::triggered, [&chickenAndDumplingsLabel, &chickenAndDumplingsTextEdit, &chickenAndDumplingsPixmap, &get_cookin_label, &poultryDishesLabel, &pdBackButton, &chickenAndDumplingsBackButton](){
        chickenAndDumplingsLabel.show();
        pdBackButton.hide();
        chickenAndDumplingsBackButton.show();
        chickenAndDumplingsTextEdit->show();
    });
    QObject::connect(turkeyBurgersRecipe, &QAction::triggered, [&turkeyBurgersLabel, &turkeyBurgersTextEdit, &turkeyBurgersPixmap, &get_cookin_label, &poultryDishesLabel, &pdBackButton, &turkeyBurgersBackButton](){
        turkeyBurgersLabel.show();
        pdBackButton.hide();
        turkeyBurgersBackButton.show();
        turkeyBurgersTextEdit->show();
    });
    QObject::connect(roastChickenRecipe, &QAction::triggered, [&roastChickenLabel, &roastChickenTextEdit, &roastChickenPixmap, &get_cookin_label, &poultryDishesLabel, &pdBackButton, &roastChickenBackButton](){
        roastChickenLabel.show();
        pdBackButton.hide();
        roastChickenBackButton.show();
        roastChickenTextEdit->show();
    });
    QObject::connect(marsalaRecipe, &QAction::triggered, [&marsalaLabel, &marsalaTextEdit, &marsalaPixmap, &get_cookin_label, &poultryDishesLabel, &pdBackButton, &marsalaBackButton](){
        marsalaLabel.show();
        pdBackButton.hide();
        marsalaBackButton.show();
        marsalaTextEdit->show();
    });
    QObject::connect(beefStroganoffRecipe, &QAction::triggered, [&beefStroganoffLabel, &beefStroganoffTextEdit, &beefStroganoffPixmap, &get_cookin_label, &meatDishesLabel, &mdBackButton, &beefStroganoffBackButton](){
        beefStroganoffLabel.show();
        mdBackButton.hide();
        beefStroganoffBackButton.show();
        beefStroganoffTextEdit->show();
    });
    QObject::connect(lambChopsRecipe, &QAction::triggered, [&lambChopsLabel, &lambChopsTextEdit, &lambChopsPixmap, &get_cookin_label, &meatDishesLabel, &mdBackButton, &lambChopsBackButton](){
        lambChopsLabel.show();
        mdBackButton.hide();
        lambChopsBackButton.show();
        lambChopsTextEdit->show();
    });
    QObject::connect(italianMeatballsRecipe, &QAction::triggered, [&italianMeatballsLabel, &italianMeatballsTextEdit, &italianMeatballsPixmap, &get_cookin_label, &meatDishesLabel, &mdBackButton, &italianMeatballsBackButton](){
        italianMeatballsLabel.show();
        mdBackButton.hide();
        italianMeatballsBackButton.show();
        italianMeatballsTextEdit->show();
    });
    QObject::connect(porkChopsRecipe, &QAction::triggered, [&porkChopsLabel, &porkChopsTextEdit, &porkChopsPixmap, &get_cookin_label, &meatDishesLabel, &mdBackButton, &porkChopsBackButton](){
        porkChopsLabel.show();
        mdBackButton.hide();
        porkChopsBackButton.show();
        porkChopsTextEdit->show();
    });
    QObject::connect(koreanBBQRecipe, &QAction::triggered, [&koreanBBQLabel, &koreanBBQTextEdit, &koreanBBQPixmap, &get_cookin_label, &meatDishesLabel, &mdBackButton, &koreanBBQBackButton](){
        koreanBBQLabel.show();
        mdBackButton.hide();
        koreanBBQBackButton.show();
        koreanBBQTextEdit->show();
    });
    QObject::connect(spaghettiBologneseRecipe, &QAction::triggered, [&spaghettiBologneseLabel, &spaghettiBologneseTextEdit, &spaghettiBolognesePixmap, &get_cookin_label, &pastaDishesLabel, &ptdBackButton, &spaghettiBologneseBackButton](){
        spaghettiBologneseLabel.show();
        ptdBackButton.hide();
        spaghettiBologneseBackButton.show();
        spaghettiBologneseTextEdit->show();
    });
    QObject::connect(fettuccineAlfredoRecipe, &QAction::triggered, [&fettuccineAlfredoLabel, &fettuccineAlfredoTextEdit, &fettuccineAlfredoPixmap, &get_cookin_label, &pastaDishesLabel, &ptdBackButton, &fettuccineAlfredoBackButton](){
        fettuccineAlfredoLabel.show();
        ptdBackButton.hide();
        fettuccineAlfredoBackButton.show();
        fettuccineAlfredoTextEdit->show();
    });
    QObject::connect(linguineRecipe, &QAction::triggered, [&linguineLabel, &linguineTextEdit, &linguinePixmap, &get_cookin_label, &pastaDishesLabel, &ptdBackButton, &linguineBackButton](){
        linguineLabel.show();
        ptdBackButton.hide();
        linguineBackButton.show();
        linguineTextEdit->show();
    });
    QObject::connect(pestoPastaRecipe, &QAction::triggered, [&pestoPastaLabel, &pestoPastaTextEdit, &pestoPastaPixmap, &get_cookin_label, &pastaDishesLabel, &ptdBackButton, &pestoPastaBackButton](){
        pestoPastaLabel.show();
        ptdBackButton.hide();
        pestoPastaBackButton.show();
        pestoPastaTextEdit->show();
    });
    QObject::connect(rigatoniRecipe, &QAction::triggered, [&rigatoniLabel, &rigatoniTextEdit, &rigatoniPixmap, &get_cookin_label, &pastaDishesLabel, &ptdBackButton, &rigatoniBackButton](){
        rigatoniLabel.show();
        ptdBackButton.hide();
        rigatoniBackButton.show();
        rigatoniTextEdit->show();
    });
    QObject::connect(chimichurryRecipe, &QAction::triggered, [&chimichurriLabel, &chimichurriTextEdit, &chimichurriPixmap, &get_cookin_label, &saucesDressingsMarinadesLabel, &sdmBackButton, &chimichurriBackButton](){
        chimichurriLabel.show();
        sdmBackButton.hide();
        chimichurriBackButton.show();
        chimichurriTextEdit->show();
    });
    QObject::connect(honeyMustardDressingRecipe, &QAction::triggered, [&honeyMustardDressingLabel, &honeyMustardDressingTextEdit, &honeyMustardDressingPixmap, &get_cookin_label, &saucesDressingsMarinadesLabel, &sdmBackButton, &honeyMustardDressingBackButton](){
        honeyMustardDressingLabel.show();
        sdmBackButton.hide();
        honeyMustardDressingBackButton.show();
        honeyMustardDressingTextEdit->show();
    });
    QObject::connect(redWineSauceRecipe, &QAction::triggered, [&redWineSauceLabel, &redWineSauceTextEdit, &redWineSaucePixmap, &get_cookin_label, &saucesDressingsMarinadesLabel, &sdmBackButton, &redWineSauceBackButton](){
        redWineSauceLabel.show();
        sdmBackButton.hide();
        redWineSauceBackButton.show();
        redWineSauceTextEdit->show();
    });
    QObject::connect(thaiPeanutSauceRecipe, &QAction::triggered, [&thaiPeanutSauceLabel, &thaiPeanutSauceTextEdit, &thaiPeanutSaucePixmap, &get_cookin_label, &saucesDressingsMarinadesLabel, &sdmBackButton, &thaiPeanutSauceBackButton](){
        thaiPeanutSauceLabel.show();
        sdmBackButton.hide();
        thaiPeanutSauceBackButton.show();
        thaiPeanutSauceTextEdit->show();
    });
    QObject::connect(caesarDressingRecipe, &QAction::triggered, [&caesarDressingLabel, &caesarDressingTextEdit, &caesarDressingPixmap, &get_cookin_label, &saucesDressingsMarinadesLabel, &sdmBackButton, &caesarDressingBackButton](){
        caesarDressingLabel.show();
        sdmBackButton.hide();
        caesarDressingBackButton.show();
        caesarDressingTextEdit->show();
    });
    QObject::connect(chocolateChipCookiesRecipe, &QAction::triggered, [&chocolateChipCookiesLabel, &chocolateChipCookiesTextEdit, &chocolateChipCookiesPixmap, &get_cookin_label, &dessertsLabel, &dbgBackButton, &chocolateChipCookiesBackButton](){
        chocolateChipCookiesLabel.show();
        dbgBackButton.hide();
        chocolateChipCookiesBackButton.show();
        chocolateChipCookiesTextEdit->show();
    });
    QObject::connect(blueberryMuffinsRecipe, &QAction::triggered, [&blueberryMuffinsLabel, &blueberryMuffinsTextEdit, &blueberryMuffinsPixmap, &get_cookin_label, &dessertsLabel, &dbgBackButton, &blueberryMuffinsBackButton](){
        blueberryMuffinsLabel.show();
        dbgBackButton.hide();
        blueberryMuffinsBackButton.show();
        blueberryMuffinsTextEdit->show();
    });
    QObject::connect(cheesecakeRecipe, &QAction::triggered, [&cheesecakeLabel, &cheesecakeTextEdit, &cheesecakePixmap, &get_cookin_label, &dessertsLabel, &dbgBackButton, &cheesecakeBackButton](){
        cheesecakeLabel.show();
        dbgBackButton.hide();
        cheesecakeBackButton.show();
        cheesecakeTextEdit->show();
    });
    QObject::connect(applePieRecipe, &QAction::triggered, [&applePieLabel, &applePieTextEdit, &applePiePixmap, &get_cookin_label, &dessertsLabel, &dbgBackButton, &applePieBackButton](){
        applePieLabel.show();
        dbgBackButton.hide();
        applePieBackButton.show();
        applePieTextEdit->show();
    });
    QObject::connect(lemonBarsRecipe, &QAction::triggered, [&lemonBarsLabel, &lemonBarsTextEdit, &lemonBarsPixmap, &get_cookin_label, &dessertsLabel, &dbgBackButton, &lemonBarsBackButton](){
        lemonBarsLabel.show();
        dbgBackButton.hide();
        lemonBarsBackButton.show();
        lemonBarsTextEdit->show();
    });





    //functions for each of the food category back buttons






    QObject::connect(&bdBackButton, &QPushButton::clicked, [&get_cookin_label, &breakfastDishesLabel, &gcBackButton, &bdBackButton, &seeCategories]() {
        breakfastDishesLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        bdBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&aasBackButton, &QPushButton::clicked, [&get_cookin_label, &appetizersAndSnacksLabel, &gcBackButton, &aasBackButton, &seeCategories]() {
        appetizersAndSnacksLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        aasBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&sasBackButton, &QPushButton::clicked, [&get_cookin_label, &soupsAndStewsLabel, &gcBackButton, &sasBackButton, &seeCategories]() {
        soupsAndStewsLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        sasBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&sBackButton, &QPushButton::clicked, [&get_cookin_label, &saladsLabel, &gcBackButton, &sBackButton, &seeCategories]() {
        saladsLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        sBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&sdBackButton, &QPushButton::clicked, [&get_cookin_label, &seafoodDishesLabel, &gcBackButton, &sdBackButton, &seeCategories]() {
        seafoodDishesLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        sdBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&vavmBackButton, &QPushButton::clicked, [&get_cookin_label, &vegetarianAndVeganMealsLabel, &gcBackButton, &vavmBackButton, &seeCategories]() {
        vegetarianAndVeganMealsLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        vavmBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&pdBackButton, &QPushButton::clicked, [&get_cookin_label, &poultryDishesLabel, &gcBackButton, &pdBackButton, &seeCategories]() {
        poultryDishesLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        pdBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&mdBackButton, &QPushButton::clicked, [&get_cookin_label, &meatDishesLabel, &gcBackButton, &mdBackButton, &seeCategories]() {
        meatDishesLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        mdBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&ptdBackButton, &QPushButton::clicked, [&get_cookin_label, &pastaDishesLabel, &gcBackButton, &ptdBackButton, &seeCategories]() {
        pastaDishesLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        ptdBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&sdmBackButton, &QPushButton::clicked, [&get_cookin_label, &saucesDressingsMarinadesLabel, &gcBackButton, &sdmBackButton, &seeCategories]() {
        saucesDressingsMarinadesLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        sdmBackButton.hide();
        seeCategories.show();
    });
    QObject::connect(&dbgBackButton, &QPushButton::clicked, [&get_cookin_label, &dessertsLabel, &gcBackButton, &dbgBackButton, &seeCategories]() {
        dessertsLabel.hide();
        get_cookin_label.show();
        gcBackButton.show();
        dbgBackButton.hide();
        seeCategories.show();
    });








    //functions for each of the recipe back buttons








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
    QObject::connect(&breakfastBurritoBackButton, &QPushButton::clicked, [&breakfastBurritoLabel, &breakfastBurritoTextEdit, &breakfastDishesLabel, &breakfastBurritoBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        breakfastBurritoLabel.hide();
        breakfastBurritoBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        breakfastBurritoTextEdit->hide();
    });
    QObject::connect(&shakshukaBackButton, &QPushButton::clicked, [&shakshukaLabel, &shakshukaTextEdit, &breakfastDishesLabel, &shakshukaBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        shakshukaLabel.hide();
        shakshukaBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        shakshukaTextEdit->hide();
    });
    QObject::connect(&huevosRancherosBackButton, &QPushButton::clicked, [&huevosRancherosLabel, &huevosRancherosTextEdit, &breakfastDishesLabel, &huevosRancherosBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        huevosRancherosLabel.hide();
        huevosRancherosBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        huevosRancherosTextEdit->hide();
    });
    QObject::connect(&croissantBreakfastSandwichBackButton, &QPushButton::clicked, [&croissantBreakfastSandwichLabel, &croissantBreakfastSandwichTextEdit, &breakfastDishesLabel, &croissantBreakfastSandwichBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        croissantBreakfastSandwichLabel.hide();
        croissantBreakfastSandwichBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        croissantBreakfastSandwichTextEdit->hide();
    });
    QObject::connect(&eggsBenedictBackButton, &QPushButton::clicked, [&eggsBenedictLabel, &eggsBenedictTextEdit, &breakfastDishesLabel, &eggsBenedictBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        eggsBenedictLabel.hide();
        eggsBenedictBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        eggsBenedictTextEdit->hide();
    });
    QObject::connect(&belgianWafflesBackButton, &QPushButton::clicked, [&belgianWafflesLabel, &belgianWafflesTextEdit, &breakfastDishesLabel, &belgianWafflesBackButton, &bdBackButton, &seeBreakfastDishesCategories]() {
        belgianWafflesLabel.hide();
        belgianWafflesBackButton.hide();
        breakfastDishesLabel.show();
        bdBackButton.show();
        seeBreakfastDishesCategories.show();
        belgianWafflesTextEdit->hide();
    });
    QObject::connect(&classicGuacamoleBackButton, &QPushButton::clicked, [&classicGuacamoleLabel, &classicGuacamoleTextEdit, &appetizersAndSnacksLabel, &classicGuacamoleBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        classicGuacamoleLabel.hide();
        classicGuacamoleBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        classicGuacamoleTextEdit->hide();
    });
    QObject::connect(&bakedSweetPotatoFriesBackButton, &QPushButton::clicked, [&bakedSweetPotatoFriesLabel, &bakedSweetPotatoFriesTextEdit, &appetizersAndSnacksLabel, &bakedSweetPotatoFriesBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        bakedSweetPotatoFriesLabel.hide();
        bakedSweetPotatoFriesBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        bakedSweetPotatoFriesTextEdit->hide();
    });
    QObject::connect(&capreseSkewersBackButton, &QPushButton::clicked, [&capreseSkewersLabel, &capreseSkewersTextEdit, &appetizersAndSnacksLabel, &capreseSkewersBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        capreseSkewersLabel.hide();
        capreseSkewersBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        capreseSkewersTextEdit->hide();
    });
    QObject::connect(&crispyParmesanZucchiniFriesBackButton, &QPushButton::clicked, [&crispyParmesanZucchiniFriesLabel, &crispyParmesanZucchiniFriesTextEdit, &appetizersAndSnacksLabel, &crispyParmesanZucchiniFriesBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        crispyParmesanZucchiniFriesLabel.hide();
        crispyParmesanZucchiniFriesBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        crispyParmesanZucchiniFriesTextEdit->hide();
    });
    QObject::connect(&spinachAndArtichokeDipBackButton, &QPushButton::clicked, [&spinachAndArtichokeDipLabel, &spinachAndArtichokeDipTextEdit, &appetizersAndSnacksLabel, &spinachAndArtichokeDipBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        spinachAndArtichokeDipLabel.hide();
        spinachAndArtichokeDipBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        spinachAndArtichokeDipTextEdit->hide();
    });
    QObject::connect(&miniQuichesBackButton, &QPushButton::clicked, [&miniQuichesLabel, &miniQuichesTextEdit, &appetizersAndSnacksLabel, &miniQuichesBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        miniQuichesLabel.hide();
        miniQuichesBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        miniQuichesTextEdit->hide();
    });
    QObject::connect(&buffaloChickenMeatballsBackButton, &QPushButton::clicked, [&buffaloChickenMeatballsLabel, &buffaloChickenMeatballsTextEdit, &appetizersAndSnacksLabel, &buffaloChickenMeatballsBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        buffaloChickenMeatballsLabel.hide();
        buffaloChickenMeatballsBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        buffaloChickenMeatballsTextEdit->hide();
    });
    QObject::connect(&grilledShrimpBackButton, &QPushButton::clicked, [&grilledShrimpLabel, &grilledShrimpTextEdit, &appetizersAndSnacksLabel, &grilledShrimpBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        grilledShrimpLabel.hide();
        grilledShrimpBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        grilledShrimpTextEdit->hide();
    });
    QObject::connect(&sausageRollsBackButton, &QPushButton::clicked, [&sausageRollsLabel, &sausageRollsTextEdit, &appetizersAndSnacksLabel, &sausageRollsBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        sausageRollsLabel.hide();
        sausageRollsBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        sausageRollsTextEdit->hide();
    });
    QObject::connect(&lobsterBisqueBackButton, &QPushButton::clicked, [&lobsterBisqueLabel, &lobsterBisqueTextEdit, &appetizersAndSnacksLabel, &lobsterBisqueBackButton, &aasBackButton, &seeAppetizersAndSnacksCategories]() {
        lobsterBisqueLabel.hide();
        lobsterBisqueBackButton.hide();
        appetizersAndSnacksLabel.show();
        aasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        lobsterBisqueTextEdit->hide();
    });
    QObject::connect(&tomatoBasilSoupBackButton, &QPushButton::clicked, [&tomatoBasilSoupLabel, &tomatoBasilSoupTextEdit, &soupsAndStewsLabel, &tomatoBasilSoupBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        tomatoBasilSoupLabel.hide();
        tomatoBasilSoupBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        tomatoBasilSoupTextEdit->hide();
    });
    QObject::connect(&lentilSoupBackButton, &QPushButton::clicked, [&lentilSoupLabel, &lentilSoupTextEdit, &soupsAndStewsLabel, &lentilSoupBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        lentilSoupLabel.hide();
        lentilSoupBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        lentilSoupTextEdit->hide();
    });
    QObject::connect(&chickenNoodleSoupBackButton, &QPushButton::clicked, [&chickenNoodleSoupLabel, &chickenNoodleSoupTextEdit, &soupsAndStewsLabel, &chickenNoodleSoupBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        chickenNoodleSoupLabel.hide();
        chickenNoodleSoupBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        chickenNoodleSoupTextEdit->hide();
    });
    QObject::connect(&beefStewBackButton, &QPushButton::clicked, [&beefStewLabel, &beefStewTextEdit, &soupsAndStewsLabel, &beefStewBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        beefStewLabel.hide();
        beefStewBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        beefStewTextEdit->hide();
    });
    QObject::connect(&butternutSquashSoupBackButton, &QPushButton::clicked, [&butternutSquashSoupLabel, &butternutSquashSoupTextEdit, &soupsAndStewsLabel, &butternutSquashSoupBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        butternutSquashSoupLabel.hide();
        butternutSquashSoupBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        butternutSquashSoupTextEdit->hide();
    });
    QObject::connect(&sausageAndKaleSoupBackButton, &QPushButton::clicked, [&sausageAndKaleSoupLabel, &sausageAndKaleSoupTextEdit, &soupsAndStewsLabel, &sausageAndKaleSoupBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        sausageAndKaleSoupLabel.hide();
        sausageAndKaleSoupBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        sausageAndKaleSoupTextEdit->hide();
    });
    QObject::connect(&creamyMushroomSoupBackButton, &QPushButton::clicked, [&creamyMushroomSoupLabel, &creamyMushroomSoupTextEdit, &soupsAndStewsLabel, &creamyMushroomSoupBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        creamyMushroomSoupLabel.hide();
        creamyMushroomSoupBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        creamyMushroomSoupTextEdit->hide();
    });
    QObject::connect(&frenchOnionSoupBackButton, &QPushButton::clicked, [&frenchOnionSoupLabel, &frenchOnionSoupTextEdit, &soupsAndStewsLabel, &frenchOnionSoupBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        frenchOnionSoupLabel.hide();
        frenchOnionSoupBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        frenchOnionSoupTextEdit->hide();
    });
    QObject::connect(&seafoodChowderBackButton, &QPushButton::clicked, [&seafoodChowderLabel, &seafoodChowderTextEdit, &soupsAndStewsLabel, &seafoodChowderBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        seafoodChowderLabel.hide();
        seafoodChowderBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        seafoodChowderTextEdit->hide();
    });
    QObject::connect(&beefBourguignonBackButton, &QPushButton::clicked, [&beefBourguignonLabel, &beefBourguignonTextEdit, &soupsAndStewsLabel, &beefBourguignonBackButton, &sasBackButton, &seeSoupsAndStewsCategories]() {
        beefBourguignonLabel.hide();
        beefBourguignonBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeSoupsAndStewsCategories.show();
        beefBourguignonTextEdit->hide();
    });
    QObject::connect(&caesarSaladBackButton, &QPushButton::clicked, [&caesarSaladLabel, &caesarSaladTextEdit, &saladsLabel, &caesarSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        caesarSaladLabel.hide();
        caesarSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        caesarSaladTextEdit->hide();
    });
    QObject::connect(&greekSaladBackButton, &QPushButton::clicked, [&greekSaladLabel, &greekSaladTextEdit, &saladsLabel, &greekSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        greekSaladLabel.hide();
        greekSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        greekSaladTextEdit->hide();
    });
    QObject::connect(&capreseSaladBackButton, &QPushButton::clicked, [&capreseSaladLabel, &capreseSaladTextEdit, &saladsLabel, &capreseSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        capreseSaladLabel.hide();
        capreseSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        capreseSaladTextEdit->hide();
    });
    QObject::connect(&spinachSaladBackButton, &QPushButton::clicked, [&spinachSaladLabel, &spinachSaladTextEdit, &saladsLabel, &spinachSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        spinachSaladLabel.hide();
        spinachSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        spinachSaladTextEdit->hide();
    });
    QObject::connect(&cobbSaladBackButton, &QPushButton::clicked, [&cobbSaladLabel, &cobbSaladTextEdit, &saladsLabel, &cobbSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        cobbSaladLabel.hide();
        cobbSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        cobbSaladTextEdit->hide();
    });
    QObject::connect(&quinoaSaladBackButton, &QPushButton::clicked, [&quinoaSaladLabel, &quinoaSaladTextEdit, &saladsLabel, &quinoaSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        quinoaSaladLabel.hide();
        quinoaSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        quinoaSaladTextEdit->hide();
    });
    QObject::connect(&grilledChickenSaladBackButton, &QPushButton::clicked, [&grilledChickenSaladLabel, &grilledChickenSaladTextEdit, &saladsLabel, &grilledChickenSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        grilledChickenSaladLabel.hide();
        grilledChickenSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        grilledChickenSaladTextEdit->hide();
    });
    QObject::connect(&thaiBeefSaladBackButton, &QPushButton::clicked, [&thaiBeefSaladLabel, &thaiBeefSaladTextEdit, &saladsLabel, &thaiBeefSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        thaiBeefSaladLabel.hide();
        thaiBeefSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        thaiBeefSaladTextEdit->hide();
    });
    QObject::connect(&grilledPeachSaladBackButton, &QPushButton::clicked, [&grilledPeachSaladLabel, &grilledPeachSaladTextEdit, &saladsLabel, &grilledPeachSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        grilledPeachSaladLabel.hide();
        grilledPeachSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        grilledPeachSaladTextEdit->hide();
    });
    QObject::connect(&goatCheeseSaladBackButton, &QPushButton::clicked, [&goatCheeseSaladLabel, &goatCheeseSaladTextEdit, &saladsLabel, &goatCheeseSaladBackButton, &sBackButton, &seeSaladsCategories]() {
        goatCheeseSaladLabel.hide();
        goatCheeseSaladBackButton.hide();
        saladsLabel.show();
        sBackButton.show();
        seeSaladsCategories.show();
        goatCheeseSaladTextEdit->hide();
    });
    QObject::connect(&lentilChiliBackButton, &QPushButton::clicked, [&lentilChiliLabel, &lentilChiliTextEdit, &vegetarianAndVeganMealsLabel, &lentilChiliBackButton, &vavmBackButton, &seeVegetarianAndVeganMealsCategories]() {
        lentilChiliLabel.hide();
        lentilChiliBackButton.hide();
        vegetarianAndVeganMealsLabel.show();
        vavmBackButton.show();
        seeVegetarianAndVeganMealsCategories.show();
        lentilChiliTextEdit->hide();
    });
    QObject::connect(&stirFryBackButton, &QPushButton::clicked, [&stirFryLabel, &stirFryTextEdit, &vegetarianAndVeganMealsLabel, &stirFryBackButton, &vavmBackButton, &seeVegetarianAndVeganMealsCategories]() {
        stirFryLabel.hide();
        stirFryBackButton.hide();
        vegetarianAndVeganMealsLabel.show();
        vavmBackButton.show();
        seeVegetarianAndVeganMealsCategories.show();
        stirFryTextEdit->hide();
    });
    QObject::connect(&friedRiceBackButton, &QPushButton::clicked, [&friedRiceLabel, &friedRiceTextEdit, &vegetarianAndVeganMealsLabel, &friedRiceBackButton, &vavmBackButton, &seeVegetarianAndVeganMealsCategories]() {
        friedRiceLabel.hide();
        friedRiceBackButton.hide();
        vegetarianAndVeganMealsLabel.show();
        vavmBackButton.show();
        seeVegetarianAndVeganMealsCategories.show();
        friedRiceTextEdit->hide();
    });
    QObject::connect(&shepherdsPieBackButton, &QPushButton::clicked, [&shepherdsPieLabel, &shepherdsPieTextEdit, &vegetarianAndVeganMealsLabel, &shepherdsPieBackButton, &vavmBackButton, &seeVegetarianAndVeganMealsCategories]() {
        shepherdsPieLabel.hide();
        shepherdsPieBackButton.hide();
        vegetarianAndVeganMealsLabel.show();
        vavmBackButton.show();
        seeVegetarianAndVeganMealsCategories.show();
        shepherdsPieTextEdit->hide();
    });
    QObject::connect(&vegetableLasagnaBackButton, &QPushButton::clicked, [&vegetableLasagnaLabel, &vegetableLasagnaTextEdit, &vegetarianAndVeganMealsLabel, &vegetableLasagnaBackButton, &vavmBackButton, &seeVegetarianAndVeganMealsCategories]() {
        vegetableLasagnaLabel.hide();
        vegetableLasagnaBackButton.hide();
        vegetarianAndVeganMealsLabel.show();
        vavmBackButton.show();
        seeVegetarianAndVeganMealsCategories.show();
        vegetableLasagnaTextEdit->hide();
    });
    QObject::connect(&panSearedSalmonBackButton, &QPushButton::clicked, [&panSearedSalmonLabel, &panSearedSalmonTextEdit, &seafoodDishesLabel, &panSearedSalmonBackButton, &sdBackButton, &seeSeafoodDishesCategories]() {
        panSearedSalmonLabel.hide();
        panSearedSalmonBackButton.hide();
        seafoodDishesLabel.show();
        sdBackButton.show();
        seeSeafoodDishesCategories.show();
        panSearedSalmonTextEdit->hide();
    });
    QObject::connect(&shrimpScampiBackButton, &QPushButton::clicked, [&shrimpScampiLabel, &shrimpScampiTextEdit, &seafoodDishesLabel, &shrimpScampiBackButton, &sdBackButton, &seeSeafoodDishesCategories]() {
        shrimpScampiLabel.hide();
        shrimpScampiBackButton.hide();
        seafoodDishesLabel.show();
        sdBackButton.show();
        seeSeafoodDishesCategories.show();
        shrimpScampiTextEdit->hide();
    });
    QObject::connect(&lobsterTailsBackButton, &QPushButton::clicked, [&lobsterTailsLabel, &lobsterTailsTextEdit, &seafoodDishesLabel, &lobsterTailsBackButton, &sdBackButton, &seeSeafoodDishesCategories]() {
        lobsterTailsLabel.hide();
        lobsterTailsBackButton.hide();
        seafoodDishesLabel.show();
        sdBackButton.show();
        seeSeafoodDishesCategories.show();
        lobsterTailsTextEdit->hide();
    });
    QObject::connect(&cioppinoBackButton, &QPushButton::clicked, [&cioppinoLabel, &cioppinoTextEdit, &seafoodDishesLabel, &cioppinoBackButton, &sdBackButton, &seeSeafoodDishesCategories]() {
        cioppinoLabel.hide();
        cioppinoBackButton.hide();
        seafoodDishesLabel.show();
        sdBackButton.show();
        seeSeafoodDishesCategories.show();
        cioppinoTextEdit->hide();
    });
    QObject::connect(&mahiMahiBackButton, &QPushButton::clicked, [&mahiMahiLabel, &mahiMahiTextEdit, &seafoodDishesLabel, &mahiMahiBackButton, &sdBackButton, &seeSeafoodDishesCategories]() {
        mahiMahiLabel.hide();
        mahiMahiBackButton.hide();
        seafoodDishesLabel.show();
        sdBackButton.show();
        seeSeafoodDishesCategories.show();
        mahiMahiTextEdit->hide();
    });
    QObject::connect(&chickenPiccataBackButton, &QPushButton::clicked, [&chickenPiccataLabel, &chickenPiccataTextEdit, &poultryDishesLabel, &chickenPiccataBackButton, &pdBackButton, &seePoultryDishesCategories]() {
        chickenPiccataLabel.hide();
        chickenPiccataBackButton.hide();
        poultryDishesLabel.show();
        pdBackButton.show();
        seePoultryDishesCategories.show();
        chickenPiccataTextEdit->hide();
    });
    QObject::connect(&chickenAndDumplingsBackButton, &QPushButton::clicked, [&chickenAndDumplingsLabel, &chickenAndDumplingsTextEdit, &poultryDishesLabel, &chickenAndDumplingsBackButton, &pdBackButton, &seePoultryDishesCategories]() {
        chickenAndDumplingsLabel.hide();
        chickenAndDumplingsBackButton.hide();
        poultryDishesLabel.show();
        pdBackButton.show();
        seePoultryDishesCategories.show();
        chickenAndDumplingsTextEdit->hide();
    });
    QObject::connect(&turkeyBurgersBackButton, &QPushButton::clicked, [&turkeyBurgersLabel, &turkeyBurgersTextEdit, &poultryDishesLabel, &turkeyBurgersBackButton, &pdBackButton, &seePoultryDishesCategories]() {
        turkeyBurgersLabel.hide();
        turkeyBurgersBackButton.hide();
        poultryDishesLabel.show();
        pdBackButton.show();
        seePoultryDishesCategories.show();
        turkeyBurgersTextEdit->hide();
    });
    QObject::connect(&roastChickenBackButton, &QPushButton::clicked, [&roastChickenLabel, &roastChickenTextEdit, &poultryDishesLabel, &roastChickenBackButton, &pdBackButton, &seePoultryDishesCategories]() {
        roastChickenLabel.hide();
        roastChickenBackButton.hide();
        poultryDishesLabel.show();
        pdBackButton.show();
        seePoultryDishesCategories.show();
        roastChickenTextEdit->hide();
    });
    QObject::connect(&marsalaBackButton, &QPushButton::clicked, [&marsalaLabel, &marsalaTextEdit, &poultryDishesLabel, &marsalaBackButton, &pdBackButton, &seePoultryDishesCategories]() {
        marsalaLabel.hide();
        marsalaBackButton.hide();
        poultryDishesLabel.show();
        pdBackButton.show();
        seePoultryDishesCategories.show();
        marsalaTextEdit->hide();
    });
    QObject::connect(&beefStroganoffBackButton, &QPushButton::clicked, [&beefStroganoffLabel, &beefStroganoffTextEdit, &meatDishesLabel, &beefStroganoffBackButton, &mdBackButton, &seeMeatDishesCategories]() {
        beefStroganoffLabel.hide();
        beefStroganoffBackButton.hide();
        meatDishesLabel.show();
        mdBackButton.show();
        seeMeatDishesCategories.show();
        beefStroganoffTextEdit->hide();
    });
    QObject::connect(&lambChopsBackButton, &QPushButton::clicked, [&lambChopsLabel, &lambChopsTextEdit, &meatDishesLabel, &lambChopsBackButton, &mdBackButton, &seeMeatDishesCategories]() {
        lambChopsLabel.hide();
        lambChopsBackButton.hide();
        meatDishesLabel.show();
        mdBackButton.show();
        seeMeatDishesCategories.show();
        lambChopsTextEdit->hide();
    });
    QObject::connect(&italianMeatballsBackButton, &QPushButton::clicked, [&italianMeatballsLabel, &italianMeatballsTextEdit, &meatDishesLabel, &italianMeatballsBackButton, &mdBackButton, &seeMeatDishesCategories]() {
        italianMeatballsLabel.hide();
        italianMeatballsBackButton.hide();
        meatDishesLabel.show();
        mdBackButton.show();
        seeMeatDishesCategories.show();
        italianMeatballsTextEdit->hide();
    });
    QObject::connect(&porkChopsBackButton, &QPushButton::clicked, [&porkChopsLabel, &porkChopsTextEdit, &meatDishesLabel, &porkChopsBackButton, &mdBackButton, &seeMeatDishesCategories]() {
        porkChopsLabel.hide();
        porkChopsBackButton.hide();
        meatDishesLabel.show();
        mdBackButton.show();
        seeMeatDishesCategories.show();
        porkChopsTextEdit->hide();
    });
    QObject::connect(&koreanBBQBackButton, &QPushButton::clicked, [&koreanBBQLabel, &koreanBBQTextEdit, &meatDishesLabel, &koreanBBQBackButton, &mdBackButton, &seeMeatDishesCategories]() {
        koreanBBQLabel.hide();
        koreanBBQBackButton.hide();
        meatDishesLabel.show();
        mdBackButton.show();
        seeMeatDishesCategories.show();
        koreanBBQTextEdit->hide();
    });
    QObject::connect(&spaghettiBologneseBackButton, &QPushButton::clicked, [&spaghettiBologneseLabel, &spaghettiBologneseTextEdit, &pastaDishesLabel, &spaghettiBologneseBackButton, &ptdBackButton, &seePastaDishesCategories]() {
        spaghettiBologneseLabel.hide();
        spaghettiBologneseBackButton.hide();
        pastaDishesLabel.show();
        ptdBackButton.show();
        seePastaDishesCategories.show();
        spaghettiBologneseTextEdit->hide();
    });
    QObject::connect(&fettuccineAlfredoBackButton, &QPushButton::clicked, [&fettuccineAlfredoLabel, &fettuccineAlfredoTextEdit, &pastaDishesLabel, &fettuccineAlfredoBackButton, &ptdBackButton, &seePastaDishesCategories]() {
        fettuccineAlfredoLabel.hide();
        fettuccineAlfredoBackButton.hide();
        pastaDishesLabel.show();
        ptdBackButton.show();
        seePastaDishesCategories.show();
        fettuccineAlfredoTextEdit->hide();
    });
    QObject::connect(&linguineBackButton, &QPushButton::clicked, [&linguineLabel, &linguineTextEdit, &pastaDishesLabel, &linguineBackButton, &ptdBackButton, &seePastaDishesCategories]() {
        linguineLabel.hide();
        linguineBackButton.hide();
        pastaDishesLabel.show();
        ptdBackButton.show();
        seePastaDishesCategories.show();
        linguineTextEdit->hide();
    });
    QObject::connect(&pestoPastaBackButton, &QPushButton::clicked, [&pestoPastaLabel, &pestoPastaTextEdit, &pastaDishesLabel, &pestoPastaBackButton, &ptdBackButton, &seePastaDishesCategories]() {
        pestoPastaLabel.hide();
        pestoPastaBackButton.hide();
        pastaDishesLabel.show();
        ptdBackButton.show();
        seePastaDishesCategories.show();
        pestoPastaTextEdit->hide();
    });
    QObject::connect(&rigatoniBackButton, &QPushButton::clicked, [&rigatoniLabel, &rigatoniTextEdit, &pastaDishesLabel, &rigatoniBackButton, &ptdBackButton, &seePastaDishesCategories]() {
        rigatoniLabel.hide();
        rigatoniBackButton.hide();
        pastaDishesLabel.show();
        ptdBackButton.show();
        seePastaDishesCategories.show();
        rigatoniTextEdit->hide();
    });
    QObject::connect(&chimichurriBackButton, &QPushButton::clicked, [&chimichurriLabel, &chimichurriTextEdit, &saucesDressingsMarinadesLabel, &chimichurriBackButton, &sdmBackButton, &seeSaucesDressingsMarinadesCategories]() {
        chimichurriLabel.hide();
        chimichurriBackButton.hide();
        saucesDressingsMarinadesLabel.show();
        sdmBackButton.show();
        seeSaucesDressingsMarinadesCategories.show();
        chimichurriTextEdit->hide();
    });
    QObject::connect(&honeyMustardDressingBackButton, &QPushButton::clicked, [&honeyMustardDressingLabel, &honeyMustardDressingTextEdit, &saucesDressingsMarinadesLabel, &honeyMustardDressingBackButton, &sdmBackButton, &seeSaucesDressingsMarinadesCategories]() {
        honeyMustardDressingLabel.hide();
        honeyMustardDressingBackButton.hide();
        saucesDressingsMarinadesLabel.show();
        sdmBackButton.show();
        seeSaucesDressingsMarinadesCategories.show();
        honeyMustardDressingTextEdit->hide();
    });
    QObject::connect(&redWineSauceBackButton, &QPushButton::clicked, [&redWineSauceLabel, &redWineSauceTextEdit, &saucesDressingsMarinadesLabel, &redWineSauceBackButton, &sdmBackButton, &seeSaucesDressingsMarinadesCategories]() {
        redWineSauceLabel.hide();
        redWineSauceBackButton.hide();
        saucesDressingsMarinadesLabel.show();
        sdmBackButton.show();
        seeSaucesDressingsMarinadesCategories.show();
        redWineSauceTextEdit->hide();
    });
    QObject::connect(&thaiPeanutSauceBackButton, &QPushButton::clicked, [&thaiPeanutSauceLabel, &thaiPeanutSauceTextEdit, &saucesDressingsMarinadesLabel, &thaiPeanutSauceBackButton, &sdmBackButton, &seeSaucesDressingsMarinadesCategories]() {
        thaiPeanutSauceLabel.hide();
        thaiPeanutSauceBackButton.hide();
        saucesDressingsMarinadesLabel.show();
        sdmBackButton.show();
        seeSaucesDressingsMarinadesCategories.show();
        thaiPeanutSauceTextEdit->hide();
    });
    QObject::connect(&caesarDressingBackButton, &QPushButton::clicked, [&caesarDressingLabel, &caesarDressingTextEdit, &saucesDressingsMarinadesLabel, &caesarDressingBackButton, &sdmBackButton, &seeSaucesDressingsMarinadesCategories]() {
        caesarDressingLabel.hide();
        caesarDressingBackButton.hide();
        saucesDressingsMarinadesLabel.show();
        sdmBackButton.show();
        seeSaucesDressingsMarinadesCategories.show();
        caesarDressingTextEdit->hide();
    });
    QObject::connect(&chocolateChipCookiesBackButton, &QPushButton::clicked, [&chocolateChipCookiesLabel, &chocolateChipCookiesTextEdit, &dessertsLabel, &chocolateChipCookiesBackButton, &dbgBackButton, &seeDessertsCategories]() {
        chocolateChipCookiesLabel.hide();
        chocolateChipCookiesBackButton.hide();
        dessertsLabel.show();
        dbgBackButton.show();
        seeDessertsCategories.show();
        chocolateChipCookiesTextEdit->hide();
    });
    QObject::connect(&blueberryMuffinsBackButton, &QPushButton::clicked, [&blueberryMuffinsLabel, &blueberryMuffinsTextEdit, &dessertsLabel, &blueberryMuffinsBackButton, &dbgBackButton, &seeDessertsCategories]() {
        blueberryMuffinsLabel.hide();
        blueberryMuffinsBackButton.hide();
        dessertsLabel.show();
        dbgBackButton.show();
        seeDessertsCategories.show();
        blueberryMuffinsTextEdit->hide();
    });
    QObject::connect(&cheesecakeBackButton, &QPushButton::clicked, [&cheesecakeLabel, &cheesecakeTextEdit, &dessertsLabel, &cheesecakeBackButton, &dbgBackButton, &seeDessertsCategories]() {
        cheesecakeLabel.hide();
        cheesecakeBackButton.hide();
        dessertsLabel.show();
        dbgBackButton.show();
        seeDessertsCategories.show();
        cheesecakeTextEdit->hide();
    });
    QObject::connect(&applePieBackButton, &QPushButton::clicked, [&applePieLabel, &applePieTextEdit, &dessertsLabel, &applePieBackButton, &dbgBackButton, &seeDessertsCategories]() {
        applePieLabel.hide();
        applePieBackButton.hide();
        dessertsLabel.show();
        dbgBackButton.show();
        seeDessertsCategories.show();
        applePieTextEdit->hide();
    });
    QObject::connect(&lemonBarsBackButton, &QPushButton::clicked, [&lemonBarsLabel, &lemonBarsTextEdit, &dessertsLabel, &lemonBarsBackButton, &dbgBackButton, &seeDessertsCategories]() {
        lemonBarsLabel.hide();
        lemonBarsBackButton.hide();
        dessertsLabel.show();
        dbgBackButton.show();
        seeDessertsCategories.show();
        lemonBarsTextEdit->hide();
    });

















    QFont font("Tahoma", 16, QFont::Bold);

    get_cookin.setFont(font);
    quit.setFont(font);
    credits.setFont(font);
    myFavourites.setFont(font);
    cBackButton.setFont(font);
    gcBackButton.setFont(font);
    mfBackButton.setFont(font);

    get_cookin.setStyleSheet("background-color: pink");
    quit.setStyleSheet("background-color: red");
    credits.setStyleSheet("background-color: orange");
    myFavourites.setStyleSheet("background-color: yellow");

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

    QMenu myFavouritesMenu("My Favourites", &myFavourites);
    QMenu seeMyFavourites("Click to see myFavourites", &myFavourites);
    seeMyFavourites.addMenu(&myFavouritesMenu);

    QObject::connect(&get_cookin, &QPushButton::clicked, [&get_cookin_label, &get_cookin, &quit, &credits, &myFavourites, &label, &gcBackButton, &seeCategories]() {
        gcBackButton.hide();
        get_cookin_label.show();
        get_cookin.hide();
        quit.hide();
        credits.hide();
        myFavourites.hide();

        gcBackButton.show();
        gcBackButton.raise();

        seeCategories.exec(get_cookin.mapToGlobal(QPoint(-20, -150)));

        QObject::connect(&gcBackButton, &QPushButton::clicked, [&label, &get_cookin_label, &get_cookin, &quit, &credits, &myFavourites, &gcBackButton]() {
            get_cookin_label.hide();
            label.show();
            get_cookin.show();
            quit.show();
            credits.show();
            myFavourites.show();
            gcBackButton.hide();
        });
    });


    QObject::connect(&credits, &QPushButton::clicked, [&credits_label, &get_cookin, &quit, &credits, &myFavourites, &label, &cBackButton]() {
        credits_label.show();
        get_cookin.hide();
        quit.hide();
        credits.hide();
        myFavourites.hide();

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

        QObject::connect(&cBackButton, &QPushButton::clicked, [&label, &credits_label, &get_cookin, &quit, &credits, &myFavourites, &cBackButton]() {
            credits_label.hide();
            label.show();
            get_cookin.show();
            quit.show();
            credits.show();
            myFavourites.show();
            cBackButton.hide();
        });
    });

    QObject::connect(&myFavourites, &QPushButton::clicked, [&myFavourites_label, &seeMyFavourites, &get_cookin, &quit, &credits, &myFavourites, &label, &mfBackButton]() {
        myFavourites_label.show();
        get_cookin.hide();
        quit.hide();
        credits.hide();
        myFavourites.hide();

        QVBoxLayout* layout = new QVBoxLayout(&myFavourites_label);
        QLabel* textLabel = new QLabel("My Favourites!", &myFavourites_label);
        textLabel->setWordWrap(true);
        textLabel->setAlignment(Qt::AlignTop | Qt::AlignHCenter);
        layout->addWidget(textLabel);
        QFont font("Tahoma", 26);
        textLabel->setFont(font);

        textLabel->show();


        mfBackButton.show();
        mfBackButton.raise();

        seeMyFavourites.exec(myFavourites.mapToGlobal(QPoint(-20, -200)));

        QObject::connect(&mfBackButton, &QPushButton::clicked, [&label, &myFavourites_label, &get_cookin, &quit, &credits, &myFavourites, &mfBackButton]() {
            myFavourites_label.hide();
            label.show();
            get_cookin.show();
            quit.show();
            credits.show();
            myFavourites.show();
            mfBackButton.hide();
        });
    });




    return a.exec();
}
