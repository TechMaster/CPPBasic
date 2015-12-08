#include <iostream>
#include <sstream>
//http://www.dreamincode.net/forums/topic/329785-implementing-a-tostring-in-c/
using namespace std;

class Complex
{
    double _real, _imaginary;

public:
    Complex(double real, double imaginary):
            _real(real) , _imaginary(imaginary) {}

    string toString() const
    {
        stringstream stream;
        stream << *this;
        return stream.str();
    }

    friend ostream& operator<<(ostream& stream, const Complex & c)
    {
        stream << c._real << " + " << c._imaginary << "i";
        return stream;
    }
};

int main()
{
    Complex c1(12, 5);

    cout << c1 << endl;
    cout << c1.toString() << endl;
    return 0;
}