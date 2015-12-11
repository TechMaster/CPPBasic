#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/time_zone_base.hpp>
#include <boost/date_time/local_time/local_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using namespace std;
using namespace boost::gregorian;
using namespace boost::posix_time;

void simpleDemo();

void posixTime();

int main() {
    //simpleDemo();
    posixTime();
    return 0;
}

void simpleDemo() {
    date weekstart(2002, Feb, 1);
    cout << weekstart << endl;
    date weekend = weekstart + weeks(1);
    date d1(1975, 11, 27);

    cout << d1 << endl;

    date d2 = d1 + days(5);
    cout << d2 << endl;

    date today = day_clock::local_day();
    cout << "today " << today << endl;
    if (d2 >= today) { } //date comparison operators

    date_period thisWeek(today, today + days(5));
    if (thisWeek.contains(today)) {
        cout << "This week contains today" << endl;
    }//do something


    //iterate and print the week
    day_iterator itr(weekstart);
    while (itr <= weekend) {
        cout << (*itr) << endl;
        ++itr;
    }
    //input streaming
    std::stringstream ss("2004-Jan-1");
    date d3;
    ss >> d3;

    //date generator functions
    //date d5 = next_weekday(today, Sunday); //calculate Sunday following d4
    //cout << "next Sunday " << d5 << endl;

    //US labor day is first Monday in Sept
    typedef nth_day_of_the_week_in_month nth_dow;
    nth_dow labor_day(nth_dow::first, Monday, Sep);
    //calculate a specific date for 2004 from functor
    date d6 = labor_day.get_date(2015);
    cout << "Labor day in 2015: " << d6 << endl;

}

void posixTime() {

    time_duration td = hours(1) + seconds(10); //01:00:01
    td = hours(1) + microsec(5); //01:00:00.000005
    date d(2002, Feb, 1); //an arbitrary date
    ptime t1(d, hours(5) + microsec(100)); //date + time of day offset
    ptime t2 = t1 - minutes(4) + seconds(2);
    ptime now = second_clock::local_time(); //use the clock
    date today = now.date(); //Get the date part out of the time
    date tomorrow = today + date_duration(1);
    ptime tomorrow_start(tomorrow); //midnight

    //input streaming
    std::stringstream ss("2004-Jan-1 05:21:33.20");
    ss >> t2;

    //starting at current time iterator adds by one hour
    time_iterator titr(now, hours(1));
    for (; titr < tomorrow_start; ++titr) {
        std::cout << (*titr) << std::endl;
    }
}