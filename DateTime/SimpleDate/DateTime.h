//
// Created by Cuong Trinh on 12/10/15.
//

#ifndef SIMPLEDATE_DATETIME_H
#define SIMPLEDATE_DATETIME_H

#include <iostream>
using namespace std;



class DateTime {
protected:
    int _year;
    int _month;
    int _day;
public:
    DateTime(int _year, int _month, int _day) : _year(_year), _month(_month), _day(_day) { }
    DateTime(const string &dateString);
    DateTime() = default;

    friend ostream& operator<<(ostream& stream, const DateTime & date) {
        stream << date._year << "-" << date._month << "-" << date._day;
        return stream;
    }
};

struct NgayThang {
protected:
    int _year;
    int _month;
    int _day;

public:
    NgayThang(int _year, int _month, int _day) : _year(_year), _month(_month), _day(_day) { }
    NgayThang() = default;
    void showTime();
};

struct NgayThang2 : NgayThang {

};
#endif //SIMPLEDATE_DATETIME_H
