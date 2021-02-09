#include "address.h"

Address::Address() {}

Address::Address(QString country, QString region, QString city, QString street, QString house)
{
    this->country = country;
    this->region = region;
    this->city = city;
    this->street = street;
    this-> house = house;
}
