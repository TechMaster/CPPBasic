#import <iostream>

using namespace std;

int main() {
    bool canFly = true;
    bool canSwim = false;
    bool canChaseMouse = true;
    if (canFly) {
        if (canSwim) {
            cout << "I am Duck";
        } else if (canChaseMouse) {
            cout << "I am Eagle";
        } else {
            cout << "I am Bird";
        }
    } else {
        cout << "I am Chicken";
    }
    return 0;
}