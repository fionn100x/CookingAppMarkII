#ifndef CREDITSPAGE_H
#define CREDITSPAGE_H

#include <QWidget>
#include <QPixmap>
#include <QLabel>
#include <QPushButton>

class CreditsPage : public QWidget
{
    Q_OBJECT

public:
    CreditsPage(QLabel* label, QWidget *parent = nullptr);

private:
    QLabel* creditsLabel;
    QPixmap* creditsPixmap;
    QPushButton* backButton;
};

#endif // CREDITSPAGE_H
