#ifndef BOOKSDIALOG_H
#define BOOKSDIALOG_H

#include <QDialog>
#include "User.h"

namespace Ui {
class BooksDialog;
}

class BooksDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BooksDialog(QWidget *parent = nullptr , User *user = nullptr);
    ~BooksDialog();

private:
    Ui::BooksDialog *ui;
    User *user;

};

#endif // BOOKSDIALOG_H
