//
// Created by justin on 2020/09/09.
//
#include <string>

#ifndef CONTACTMENU_PERSON_H
#define CONTACTMENU_PERSON_H

class Person {
private:
    std::string m_Name;
    int m_Age;
    int m_Sex;
    std::string m_Addr;
    std::string m_Phone;

public:
    Person(std::string name, int age, int sex, std::string addr, std::string phone) : m_Name(name), m_Age(age), m_Sex(sex), m_Addr(addr), m_Phone(phone) {
    }

    void modifyInfo(std::string name, int age, int sex, std::string addr, std::string phone);

    void showBaseInfo();

    void showDetailInfo();

    const std::string getName();
};

#endif //CONTACTMENU_PERSON_H
