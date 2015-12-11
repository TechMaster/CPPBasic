//
// Created by Cuong Trinh on 12/10/15.
//

#ifndef GETUSERINPUT_DATETIME_H
#define GETUSERINPUT_DATETIME_H
#include <iostream>
using namespace std;

class Date {
protected:
    int _year;
    int _month;
    int _day;
public:

    Date(int _year, int _month, int _day) : _year(_year), _month(_month), _day(_day) { }
    Date(const string &dateString);
    Date() = default;

    //Without this cool method, cout << Foo does not work
    friend ostream& operator<<(ostream& stream, const Date & date)
    {
        stream << date._year << "-" << date._month << "-" << date._day;
        return stream;
    }
};

#endif //GETUSERINPUT_DATETIME_H
