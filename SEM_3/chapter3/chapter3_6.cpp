// Passing of objects
#include <iostream>
using namespace std;

class tree
{
public:
    int height;
    void grow()
    {
        height++;
    }
};

// by value
tree Val_grow_tree(tree obj)
{
    obj.grow();

    return obj;
}

// by refrence
void Ref_grow_tree(tree &obj)
{
    obj.grow();
}
int main()
{
    tree t1;
    t1.height = 10;

    // by value call
    // creates a new object with modified value and returns it
    cout << "BY VALUE  : " << Val_grow_tree(t1).height << endl;

    // by Refrence call
    // Alter the object directly
    Ref_grow_tree(t1);
    cout << "BY REFERENCE  : " << t1.height << endl;

    return 0;
}