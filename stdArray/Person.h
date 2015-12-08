//
// Created by Cuong Trinh on 12/6/15.
//
#include <iostream>
using namespace std;

#ifndef STDARRAY_PERSON_H
#define STDARRAY_PERSON_H



class Person {
public:
    string name;
    int age;

    Person() = default;

    Person(const string &_name, int _age);  //constructor

    void init(const string &_name, int _age);

    void say();

};

#endif //STDARRAY_PERSON_H
