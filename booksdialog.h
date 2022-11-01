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

private slots:
    void on_booksCombo_currentIndexChanged(int index);

private:
    Ui::BooksDialog *ui;
    User *user;
    // make list for avaliable books
    QList<QString> books;
    QList<double> prices;
};

#endif // BOOKSDIALOG_H
