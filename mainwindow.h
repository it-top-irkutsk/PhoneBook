#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDate>
#include <QVector>

#include "person.h"
#include "phone.h"
#include "address.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<Person> Persons;
    Person person;

private slots:
    void on_button_clear_clicked();

    void on_button_save_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
