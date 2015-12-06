#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age;

    //Person() = default;
    Person();

    Person(const string &_name, int _age);  //constructor

    void init(const string &_name, int _age);

    void say();
};
Person::Person() {
    cout << this << " default constructor" << endl;
}
Person::Person(const string &_name, int _age) {
    cout << this << " custom constructor" << endl;
    name = _name;
    age = _age;
}

void Person::init(const string &_name, int _age) {
    name = _name;
    age = _age;
}

void Person::say() {
    cout << name << " is " << age << endl;
}

int main() {

    Person cuong = Person("Trinh Minh Cuong", 40);
    cuong.say();

    Person *dung = new Person{"Doan Xuan Dung", 41};
    dung->say();

    Person two_friends[] = {cuong, *dung};

    for (auto &item : two_friends) {
        item.say();
    }
    int numPeople = 3;
    Person *people = new Person[numPeople];

    //Reassign array element --> memory leaking
    /*people[0] = Person("Lan", 18);
    people[1] = Person("Linh", 19);
    people[2] = Person("Huong", 20);*/

    people[0].init("Lan", 18);
    people[1].init("Linh", 19);
    people[2].init("Huong", 20);


    delete dung;
    delete[] people;
    return 0;
}