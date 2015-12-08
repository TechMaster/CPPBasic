#include <iostream>
#include <vector>
/*
 * Vectors are sequence containers representing arrays that can change in size
 */
using namespace std;

struct Foo
{
    int x;
    double y;
    Foo(int _x, double _y) {x = _x; y = _y;};

    //Without this cool method, cout << Foo does not work
    friend ostream& operator<<(ostream& stream, const Foo & f)
    {
        stream << "x = " << f.x << ", y = " << f.y;
        return stream;
    }
};

//Forward declaration
template <class T>
void printVector(vector<T> &vec, const string separator = "\n");
void basicDemo();
void swapTwoVectors();
void vectorContainsStruct();

//----------------
int main() {

    basicDemo();

    swapTwoVectors();

    vectorContainsStruct();

    return 0;
}
//-----------------------------
template <class T>
void printVector(vector<T> &vec, const string separator) {
    cout << endl;
    for (auto &e : vec) {
        cout << e << separator;
    }
    cout << endl;

}
void basicDemo() {
    //Initialize vector
    vector<int> four100 (4,100);
    printVector<int>(four100, ",");

    int myints[] = {1,2,3,4};
    vector<int> intVec (myints, myints + sizeof(myints) / sizeof(int) );

    //push vs pop
    intVec.push_back(5);
    cout << "After push_back";
    printVector<int>(intVec, ",");

    cout << endl;

    cout << "After pop_back";
    intVec.pop_back();
    printVector<int>(intVec, ",");

    //insert new element
    intVec.insert(intVec.begin() + 2, 100);
    printVector<int>(intVec, ",");

    //iterator
    for (vector<int>::iterator it = intVec.begin() ; it != intVec.end(); ++it)
        //for (auto it = intVec.begin() ; it != intVec.end(); ++it)
        std::cout << *it << ",";
    std::cout << endl;
}
void swapTwoVectors() {
    //Swap demo
    vector<int> aVec (3,100);   // three ints with a value of 100
    vector<int> bVec (5,200);   // five ints with a value of 200

    aVec.swap(bVec);

    cout << "aVec contains:" << endl;
    printVector<int>(aVec, ",");

    cout << endl << "bVec contains:" << endl;
    printVector<int>(bVec, ",");
}


void vectorContainsStruct() {
    vector<Foo> foos;
    foos.emplace(foos.begin(), 10, 2.5);
    foos.insert(foos.begin(), Foo(8, 3.4));
    foos.emplace_back(8, 8.1);

    printVector<Foo>(foos, "\n");

    cout << "foos.count = " << foos.size() << endl;

    vector<Foo> bar;
    bar.assign(foos.begin(), foos.begin() + 2);
    printVector<Foo>(bar, "\n");
}