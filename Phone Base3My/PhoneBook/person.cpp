#include "person.h"

Person::Person() {}
Person::Person(QString firstName, QString lastName, QDate dateOfBirth, Address address, QVector<Phone> phones)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->dateOfBirth = dateOfBirth;
    this->address = address;
    this->phones = phones;
}
