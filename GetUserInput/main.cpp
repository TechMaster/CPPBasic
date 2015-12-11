#include <iostream>
#include <sstream>
#include <vector>
#include "DateTime.h"

using namespace std;
int getInputInteger(const string &message);
char printOptions(
        const string &message,
        const vector<string> &options);

int main() {

    //Date(1975, 27, 11);
    try {
        Date dob = Date("1988-03-30");
        cout << dob;
    } catch (invalid_argument &e) {
        cout << e.what();
    }

    return 0;
    vector<string> options { "N-Nhập mới sinh viên",
                             "T-Tìm sinh viên theo tên",
                             "M-Thêm mới sinh viên",
                             "Q-Thoát"
                            };

    //Main loop
    while (true) {
        char inputChar = printOptions("Hãy chọn lệnh bằng gõ ký tự: ", options);
        switch (inputChar) {
            case 'Q':
                return 0;
            case 'N':
                //getInputInteger("Hãy nhập số lượng sinh viên");
                break;
            case 'T':
                cout << "Tìm sinh viên" << endl;
                break;
            case 'M':
                cout << "Thêm mới sinh viên" << endl;
            default:
                continue;
        }
    }
    return 0;
}

//http://www.cplusplus.com/forum/articles/6046/
int getInputInteger(const string &message) {
    int myNumber = 0;
    string input = "";
    while (true) {
        cout << message << ": ";
        getline(cin, input);

        // This code converts from string to number safely.
        stringstream myStream(input);
        if (myStream >> myNumber)
            break;
        cout << "Invalid number, please try again" << endl;
    }
    return myNumber;
}
//Print list of options, get character input from user
char printOptions(
        const string &message,
        const vector<string> &options) {
    string input = "";

    char optionChars[options.size()];  //Create array from first letter of all options

    for (int i = 0; i < options.size(); i++) {
        optionChars[i] = (char) toupper(options[i][0]);
    }
    for (auto &option : options) {
        cout << option << endl;
    }
    char myChar;
    while (true) {
        cout << message;
        getline(cin, input);

        // This code converts from string to number safely.
        stringstream myStream(input);
        if (myStream >> myChar) {
            bool match = false;
            char upperMyChar = (char) toupper(myChar);
            for (auto &eachChar : optionChars) {
                if (eachChar == upperMyChar) {
                    match = true;
                    break;
                }
            }
            if (match) {
                return upperMyChar;
            }
        };


        cout << "Nhập sai, hãy nhập lại" << endl;
    }
}