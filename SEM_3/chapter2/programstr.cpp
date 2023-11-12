// PROGRAM STRUCTURE

// 1.Links
// a. header files
#include <iostream>
// b. namespaces
using namespace std;

// 2. Global declaration

// a.Global variables
string x = "Hello World!";

// b. functions
void print()
{
    cout << x;
}
// c. classes
class run
{
public:
    run()
    {
        print();
    }
};

// 3. Main function
int main()
{
    // instantiating an object
    run r;
    return 0;
}
