// TYPES OF FUNCTIONS IN CPP
#include <iostream>
using namespace std;

// 1: Inline function :used to transfer the whole function definition at the place where it was called
inline int square(int x) { return x * x; }

// 2.Friend Functions : used to access private members of a class
class temp
{
private:
    int pri = 10;

public:
    friend int get_private_member(temp &obj);
};

int get_private_member(temp &obj)
{
    return obj.pri;
}

// 3.Virtual Function : used to redefine function at runtime . i.e. runtime polymorphism.

class parent
{
public:
    virtual void virtual_function()
    {
        cout << "PARENT\n";
    }
    void non_virtual_function()
    {
        cout << "PARENT\n";
    }
};

class child : public parent
{
public:
    void virtual_function()
    {
        cout << "CHILD\n";
    }
    void non_virtual_function()
    {
        cout << "CHILD\n";
    }
};

// 4. Recursive functions : used for recursion
// sum of n natural numbers
int sum(int x)
{ // base condition
    if (x == 1)
    {
        return 1;
    }
    // recursive part
    return x + sum(x - 1);
}

int main()
{
    // inline
    {
        int num = 10;
        cout << "NUMBER : " << num << " SQUARE  : " << square(num) << endl;
    }

    // friend
    {
        temp obj;
        cout << "PRIVATE MEMBER : " << get_private_member(obj) << endl;
    }

    // vitrual
    {
        parent *obj;
        child obj_child;
        obj = &obj_child;

        // virtual function is redefinded at runtime and child variation of the function is called as per the refrence i.e. obj_child
        obj->virtual_function();
        // non virtual function is binded at complile time and the parent variation is called
        obj->non_virtual_function();
    }

    // recursive
    {
        cout << "Sum upto 20 whole numbers : " << sum(20);
    }

    return 0;
}