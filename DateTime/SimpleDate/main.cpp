#include <iostream>
#include "DateTime.h"

using namespace std;
//Boost library
int main() {
    try {
        NgayThang* ngayThang = new NgayThang(1000,10,10);
        DateTime dob = DateTime("1988-02-30");
        cout << dob;

    } catch (invalid_argument &e) {
        cout << e.what();
    }
    return 0;
}