#include <iostream>
#include <sstream>

using namespace std;

struct Point {
    int x, y;
};

int main() {
    const int dayInWeek = 7;
//Array of string
    const string dayName[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    //Dynamic Arrays
    double *nhietDoTrongTuan = new double[dayInWeek];
    nhietDoTrongTuan[0] = 35.1;
    nhietDoTrongTuan[1] = 32.3;
    nhietDoTrongTuan[2] = 31.1;
    nhietDoTrongTuan[3] = 28.6;
    nhietDoTrongTuan[4] = 25.2;
    nhietDoTrongTuan[5] = 29.7;
    nhietDoTrongTuan[6] = 15.8;

    //cout << nhietDoTrongTuan[1]  << endl;
    //cout << *(nhietDoTrongTuan + 1)  << endl;

    for (int i = 0; i < dayInWeek; i++) {
        cout << dayName[i] << " : " << *(nhietDoTrongTuan + i) << endl;
        //cout << dayName[i] << " : " << nhietDoTrongTuan[i]  << endl;
    }

//http://stackoverflow.com/questions/6261201/how-to-find-memory-leak-in-a-c-code-project
    delete[] nhietDoTrongTuan;


    Point *triangle = new Point[3];
    triangle[0] = Point{1, 2};
    triangle[1] = Point{10, 20};
    triangle[2] = Point{-10, -5};

    /*for (auto &vertice : triangle) {
        cout << vertice.x << vertice.y;
    }*/

    for (int i = 0; i < 3; i++) {
        cout << "x = " << triangle[i].x << ", y = " << triangle[i].y << endl;
    }
    return 0;
}
