#include <iostream>

using namespace std;
struct Point {
    int x, y;
};

int main() {
    int* p = new int{10};
    Point *triangle = new Point[3];

    triangle[0] = Point{1, 2};
    triangle[1] = Point{10, 20};
    triangle[2] = Point{-10, -5};

    int intArr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    double doubleArr[] = {1, 2, 3, 4, 5};

    string dayName[] = {"A", "B", "C"};
    cout << sizeof(dayName) << endl;

    cout << "sizeof(p) " << sizeof(p) << endl;
    cout << "sizeof(Point) " << sizeof(Point) << endl;
    cout << "sizeof(triangle) " << sizeof(triangle) << endl;
    cout << "sizeof(intArr) " << sizeof(intArr) << endl;
    cout << "sizeof(doubleArr) " << sizeof(doubleArr) << endl;

    //clean up memory
    delete p;
    delete[] triangle;

    return 0;
}