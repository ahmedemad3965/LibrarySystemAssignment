#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList usernames = {"user1", "user2", "user3"};
    QStringList passwords = {"pass1", "pass2", "pass3"};

private slots:
    void on_signInButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
