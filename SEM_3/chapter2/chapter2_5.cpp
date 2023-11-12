// Control Statement

#include <iostream>
using namespace std;

int main()
{ // **Filling 2d array
    int arr[3][3];
    /// A. LOOPS/ ITERATIVE Statements

    //  1.for
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        // 2.while
        while (j < 3)
        {
            arr[i][j] = i * 3 + j + 1;
            cout << arr[i][j] << " | ";
            j++;
        }
        cout << endl;
    }

    //**Capitalization of a string
    // 3. do while
    do
    {
        char text[6];
        cout << "ENTER THE  STRING :";
        cin >> text;

        // 4. foreach
        for (int i : text)
        {
            /// B. conditional statements
            // 1.if
            if (i == 0)
            {
                cout << endl;
            }
            // 2.else if
            else if (i >= 97 && i <= 122)
            {
                cout << (char)(i - 32);
            }
            // 3.else
            else
            {
            }
        }

    } while (false);

    //**Odd/Even
    // 4.switch
    int temp;
    cout << "ENTER THE NUMBER : ";
    cin >> temp;
    temp = temp % 2;
    switch (temp)
    {
    case 0:
        cout << "EVEN" << endl;
        /// C. Jump statements
        // 1.break
        break;
    default:
        cout << "ODD" << endl;
    }

    //**Simple Even number printer.

    int x = 0;
LOOP:
    x++;
    // ternary operator
    (x % 2) ? cout << " " : cout << x;

    if (x < 100)
    { // 2. goto
        goto LOOP;
    }

    return 0;
}