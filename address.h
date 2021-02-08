#ifndef ADDRESS_H
#define ADDRESS_H

#include <QString>

class Address
{
public:
    int post_index;
    QString country;
    QString region;
    QString city;
    QString street;
    QString house;

    Address();
    Address(QString country, QString region, QString city, QString street, QString house);
};

#endif // ADDRESS_H
