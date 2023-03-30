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

    QLabel appetizersAndSnacksLabel(&get_cookin_label);
    QPixmap appetizersAndSnacksPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\appetizers_and_snacks.png");
    appetizersAndSnacksLabel.setPixmap(appetizersAndSnacksPixmap);
    appetizersAndSnacksLabel.hide();

    QLabel soupsAndStewsLabel(&get_cookin_label);
    QPixmap soupsAndStewsPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\images\\soups_and_stews.png");
    soupsAndStewsLabel.setPixmap(soupsAndStewsPixmap);
    soupsAndStewsLabel.hide();

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
    QMenu seeSoupsAndStewsCategories("Click to see soups and stews", &get_cookin);
    seeSoupsAndStewsCategories.addMenu(&soupsAndStewsCategories);

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
    QObject::connect(&tomatoBasilSoupBackButton, &QPushButton::clicked, [&tomatoBasilSoupLabel, &tomatoBasilSoupTextEdit, &soupsAndStewsLabel, &tomatoBasilSoupBackButton, &sasBackButton, &seeAppetizersAndSnacksCategories]() {
        tomatoBasilSoupLabel.hide();
        tomatoBasilSoupBackButton.hide();
        soupsAndStewsLabel.show();
        sasBackButton.show();
        seeAppetizersAndSnacksCategories.show();
        tomatoBasilSoupTextEdit->hide();
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
