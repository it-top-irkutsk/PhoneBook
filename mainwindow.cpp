#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QtGui>
#include <QString>
#include <QSqlQuery>
#include <QtSql/QSqlDatabase>


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
    ui->input_firstName->clear();
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
    update_phonebook();
}

void MainWindow::on_button_import_clicked()
{
    //import_phonebook("persons.csv", "phones.csv");
    import_phonebook();
    update_ui();
}

void MainWindow::on_button_export_clicked()
{
   export_phonebook("persons.csv", "phones.csv");
}

bool MainWindow::connect_db()
{
    return db.open();
}

void MainWindow::import_phonebook()
{
    QSqlDatabase dbb;
    dbb = QSqlDatabase::addDatabase("QSQLITE");
    dbb.setDatabaseName("phonebook.sqlite");

    if (dbb.open())
    {
        QSqlQuery query_person;
        query_person.exec("SELECT id, first_name, last_name, date_of_birth, post_index, country, region, city, street, house FROM table_person");
        //query_person.exec("SELECT first_name FROM table_person");
        int s = query_person.size();
        while (query_person.next())
        {
            Person person;
            Phone phone;
            Address address;

            QString id = query_person.value(0).toString();
            person.firstName = query_person.value(1).toString();
            person.lastName = query_person.value(2).toString();
            person.dateOfBirth = query_person.value(3).toDate();

            address.post_index = query_person.value(4).toInt();
            address.country = query_person.value(5).toString();
            address.region = query_person.value(6).toString();
            address.city = query_person.value(7).toString();
            address.street = query_person.value(8).toString();
            address.house = query_person.value(9).toString();
            person.address = address;

            QSqlQuery query_phone;
            query_phone.exec("SELECT type, number FROM table_phone, table_person WHERE table_phone.person_id =" + id);
            while (query_phone.next())
            {
                phone.type = query_phone.value(0).toString();
                phone.number = query_phone.value(1).toString();
                person.phones.push_back(phone);
            }
            phonebook.push_back(person);
            person.phones.clear();
        }
    }
}

void MainWindow::import_phonebook(QString _persons, QString _phones)
{
    QFile persons_csv(_persons);
    QFile phones_csv(_phones);

    if (!persons_csv.exists() && persons_csv.open(QIODevice::WriteOnly)) { persons_csv.close(); }
    if (!phones_csv.exists() && phones_csv.open(QIODevice::WriteOnly)) { phones_csv.close(); }
    if (persons_csv.open(QIODevice::ReadOnly) && phones_csv.open(QIODevice::ReadOnly))
    {
        QStringList personList;
        QStringList personRow;
        QStringList phoneList;
        QStringList phoneRow;

        while(!persons_csv.atEnd())
        {
            personList.push_back(persons_csv.readLine().simplified());
        }
        persons_csv.close();
        while(!phones_csv.atEnd())
        {
            phoneList.push_back(phones_csv.readLine().simplified());
        }
        phones_csv.close();

        phonebook.clear();

        Person person;
        Phone phone;
        Address address;
        int day = 0;
        int month = 0;
        int year = 0;

        for (int i = 0; i < personList.size(); i++)
        {
            personRow = personList.at(i).split(':');

            person.firstName = personRow.at(0);
            person.lastName = personRow.at(1);

            day = personRow.at(2).toInt();
            month = personRow.at(3).toInt();
            year = personRow.at(4).toInt();
            person.dateOfBirth = QDate (year,month,day);

            address.post_index = personRow.at(5).toInt();
            address.country = personRow.at(6);
            address.region = personRow.at(7);
            address.city = personRow.at(8);
            address.street = personRow.at(9);
            address.house = personRow.at(10);
            person.address = address;

            phoneRow = phoneList.at(i).split(':');
            for (int i = 0; i < phoneRow.size(); i+=2)
            {
                phone.type = phoneRow.at(i);
                phone.number = phoneRow.at(i + 1);
                person.phones.push_back(phone);
            }
            phonebook.push_back(person);
            person.phones.clear();
        }
    }
}

