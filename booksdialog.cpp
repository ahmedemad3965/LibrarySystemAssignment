#include "booksdialog.h"
#include "ui_booksdialog.h"

BooksDialog::BooksDialog(QWidget *parent, User *user) :
    QDialog(parent),
    ui(new Ui::BooksDialog),
    user(user)    
{
    ui->setupUi(this);
    ui->IDLabel->setText(QString::number(user->getId()));
    ui->balanceLabel->setText(QString::number(user->getBalance()));

    books.append("Java");
    books.append("c++");
    books.append("Algorithms");
    books.append("Calculas 3");

    for (int i = 0; i < books.length(); i++) {
        ui->booksCombo->addItem(books[i]);
    }

    prices.append(120.00);
    prices.append(110.00);
    prices.append(250.00);
    prices.append(90.00);

    on_booksCombo_currentIndexChanged(0);
}

BooksDialog::~BooksDialog()
{
    delete ui;
}

void BooksDialog::on_booksCombo_currentIndexChanged(int index)
{
    if(prices.length() > index) {
        ui->priceLabel->setText(QString::number(prices[index]));
    }
}


void BooksDialog::on_pushButton_5_clicked()
{
    QString new_balance = ui->textEdit->toPlainText();
    user->setBalance(QString(new_balance).toDouble());
    ui->balanceLabel->setText(QString::number(user->getBalance()));
}

