#include "booksdialog.h"
#include "ui_booksdialog.h"

BooksDialog::BooksDialog(QWidget *parent, User *user) :
    QDialog(parent),
    ui(new Ui::BooksDialog),
    user(user)    
{
    ui->setupUi(this);
}

BooksDialog::~BooksDialog()
{
    delete ui;
}
