#ifndef CLASSVSSTRUCT_POINT_H
#define CLASSVSSTRUCT_POINT_H
#include <iostream>
#include "Color.h"

using namespace std;

class Point {
    int fun;
protected:
    int _x, _y;
    string _name;
public:
    Point() : _x(0), _y(0) {_name = "Point";};
    Point(int _x, int _y) : _x(_x), _y(_y) {_name = "Point"; };

    friend ostream& operator<<(ostream& stream, const Point & point) {
        stream << "x = " <<point._x << ", y = " << point._y << endl;
        return stream;
    }
};

class PointColor:Point {

protected:
    Color _color;
public:
    PointColor(int x, int y, Color color): Point (x, y) {_color = color;};

    friend ostream& operator<<(ostream& stream, const PointColor & pointColor) {
        stream << "x = " << pointColor._x <<
        ", y = " << pointColor._y <<
        ", color = " << pointColor._color << endl;
        return stream;
    }

    string getColor();

};
#endif //CLASSVSSTRUCT_POINT_H
