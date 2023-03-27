#include "creditspage.h"
#include <QVBoxLayout>

CreditsPage::CreditsPage(QLabel* label, QWidget *parent)
    : QWidget(parent)
{
    // Set up the pixmap and label for the credits page
    creditsPixmap = new QPixmap("C:\\Users\\fionn\\OneDrive\\Desktop\\CookingAppMarkII\\credits.gif");
    creditsLabel = new QLabel(this);
    creditsLabel->setPixmap(creditsPixmap->scaled(pixmap.size()));

    // Set up the back button
    backButton = new QPushButton("Back", this);
    connect(backButton, &QPushButton::clicked, this, &CreditsPage::hide);

    // Set the layout for the credits page
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(creditsLabel);
    layout->addWidget(backButton);
}
