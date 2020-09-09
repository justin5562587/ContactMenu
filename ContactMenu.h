//
// Created by justin on 2020/09/09.
//
#include <vector>

#ifndef CONTACTMENU_CONTACTMENU_H
#define CONTACTMENU_CONTACTMENU_H

class ContactMenu {
public:

    void addPerson();

    void modifyPerson();

    void showPersons();

    void searchPerson();

    void removePerson();

    void clearPersons();

private:
    std::vector<Person> personVec;
};

#endif //CONTACTMENU_CONTACTMENU_H
