// Error Handling
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y;
    cout << "ENTER THE DIVIDENT" << endl;
    cin >> x;
    cout << "ENTER THE DIVISOR" << endl;
    cin >> y;

    try
    {
        if (y == 0)
        {
            throw 0;
        }
        cout << "QUOTIENT : " << floor(x / y) << "  REMAINDER :" << x % y << endl;
    }
    catch (int e)
    {
        cout << "CAN'T DIVIDE BY  " << e << endl;
    }

    return 0;
}