// CONSTRUCTOR AND DESTRUCTOR
#include <iostream>
using namespace std;

class package
{
    int *pack_no = new int;

public:
    // Constructor
    package(int x)
    {
        *pack_no = x;
        cout << "PACKAGE CREATED " << endl;
    }
    // Destructor
    ~package()
    {
        // freeing up the memory used by the object
        delete pack_no;
        cout << "PACKAGE DESTROYED" << endl;
    }
    int *info()
    {
        return pack_no;
    }
};

int main()
{
    cout << "MAIN STARTS" << endl;
    int *info;
    // object instantiation
    {
        package p1(10);
        info = p1.info();
        cout << "BEFORE DESTRUCTION : " << *info << endl;
    }
    cout << "AFTER DESTRUCTION : " << *info << endl;

    cout << "MAIN ENDS" << endl;

    return 0;
}