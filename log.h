#ifndef LOG_H
#define LOG_H

#include <QString>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QDateTime>

class Log
{
private:
    QString fileName = "phone_book.log";
    void WriteToFile(QString message);
public:    
    void Info(QString message);
    void Error(QString message);
    void Success(QString message);

    Log();
    Log(QString fileName);
};

#endif // LOG_H
