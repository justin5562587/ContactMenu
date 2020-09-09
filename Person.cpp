//
// Created by justin on 2020/09/09.
//

#include "Person.h"

void Person::showInfo() {
    cout << "Name: " << m_Name << endl;
    cout << "Age: " << m_Age << endl;
    cout << "Sex: " << (m_Sex ? "male" : "female") << endl;
    cout << "Address: " << m_Addr << endl;
    cout << "Phone: " << m_Phone << endl;
}

