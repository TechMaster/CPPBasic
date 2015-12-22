//
// Created by Cuong Trinh on 12/11/15.
//

#include "Diem.h"
string DiemMau::getColor() {
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

void DiemMau::changeCoordinate() {
    cout << "Do something" << endl;
};