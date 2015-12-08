//
// Created by Cuong Trinh on 12/6/15.
//

#include "Person.h"
Person::Person(const string &_name, int _age) {
    cout << this << " custom constructor" << endl;
    name = _name;
    age = _age;
}

void Person::init(const string &_name, int _age) {
    name = _name;
    age = _age;
}

void Person::say() {
    cout << name << " is " << age << endl;
}