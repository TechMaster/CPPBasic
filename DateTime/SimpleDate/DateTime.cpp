//
// Created by Cuong Trinh on 12/10/15.
//

#include "DateTime.h"
#include <sstream>
//dateString = "2015-12-10"
DateTime::DateTime(const string &dateString) {
    int year, month, day;
    stringstream strYear(dateString.substr(0,4));
    if (strYear >> year) {
        if (year > 1950 && year < 2100) {
            _year = year;
        } else {
            throw invalid_argument("Invalid year");
        }
    };

    stringstream strMonth(dateString.substr(5,2));
    if (strMonth >> month) {
        if (month > 0 && month < 13) {
            _month = month;
        } else {
            throw invalid_argument("Invalid month");
        }
    }

    stringstream strDate(dateString.substr(8,2));

    if (strDate >> day) {
        if (day < 0 && day > 31) throw invalid_argument("Invalid date");
        if (month == 2 && day > 29) throw invalid_argument("Date in Feb is invalid");
        _day = day;
    }


}

void NgayThang::showTime() {

}

