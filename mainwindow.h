#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QListWidgetItem>
#include <QSqlDatabase>

#include "person.h"
#include "phone.h"
#include "address.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    void import_phonebook(QString _persons, QString _phones);
    void import_phonebook();
    bool connect_db();
    void export_phonebook(QString _persons, QString _phones);
    void update_phonebook();
    void update_ui();

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_button_clear_clicked();
    void on_button_save_clicked();
    void on_button_import_clicked();
    void on_button_export_clicked();
    void on_list_persons_itemSelectionChanged();
private:
    QVector<Person> phonebook;
    QSqlDatabase db;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
