#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <QStringList>
#include <QByteArray>
#include <QDebug>
#include <vector>

struct Entry {
    QString xbee_name_;
    QByteArray xbee_address_;
};

class AddressBook {


public:
    std::vector<Entry> book;
    AddressBook();
    void Add(QStringList line);
    QByteArray Get(QString name);
    void Print();
};
#endif // ADDRESSBOOK_H

