#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_clear_clicked()
{
    ui->input_firstNmae->clear();
    ui->input_lastName->clear();
    ui->input_dateOfBirth->setDate(QDate::currentDate());
    ui->input_addressCountry->clear();
    ui->input_addressRegion->clear();
    ui->input_addressCity->clear();
    ui->input_addressStreet->clear();
    ui->input_addressHouse->clear();
}

void MainWindow::on_button_save_clicked()
{
    QString firstName = ui->input_firstNmae->text();
    QString lastName = ui->input_lastName->text();
    QDate dateOfBirth = ui->input_dateOfBirth->date();
    QString country = ui->input_addressCountry->text();
    QString region = ui->input_addressRegion->text();
    QString city = ui->input_addressCity->text();
    QString street = ui->input_addressStreet->text();
    QString house = ui->input_addressHouse->text();


    Address address(country, region, city, street, house);
    QVector<Phone> phones;
    Person person(firstName, lastName, dateOfBirth, address, phones);

    ui->statusbar->showMessage("Данные успешно сохранены");
}
