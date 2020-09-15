//
// Created by justin on 2020/09/09.
//
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "includes/ContactMenu.h"
#include "includes/Person.h"

const int MAX = 100;

const std::string getCin(const std::string &noticeMessage) {
    std::cout << noticeMessage << std::endl;
    std::string name;
    std::cin >> name;

    return name;
}

int ContactMenu::findPersonIndexByName(const std::string &name) {
    for (int i = 0; i < personVec.size(); ++i) {
        auto item = personVec.at(i);
        if (item.getName().compare(name) == 0) {
            return i;
        }
    }

    std::cout << "No result found with this name" << std::endl;
    return -1;
}

void ContactMenu::addPerson() {
    if (personVec.size() != MAX) {
        std::string name;
        std::cout << "Please input name: " << std::endl;
        std::cin >> name;

        int sex;
        std::cout << "Please input sex: " << std::endl;
        std::cin >> sex;

        int age;
        std::cout << "Please input age: " << std::endl;
        std::cin >> age;

        std::string addr;
        std::cout << "Please input address: " << std::endl;
        std::cin >> addr;

        std::string phone;
        std::cout << "Please input phone: " << std::endl;
        std::cin >> phone;

        Person person(name, age, sex, addr, phone);
        personVec.push_back(person);

        std::cout << "Add Person into ContactMenu successfully!" << std::endl;
    } else {
        std::cout << "ContactMenu is full" << std::endl;
    }
}

void ContactMenu::searchPerson() {
    while (true) {
        const std::string name = getCin("Please input name of which you want to search");
        int foundIndex = ContactMenu::findPersonIndexByName(name);
        if (foundIndex > -1) {
            auto foundPerson = personVec.at(foundIndex);
            foundPerson.showDetailInfo();
        }

        const std::string order = getCin("N to quit, others to continue");
        if (order.compare("N") == 0) {
            break;
        }
    }
}

void ContactMenu::modifyPerson() {
    while (true) {
        const std::string name = getCin("Please input name of which you want to modify");
        int foundIndex = findPersonIndexByName(name);

        if (foundIndex > -1) {
            Person &item = personVec.at(foundIndex);
            std::cout << "Reset all fields of " << name << std::endl;

            std::string name;
            std::cout << "Please input name: " << std::endl;
            std::cin >> name;

            int sex;
            std::cout << "Please input sex: " << std::endl;
            std::cin >> sex;

            int age;
            std::cout << "Please input age: " << std::endl;
            std::cin >> age;

            std::string addr;
            std::cout << "Please input address: " << std::endl;
            std::cin >> addr;

            std::string phone;
            std::cout << "Please input phone: " << std::endl;
            std::cin >> phone;

            item.modifyInfo(name, age, sex, addr, phone);
            item.showDetailInfo();
            std::cout << "Modify information successfully" << std::endl;

            break;
        }
    }

}

void ContactMenu::showPersons() {
    auto begin = personVec.begin();
    auto end = personVec.end();
    while (begin != end) {
        begin->showBaseInfo();
        ++begin;
    }
}

void ContactMenu::removePerson() {
    while (true) {
        const std::string name = getCin("Please input name of which you want to delete");
        int foundIndex = ContactMenu::findPersonIndexByName(name);

        if (foundIndex > -1) {
            auto begin = personVec.begin();
            personVec.erase(begin + foundIndex, begin + foundIndex + 1);
            std::cout << "Remove single data successfully";
            break;
        }
    }
}

void ContactMenu::clearPersons() {
    std::cout << "Are you sure to clear all ContactMenu ?" << std::endl;
    std::cout << "Y to confirm" << std::endl;
    std::cout << "OTHER to cancel then exit" << std::endl;

    std::string order;
    std::cin >> order;
    if (order.compare("Y")) {
        personVec.erase(personVec.begin(), personVec.end());
        std::cout << "Clear ContactMenu successfully" << std::endl;
    }
}

void ContactMenu::renderCSV() {
    std::ofstream myFile("ContactMenu.csv");

    std::string columns[] = {"Name", "Phone", "Age", "Sex", "Address"};
    auto len = sizeof(columns) / sizeof(columns[0]);
    for (int k = 0; k < len;) {
        myFile << columns[k++];
        if (k != len) {
            myFile << ",";
        } else {
            myFile << "\n";
        }
    }

    // Send data to the stream
    for (int i = 0; i < personVec.size(); ++i) {
        Person &item = personVec.at(i);
        myFile << item.getName() << ","
               << item.getPhone() << ","
               << item.getAge() << ","
               << item.getSex() << ","
               << item.getAddr() << "\n";
    }

    // Close the file
    myFile.close();
}