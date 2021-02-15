#ifndef PERSON_H
#define PERSON_H

#include "address.h"
#include "phones.h"

#include <QString>
#include <QDate>

class Person
{
public:
    QString firstName;
    QString lastName;
    QDate dateOfBirth;
    Address address;
    Phones phones;
    Person();
};

#endif // PERSON_H
