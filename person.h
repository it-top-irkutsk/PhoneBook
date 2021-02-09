#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QVector>

#include "date.h"
#include "address.h"
#include "phone.h"

class Person
{
public:
    QString firstName;
    QString lastName;
    Date dateOfBirth;
    Address address;
    QVector<Phone> phones;

    Person();
};

#endif // PERSON_H
