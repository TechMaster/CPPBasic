#include <iostream>

using namespace std;

int main() {
    int scores[] = {5, 6, 7, 8, 4, 1};
    int numElements = sizeof(scores) / sizeof(int);
    for (int i = 0; i < numElements; i++) {
       cout << scores[i] << endl;
    }
    const int dayInWeek = 7;
    //Array of string
    const string dayName[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for (int j = 0; j < dayInWeek; j++) {
        cout << dayName[j] << std::endl;
    }
    //Multi-dimensional arrays
    int matrix[3][3] = {{0, 1, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //Dynamic Arrays
    double* nhietDoTrongTuan = new double[dayInWeek];
    nhietDoTrongTuan[0] = 35.1;
    nhietDoTrongTuan[1] = 32.3;
    nhietDoTrongTuan[2] = 31.1;
    nhietDoTrongTuan[3] = 28.6;
    nhietDoTrongTuan[4] = 25.2;
    nhietDoTrongTuan[5] = 29.7;
    nhietDoTrongTuan[6] = 15.8;

    cout << nhietDoTrongTuan[1]  << endl;
    cout << *(nhietDoTrongTuan + 1)  << endl;

    for (int i = 0; i < dayInWeek; i++) {
        cout << dayName[i] << ":" << *(nhietDoTrongTuan + i)  << endl;
    }

    //http://stackoverflow.com/questions/6261201/how-to-find-memory-leak-in-a-c-code-project
    delete[] nhietDoTrongTuan;


    return 0;
}