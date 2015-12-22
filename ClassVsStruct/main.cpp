#include <iostream>
#include "Point.h"
#include "Diem.h"

using namespace std;
//http://stackoverflow.com/questions/7762085/difference-between-a-struct-and-a-class
//http://stackoverflow.com/questions/422830/structure-of-a-c-object-in-memory-vs-a-struct
int main() {
    Point pointA = Point {10, 10};
    cout << pointA;

    Diem diemA = Diem {10, 10};
    cout << diemA;

    cout << "sizeof(pointA)=" << sizeof(pointA) << endl;
    cout << "sizeof(diemA)=" << sizeof(diemA) << endl;

    PointColor pointColorA = PointColor { 20, 20, BLUE};
    cout << pointColorA;

    DiemMau diemMauA = DiemMau{30, 30, GREEN};
    cout << diemMauA;

    diemA.fun = 10;
    //pointA.fun = 10;

    cout << diemMauA.getColor() << endl;
    cout << pointColorA.getColor() << endl;

    Diem* pDiem = &diemMauA;

    pDiem->changeCoordinate();
    return 0;
}