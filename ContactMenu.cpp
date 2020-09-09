//
// Created by justin on 2020/09/09.
//

#include "ContactMenu.h"
#include "Person.h"

#include <vector>
#include <string>
#include <iostream>

const int MAX = 100;

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

        int newId = personVec.size() + 1;
        Person person(id, name, age, sex, addr, phone);
        personVec.push_back(person);

        std::cout << "Add Person into ContactMenu successfully!" << std::endl;
    }
}

void ContactMenu::searchPerson() {

}

// todo
void ContactMenu::modifyPerson() {
    std::cout << "Please input orderId of which you want to modify" << std::endl;
    int id = -1;
    cin >> id;
    for (int i = 0; i < personVec.size(); ++i) {
        Person& item = personVec.at(i);
        if (item.m_id == id) {
            std::cout << "Please select what attr that you want to modify" << std::endl;
            std::cout << "1.name" << std::endl;
            std::cout << "2.sex" << std::endl;
            std::cout << "3.age" << std::endl;
            std::cout << "4.address" << std::endl;
            std::cout << "5.phone" << std::endl;
            std::cout << "0.exit" << std::endl;

            int select = 0;
            cin >> select;
            switch(select) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 0:
                    break;
                default:
                    break;

            }

        } else {
            std::cout << "" << std::endl;
        }
    }
}

void ContactMenu::showPersons() {
    auto begin = personVec.begin();
    auto end = personVec.end();
    while(begin != end) {
        begin->showBaseInfo();
        ++begin;
    }
}

// todo
void  ContactMenu::removePerson() {
    std::cout << "Please input orderId of which you want to delete" << std::endl;

    int id = -1;
    cin >> id;

}

void ContactMenu::clearPersons() {
    std::cout << "Are you sure to clear all ContactMenu ?" << std::endl;
    std::cout << "Y to confirm" << std::endl;
    std::cout << "OTHER to cancel then exit" << std::endl;

    std::string order;
    cin >> order;
    if (order.compare("Y")) {
        personVec.erase(personVec.begin(), personVec.end());
        std::cout << "Clear ContactMenu successfully" << std::endl;
    }
}