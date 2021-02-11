#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "person.h"
#include <QVector>

class Phonebook
{
public:
    QVector<Person> phonebook;
    Add_Contact(Person person);

    Phonebook();
};

#endif // PHONEBOOK_H
