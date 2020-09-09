//
// Created by justin on 2020/09/09.
//

#include "ContactMenu.h"

#pragma once
#include <vector>
#include <std::string>
#include <iostream>

#define MAX 100

int ContactMenu::currentSize() {
    return personVec.size();
}

void ContactMenu::addPerson() {
    if (m_Size == MAX) {
        std::cout << "ContactMenu is full" << std::endl;
        return;
    } else {
        std::string name;
        std::cout << "Please input name: " << std::endl;
        cin >> name;

        int sex;
        std::cout << "Please input sex: " << std::endl;
        cin >> sex;

        int age;
        std::cout << "Please input age: " << std::endl;
        cin >> age;

        std::string addr;
        std::cout << "Please input address: " << std::endl;
        cin >> addr;

        std::string phone;
        std::cout << "Please input phone: " << std::endl;
        cin >> phone;

        int newId = currentSize() + 1;
        Person person(id, name, age, sex, addr, phone);
        personVec.push_back(person);
        ++m_Size;
        std::cout << "Add Person into ContactMenu successfully!" << std::endl;
    }
}

void ContactMenu::modifyPerson() {
    std::cout << "Please input name of which you want to modify" << std::endl;
    std::string tName;
    cin >> tName;
    for (int i = 0; i < personVec.size(); ++i) {
        Person& item = personVec.at(i);
        if (item.m_Name.compare(tName) == 0) {
            std::cout << "Please select what attr that you want to modify" << std::endl;
            std::cout << "1.name" << std::endl;
            std::cout << "2.sex" << std::endl;
            std::cout << "3.age" << std::endl;
            std::cout << "4.address" << std::endl;
            std::cout << "5.phone" << std::endl;
            std::cout << "0.exit modify mode" << std::endl;

        } else {
            std::cout << "" << std::endl;
        }
    }
}

void ContactMenu::showPersons() {
    auto begin = personVec.begin();
    auto end = personVec.end();

    while(begin != end) {
        begin->showInfo();
        ++begin;
    }
}

void  ContactMenu::removePerson() {

}