void MainWindow::export_phonebook(QString _persons, QString _phones)
{
    QFile persons_csv(_persons);
    QFile phones_csv(_phones);
    if (persons_csv.open(QIODevice::ReadWrite) && phones_csv.open(QIODevice::ReadWrite))
    {
        for (auto& person : phonebook)
        {
            QString data;
            data = "";
            data += person.firstName + ":";
            data += person.lastName + ":";
            QString day;
            QString month;
            QString year;
            day = QString::number(person.dateOfBirth.day());
            month = QString::number(person.dateOfBirth.month());
            year = QString::number(person.dateOfBirth.year());
            data += day + ":" + month + ":" + year + ":";
            QString post_index = QString::number(person.address.post_index);
            data += post_index + ":";
            data += person.address.country + ":";
            data += person.address.region + ":";
            data += person.address.city + ":";
            data += person.address.street + ":";
            data += person.address.house + "\n";
            QString& p_data = data;
            persons_csv.write(p_data.toLocal8Bit());
            QVector<Phone> phones = person.phones;
            for (auto& phone : phones)
            {
                data = phone.type + ":";
                data += phone.number + ":";
                p_data = data;
                phones_csv.write(p_data.toLocal8Bit());
            }
            phones_csv.ungetChar(':');
            phones_csv.write("\n");
        }
    }
}

void MainWindow::update_phonebook()
{
    int personIndex = ui->list_persons->currentRow();
    Person person;
    person.firstName = ui->input_firstName->text();
    person.lastName = ui->input_lastName->text();
    person.dateOfBirth = ui->input_dateOfBirth->date();

    person.address.country = ui->input_addressCountry->text();
    person.address.region = ui->input_addressRegion->text();
    person.address.city = ui->input_addressCity->text();
    person.address.street = ui->input_addressStreet->text();
    person.address.house = ui->input_addressHouse->text();

    Phone phone;
    int rowCount = ui->table_phones->rowCount();
    for (int i = 0; i < rowCount; ++i)
    {
        phone.type = ui->table_phones->item(i, 0)->text();
        phone.number = ui->table_phones->item(i, 1)->text();
        person.phones.push_back(phone);
    }
    phonebook[personIndex] = person;
}

void MainWindow::update_ui()
{
    QListWidget* widget = ui->list_persons;
    widget->clear();
    for (auto& person : phonebook )
    {
        widget->addItem(person.firstName + " " + person.lastName);
    }
    widget->setCurrentRow(0);

    int width = ui->table_phones->width();
    QTableWidget* table_phones = ui->table_phones;
    table_phones->setColumnWidth(0, (width - table_phones->verticalHeader()->width())/2);
    table_phones->setColumnWidth(1, (width - table_phones->verticalHeader()->width())/2-1);
}

void MainWindow::on_list_persons_itemSelectionChanged()
{
    int index = ui->list_persons->currentIndex().row();
    ui->input_firstName->setText(phonebook.at(index).firstName);
    ui->input_lastName->setText(phonebook.at(index).lastName);
    ui->input_dateOfBirth->setDate(phonebook.at(index).dateOfBirth);
    ui->input_addressCountry->setText(phonebook.at(index).address.country);
    ui->input_addressRegion->setText(phonebook.at(index).address.region);
    ui->input_addressCity->setText(phonebook.at(index).address.city);
    ui->input_addressStreet->setText(phonebook.at(index).address.street);
    ui->input_addressHouse->setText(phonebook.at(index).address.house);

    ui->table_phones->setRowCount(phonebook.at(index).phones.size());
    ui->table_phones->setColumnCount(2);
    ui->table_phones->setHorizontalHeaderLabels({"Тип","Номер"});

    int size = phonebook.at(index).phones.size();
    for (int i = 0; i < size; ++i)
    {
        QString type = phonebook.at(index).phones.at(i).type;
        ui->table_phones->setItem(i, 0, new QTableWidgetItem(type));
        QString number = phonebook.at(index).phones.at(i).number;
        ui->table_phones->setItem(i, 1, new QTableWidgetItem(number));
    }
}
