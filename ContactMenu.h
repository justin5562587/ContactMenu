//
// Created by justin on 2020/09/09.
//
#include <vector>

#ifndef CONTACTMENU_CONTACTMENU_H
#define CONTACTMENU_CONTACTMENU_H

class ContactMenu {
private:
    std::vector<Person> personVec;
    int m_Size = 0;

public:
    void addPerson();

    void modifyPerson();

    void showPersons();

    void removePerson();

    int currentSize();

};

#endif //CONTACTMENU_CONTACTMENU_H
