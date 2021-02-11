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
    person.firstName = ui->input_firstNmae->text();
    person.firstName = ui->input_lastName->text();
    person.dateOfBirth = ui->input_dateOfBirth->date();
    person.address.country = ui->input_addressCountry->text();
    person.address.region = ui->input_addressRegion->text();
    person.address.city = ui->input_addressCity->text();
    person.address.street = ui->input_addressStreet->text();
    person.address.house = ui->input_addressHouse->text();
    persons.push_back(person);

    ui->statusbar->showMessage("Данные успешно сохранены");
}
