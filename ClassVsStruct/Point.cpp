//
// Created by Cuong Trinh on 12/11/15.
//

#include "Point.h"
string PointColor::getColor() {
    switch (_color) {
        case RED:
            return "red";
        case GREEN:
            return "green";
        case BLUE:
            return "blue";
        default:
            return "blue";
    }
}