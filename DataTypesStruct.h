#ifndef DATATYPESSTRUCT_H
#define DATATYPESSTRUCT_H
#include <QString>
#include <QVector>

struct Date{
private:
    bool CheckDate(int in_day, int in_month, int in_year){
    //TODO: Разработать функцию проверки корректности полученной даты
        return true;
    }
public:
    int day;
    int month;
    int year;
    void InputDate(int in_day, int in_month, int in_year){
        if (CheckDate(in_day,in_month,in_year)) {
        day=in_day;
        month = in_month;
        year = in_year;
        }
    }
};
struct Phone{
    QString phone[20];
};

struct PhoneNumbers{
private:
    bool CheckPhoneNumber(QString phone){
    //TODO: Разработать функцию проверки корректности полученной даты
       return true;
    }
public:
    QVector<Phone> homePhone;
    QVector<Phone> workPhone;
    QVector<Phone> cellPhone1;
    QString InputPhone(QString phone){
        if (CheckPhoneNumber(phone)){
            return phone;
        }
    }
};

struct HomeAddr{
    QString postIndex[10];
    QString city[15];
    QString street[20];
    QString home[5];
    QString apart[5];
};

struct Phonebook{
    QString firstName[20];
    QString midleName[20];
    QString lastName[20];
    Date birthDate;
    PhoneNumbers phoneNums;
    HomeAddr hAddr;
};


#endif // DATATYPESSTRUCT_H
