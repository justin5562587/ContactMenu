//
// Created by justin on 2020/09/09.
//

#include "Person.h"

void Person::showBaseInfo() {
    cout << "Name: " << m_Name << endl;
    cout << "Phone: " << m_Phone << endl;
}

void Person::showDetailInfo() {
    cout << "Name: " << m_Name << endl;
    cout << "Age: " << m_Age << endl;
    cout << "Sex: " << (m_Sex ? "male" : "female") << endl;
    cout << "Address: " << m_Addr << endl;
    cout << "Phone: " << m_Phone << endl;
}

