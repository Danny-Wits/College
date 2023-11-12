// Storage classes , Comments

// This green lines ares comments which are ignored by the compiler and is not executed.
// created by // or
/*
for
multiple line
comment
*/

#include <iostream>
#include "extern.cpp"
using namespace std;

// 1.EXTERN: Using external storage class to getting the value of e from extern.cpp file
extern int e;

int *static_text();

int main()
{ // 2. REGESTER : These variables are stored in cpu registers instead of RAM for fast execution ,usually used in iterative statements;
    for (register int r = 0; true; r++)
    {
        // 3. AUTO : by default automatic storage class is applied;
        int a = 0;
        // 4 . STATIC : Used to create a variable that hold value even after the defining block of code is teminated
        static int s = 0;

        if (r == 10)
        {
            cout << "AUTO a = " << a << endl;
            cout << "STATIC s = " << s << endl;
            cout << "REGISTER r = " << r << endl;
            cout << "EXTERNAL e = " << e << endl;
            break;
        }
        s++;
        a++;
    }

    return 0;
}
