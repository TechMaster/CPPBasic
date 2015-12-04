#include <iostream>

using namespace std;

struct Point {
    int x, y;
};



int main() {
    const int dayInWeek = 7;
    const string dayName[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    //Dynamic Arrays
    double *nhietDoTrongTuan = new double[dayInWeek];  //allocate memory

    nhietDoTrongTuan[0] = 35.1;
    nhietDoTrongTuan[1] = 32.3;
    nhietDoTrongTuan[2] = 31.1;
    nhietDoTrongTuan[3] = 28.6;
    nhietDoTrongTuan[4] = 25.2;
    nhietDoTrongTuan[5] = 29.7;
    nhietDoTrongTuan[6] = 15.8;

    double *weekTemperature = nhietDoTrongTuan;

    /*cout << nhietDoTrongTuan << endl;
    cout << &nhietDoTrongTuan[0] << endl;
    cout << &weekTemperature[0] << endl;*/

    cout << nhietDoTrongTuan[2]  << endl;
    cout << *(nhietDoTrongTuan + 2)  << endl;

    for (int i = 0; i < dayInWeek; i++) {
        //cout << dayName[i] << " : " << *(nhietDoTrongTuan + i) << endl;
        //cout << dayName[i] << " : " << nhietDoTrongTuan[i]  << endl;
        cout << dayName[i] << " : " << *(weekTemperature + i) << endl;
    }

    //http://stackoverflow.com/questions/6261201/how-to-find-memory-leak-in-a-c-code-project
    delete[] nhietDoTrongTuan;
    //delete[] weekTemperature;  //redundant deallocate memory

    Point *triangle = new Point[3];

    triangle[0] = Point{1, 2};
    triangle[1] = Point{10, 20};
    triangle[2] = Point{-10, -5};

    /*for (auto &vertice : triangle) {
        cout << vertice.x << vertice.y;
    }*/

    /*for (auto &weekDay : dayName) {
        cout << weekDay << endl;
    }*/

    for (int i = 0; i < 3; i++) {
        cout << "x = " << triangle[i].x << ", y = " << triangle[i].y << endl;
    }

    delete []triangle;
}
