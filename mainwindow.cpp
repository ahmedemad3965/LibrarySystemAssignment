#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->errorLabel->setVisible(false);
    ui->passwordField->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_signInButton_clicked()
{
    // sign in user
    QString username = ui->usernameField->text();
    QString password = ui->passwordField->text();
    
    if (usernames.contains(username)) {
        int index = usernames.indexOf(username);
        if (passwords[index] == password) {
            QMessageBox::information(this, "Success", "You have successfully signed in!");
        } else {
            QMessageBox::warning(this, "Error", "Incorrect password!");
        }
    } else {
        ui->errorLabel->setVisible(true);
        ui->errorLabel->setText("User does not exist");
    }

}

