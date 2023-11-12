// New & Delete operator
#include <iostream>
using namespace std;

int main()
{
    // using new to allocate memory from heap

    int *array = new int[2];
    array[0] = 1;
    array[1] = 2;

    cout << "BEFORE DELETE : " << array[0] << "," << array[1] << endl;

    // freeing up the allocated memory using delete
    delete[] array;
    // checking if memory is free ...
    cout << "AFTER DELETE : " << array[0] << "," << array[1];

    return 0;
}
