#include <iostream>

using namespace std;
struct Point {
    int x, y;
};

int main() {
    int* p = new int{10};
    int* q;
    Point *triangle = new Point[4];

    triangle[0] = Point{1, 2};
    triangle[1] = Point{10, 20};
    triangle[2] = Point{-10, -5};
    triangle[3] = Point{-10, -5};

    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1, 2, 3, 4, 5};

    cout << doubleArr[11];

    cout << "sizeof(p) " << sizeof(p) << endl;
    cout << "sizeof(Point) " << sizeof(Point) << endl;
    cout << "sizeof(triangle) " << sizeof(triangle) << endl;
    cout << "sizeof(intArr) " << sizeof(intArr) << endl;
    cout << "sizeof(doubleArr) " << sizeof(doubleArr) << endl;

    /*
    sizeof(p) 8
    sizeof(Point) 8
    sizeof(triangle) 8
    sizeof(intArr) 20
     */

    //clean up memory
    //delete p;
    //delete[] triangle;

    return 0;
}

