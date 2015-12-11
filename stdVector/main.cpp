#include <iostream>
#include <vector>
/*
 * Vectors are sequence containers representing arrays that can change in size
 */
using namespace std;
void basicDemo();

template <class T>
void printVector(vector<T> &vec, const string separator) {
    cout << endl;
    for (auto &e : vec) {
        cout << e << separator;
    }
    cout << endl;
}

int main() {
    basicDemo();
    return 0;
}


void basicDemo() {
    //Initialize vector
    vector<int> four100 (4,100);
    printVector(four100, ",");

    int myints[] = {1,2,3,4};  //native array, C array
    vector<int> intVec (myints, myints + sizeof(myints) / sizeof(int) );
    printVector(intVec, ",");

    //push vs pop
    intVec.push_back(5);
    cout << "After push_back";
    printVector<int>(intVec, ",");

    cout << endl;

    cout << "After pop_back";
    intVec.pop_back();
    printVector<int>(intVec, ",");

    cout << endl;
    cout << "After insert";
    intVec.insert(intVec.begin() + 2, 100); //insert new element
    printVector<int>(intVec, ",");

    //iterator
    for (vector<int>::iterator it = intVec.begin() ; it != intVec.end(); ++it) {
        //for (auto it = intVec.begin() ; it != intVec.end(); ++it)
        cout << *it << ",";
    }
    cout << endl;
}
