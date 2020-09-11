//
// Created by justin on 2020/09/09.
//
#include <string>
#include <iostream>
#include "includes/Person.h"

const std::string Person::getName() {
    return m_Name;
}

void Person::showBaseInfo() {
    std::cout << "Name: " << m_Name << std::endl;
    std::cout << "Phone: " << m_Phone << std::endl;
}

void Person::showDetailInfo() {
    std::cout << "Name: " << m_Name << std::endl;
    std::cout << "Age: " << m_Age << std::endl;
    std::cout << "Sex: " << (m_Sex ? "male" : "female") << std::endl;
    std::cout << "Address: " << m_Addr << std::endl;
    std::cout << "Phone: " << m_Phone << std::endl;
}



