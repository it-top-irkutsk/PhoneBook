#include "log.h"

Log::Log() {}
Log::Log(QString fileName)
{
    this->fileName = fileName;
}

void Log::WriteToFile(QString message)
{
    QFile file(fileName);
    bool isOpenFile = file.open(QIODevice::WriteOnly);

    if  (isOpenFile) {
        QTextStream stream(&file);
        stream << message << "\n";
        if  (stream.status() == QTextStream::Ok) {
            qDebug() << "Запись в лог-файл прошла успешно \n";
        } else {
            qDebug() << "Ошибка записи лог-файла  \n";
        }
    } else {
        //TODO Добавить исключение или делегат
        qDebug() << "Ошибка открытия лог-файла \n";
    }

    file.close();
}

void Log::Info(QString message)
{
    QDateTime time = QDateTime::currentDateTime();
    QString msg = time.toString() + " [INFO] : " + message;
    WriteToFile(msg);
}

void Log::Error(QString message)
{
    QDateTime time = QDateTime::currentDateTime();
    QString msg = time.toString() + " [ERROR] : " + message;
    WriteToFile(msg);
}

void Log::Success(QString message)
{
    QDateTime time = QDateTime::currentDateTime();
    QString msg = time.toString() + " [SUCCESS] : " + message;
    WriteToFile(msg);
}
