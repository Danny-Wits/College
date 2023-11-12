// ARRAY OF OBJECTS
#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
    void get_info()
    {
        cout << "\nNAME : " << name << endl
             << "ROLL NO : " << roll_no << endl;
    }
};

int main()
{ // Array of objects
    student BCA[3];

    BCA[0].name = "UMAR";
    BCA[0].roll_no = 1;

    BCA[1].name = "WASEEM";
    BCA[1].roll_no = 2;

    BCA[2].name = "RAJU";
    BCA[2].roll_no = 3;

    // traversing info using for each
    for (student std : BCA)
    {
        std.get_info();
        cout << "_____________________\n";
    }
    return 0;
}