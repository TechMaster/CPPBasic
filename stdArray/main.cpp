#include <iostream>
#include <array>
using namespace std;
//std::array is a container that encapsulates fixed size arrays.


//This template function
template <class T, std::size_t SIZE>
void printArrayElements(array<T, SIZE> &arr) {
    cout << endl;
    for (auto &e : arr) {
        cout << e << ' ';
    }
    cout << endl;

}
template <class T, std::size_t SIZE>
void printArrayElements2(array<T, SIZE> &arr) {
    cout << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    // construction uses aggregate initialization
    array<int, 6> a1{6, 3, 2, 4, 5, 1}; // double-braces required in C++11 (not in C++14)

    //array<int, > array = { 9, 7, 5, 3, 1 }; // illegal, array size must be provided

    array<int, 3> a2 = {1, 2, 3};  // never required after =
    array<string, 2> a3 = {string("a"), "b" };
    array<bool, 3> boolArr = {true, false, 1==2};

    cout << a1[0] << endl;  //a1.front() access first element
    cout << a1.back(); //access

    // container operations are supported
    sort(a1.begin(), a1.end());
    cout << endl;
    // ranged for loop is supported
    for (const auto& s: a1)
        cout << s << ' ';
    cout << endl;


    a1.fill(100);

    printArrayElements<int, a1.size()>(a1);
    printArrayElements2<int, a1.size()>(a1);


    reverse_copy(a2.begin(), a2.end(),
                      ostream_iterator<int>(cout, " "));


    cout << endl;
    // ranged for loop is supported
    for (const auto& s: a3)
        cout << s << ' ';
    cout << endl;

    cout << "Array of boolean" << endl;
    for (const auto& b: boolArr) {
        cout << b << ' ';
    }

    printArrayElements<bool, boolArr.size()>(boolArr);
    return 0;
}