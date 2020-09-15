//
// Created by justin on 2020/09/09.
//
#include <vector>
#include <string>
#include "Person.h"

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

    int findPersonIndexByName(const std::string& name);

    void renderCSV();

private:
    std::vector<Person> personVec;
};

#endif //CONTACTMENU_CONTACTMENU_H
