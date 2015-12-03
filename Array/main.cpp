#include <iostream>

using namespace std;

int main() {
    int scores[] = {5, 6, 7, 8, 4, 1};
    int numElements = sizeof(scores) / sizeof(int);

    /*for (int i = 0; i < numElements; i++) {
        cout << scores[i] << endl;
    }*/

    for (auto &element : scores) {
        cout << element << endl;
    }

    const int dayInWeek = 7;
    const string dayName[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    /*for (int j = 0; j < dayInWeek; j++) {
        cout << dayName[j] << endl;
    }*/

    for (auto &element : dayName) {
        cout << element << endl;
    }

    //Multi-dimensional arrays
    int matrix[3][3] = {{0, 1, 2},
                         {3, 4, 5},
                         {6, 7, 8}};
    /*for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }*/

    for (auto &row : matrix) {
        for (auto &element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}