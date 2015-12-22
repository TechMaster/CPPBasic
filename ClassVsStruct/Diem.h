//
// Created by Cuong Trinh on 12/11/15.
//

#ifndef CLASSVSSTRUCT_DIEM_H
#define CLASSVSSTRUCT_DIEM_H
#include <iostream>
#include "Color.h"

using namespace std;

struct Diem {
    int fun;
protected:
    int _x, _y;
    string _name;
public:
    Diem() : _x(0), _y(0) {_name = "Diem";};
    Diem(int x, int y): _x(x), _y(y) {_name = "Diem";};

    friend ostream& operator<<(ostream& stream, const Diem & diem) {
        stream << "x = " << diem._x << ", y = " << diem._y << endl;
        return stream;
    }

    virtual void changeCoordinate() { cout << "Do nothing" << endl;};
};

struct DiemMau: Diem {
protected:
    Color _color;

public:
    DiemMau(int x, int y, Color color): Diem (x, y) { _color = color; };
    friend ostream& operator<<(ostream& stream, const  DiemMau & diemMau) {
        stream << "x = " << diemMau._x
        << ", y = " << diemMau._y
        << ", color = " << diemMau._color << endl;
        return stream;
    }
    string getColor();
    void changeCoordinate();
};


#endif //CLASSVSSTRUCT_DIEM_H
