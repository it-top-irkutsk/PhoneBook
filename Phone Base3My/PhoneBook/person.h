#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QVector>
#include <QDate>

#include "address.h"
#include "phone.h"

class Person
{
public:
    QString firstName;
    QString lastName;
    QDate dateOfBirth;
    Address address;
    QVector<Phone> phones;

    Person();
    Person(QString firstName, QString lastName, QDate dateOfBirth, Address address, QVector<Phone> phones);
};

#endif // PERSON_H
