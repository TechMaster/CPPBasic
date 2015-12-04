#include <iostream>

using namespace std;
struct Point {
    int x, y;
};

int add (int a, int b) {
    int k = 0;
    double result = 10 / k;
    if (a > 0 && b >0) {
        return a + b;
    }
}
int main() {
    int* p = new int{10};
    Point *triangle = new Point[3];

    triangle[0] = Point{1, 2};
    triangle[1] = Point{10, 20};
    triangle[2] = Point{-10, -5};

    delete p;
    delete []triangle;

    return 0;
}

