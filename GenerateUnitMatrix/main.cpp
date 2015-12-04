#include <iostream>
#include <sstream>

using namespace std;
int getInputInteger();

int main() {
    int size = getInputInteger();

    //http://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new
    int** matrix = new int*[size];
    for (int i = 0; i < size; ++i) {
        matrix[i] = new int[size];  //Initialize new int array, 1D array
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j) {
                matrix[i][j] = 0;  //Not matrix[i, j]
            } else {
                matrix[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

}

//http://www.cplusplus.com/forum/articles/6046/
int getInputInteger() {
    int myNumber = 0;
    string input = "";
    while (true) {
        cout << "Please enter a valid number: ";
        getline(cin, input);

        // This code converts from string to number safely.
        stringstream myStream(input);
        if (myStream >> myNumber)
            break;
        cout << "Invalid number, please try again" << endl;
    }
    return myNumber;
}