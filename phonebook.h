#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "person.h"

class phoneBook
{
private:

public:
    QVector<Person> phonebook;
    void AddContact(Person person);

    phoneBook();
};

#endif // PHONEBOOK_H
