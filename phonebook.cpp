#include "phonebook.h"

Phonebook::Phonebook() {}

void Phonebook::Phonebook_import(QFile& _file_persons, QFile& _file_phones)
{
    if (!_file_persons.exists() && _file_persons.open(QIODevice::WriteOnly)) { _file_persons.close(); }
    if (!_file_phones.exists() && _file_phones.open(QIODevice::WriteOnly)) { _file_phones.close(); }
    if (_file_persons.open(QIODevice::ReadOnly) && _file_phones.open(QIODevice::ReadOnly))
    {
        QStringList personsList;
        QStringList personTemp;

        int day = 0;
        int month = 0;
        int year = 0;

        QStringList phonesList;
        QStringList phonesTemp;

        Person person;
        Address address;
        Phones phones;
        Phone phone;

        while(!_file_persons.atEnd())
        {
            personsList.push_back(_file_persons.readLine());
        }
        _file_persons.close();
        while(!_file_phones.atEnd())
        {
            phonesList.push_back(_file_phones.readLine());
        }
        _file_phones.close();

        for (int i = 0; i < personsList.size(); i++)
        {
            personTemp = personsList.at(i).split(':');

            person.firstName = personTemp.at(0);
            person.lastName = personTemp.at(1);

            day = personTemp.at(2).toInt();
            month = personTemp.at(3).toInt();
            year = personTemp.at(4).toInt();
            person.dateOfBirth = QDate (year,month,day);

            address.post_index = personTemp.at(5).toInt();
            address.country = personTemp.at(6);
            address.region = personTemp.at(7);
            address.city = personTemp.at(8);
            address.street = personTemp.at(9);
            address.house = personTemp.at(10);
            person.address = address;

            phonesTemp = phonesList.at(i).split(':');
            for (int i = 0; i < phonesTemp.size(); i+=2)
            {
                phone.type = phonesTemp.at(i);
                phone.number = phonesTemp.at(i+1);
                person.phones.phones.push_back(phone);
            }
            this->phonebook.push_back(person);
        }
    }
}

void Phonebook::Set(Phonebook _phonebook)
{
    phonebook = _phonebook;
}

Phonebook Phonebook::Get()
{
    return this;
}
