#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

class Person {
public:
    string name;
    int age;
    Person() = default;

    Person(const string &_name, int _age);
};
Person::Person(const string &_name, int _age) {
    name = _name;
    age = _age;
}

int main() {
    int* p = new int{10};
    Point *triangle = new Point[4];

    triangle[0] = Point{1, 2};
    triangle[1] = Point{10, 20};
    triangle[2] = Point{-10, -5};
    triangle[3] = Point{-10, -5};

    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1, 2, 3, 4, 5};
    cout << "sizeof(p) " << sizeof(p) << endl;
    cout << "sizeof(Point) " << sizeof(Point) << endl;
    cout << "sizeof(triangle) " << sizeof(triangle) << endl;
    cout << "sizeof(intArr) " << sizeof(intArr) << endl;
    cout << "sizeof(doubleArr) " << sizeof(doubleArr) << endl;

    /*
    sizeof(p) 8
    sizeof(Point) 8
    sizeof(triangle) 8
    sizeof(intArr) 20
     */

    //clean up memory
    delete p;
    delete[] triangle;


    Person* john = new Person {"Cuong", 10};
    Person two_people[2];
    two_people[0] = *john;
    two_people[1] = Person {"Jame", 12};

    Person* three_people = new Person[3];
    three_people[0] = *john;
    three_people[1] = Person {"Rock", 10};
    three_people[2] = Person {"Aten", 10};
    delete[] three_people;
    return 0;
}