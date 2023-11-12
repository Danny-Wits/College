// Data types in CPP

#include <iostream>
using namespace std;
// nicknaming a datatype
typedef unsigned long long int pnum;

// user-defined datatype {class/struct/union etc}
class positive_number
{
    pnum value;

public:
    positive_number(pnum x)
    {
        value = x;
    }
    pnum get_value()
    {
        return value;
    }
};

int main()
{
    // Primitive / predefined datatypes

    //  interger
    int x = 10;
    // Float point number
    float f = 10.10;
    // Double floating point number
    double d = 20.20;
    // character
    char c = 'c';
    // boolean
    bool b = true;

    // Derived  datatypes

    // arrays
    int array[3] = {1, 2, 3};

    // strings
    string text1 = "HELLO";
    char text3[6] = "HELLO";

    // pointer
    int *ptr = &x;

    // refrence
    int &ref = x;

    // User-defined Datatype
    positive_number num(9999999999);

    // printing out is optional
    cout << text1 << endl
         << text3 << endl
         << x << endl
         << f << endl
         << d << endl
         << b << endl
         << c << endl
         << array[0] << "," << array[1] << "," << array[2] << endl
         << *ptr << endl
         << ref << endl
         << num.get_value();

    return 0;
}