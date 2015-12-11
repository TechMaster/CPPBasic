//
// Created by Cuong Trinh on 12/10/15.
//

#ifndef GETUSERINPUT_STUDENT_H
#define GETUSERINPUT_STUDENT_H

#include "DateTime.h"
#include <iostream>
using namespace std;

class Student {
protected:
    string _name;
    Date _dob;
public:

    Student(const string &name, const Date &date);
};


#endif //GETUSERINPUT_STUDENT_H
