//* File Handling
#include <iostream>

//? Standard header file for file handling
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    // WRITTING TO A FILE
    file.open("test.txt", ios::out);
    file << "HELLO";
    file.close();

    // READING FROM A FILE
    file.open("test.txt", ios::in);
    string text;
    file >> text;
    cout << text << endl;
    file.close();

    return 0;
}