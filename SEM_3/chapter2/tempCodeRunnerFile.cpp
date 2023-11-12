// #pragma once
// int e = 10;
#include <iostream>
using namespace std;

int main()
{
    int length;

    cin >> length;

    int *arr = new int[length];

    for (int i = 0; i < length; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " " << endl;
    }

    delete[] arr;

    return 0;
}