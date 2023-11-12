// TYPES OF CLASS MEMBERS : PUBLIC PRIVATE PROTECTED STATIC
#include <iostream>
using namespace std;

class parent
{

private:
    // private member
    string pri = "PRIVATE";

public:
    // public members
    string pub = "PUBLIC";

    string get_private_member()
    {
        return pri;
    };

    // static member
    static int shared;

protected:
    // protected member
    string pro = "PROTECTED";
};

// static memeber defination(very imp)
int parent::shared;

class child : parent
{
public:
    string get_protected_member()
    {
        return pro;
    };
};

int main()
{
    // object instantiation
    parent p;
    child c;

    // public members are directly accessable
    cout << p.pub << endl;

    // private members can only be accessed by the member functions of that class
    cout << p.get_private_member() << endl;

    // protected members can be accessed by the member functions of the class and its childs
    cout << c.get_protected_member() << endl;

    // static members are shared by all the objects of the same class
    parent p1;
    parent p2;
    p1.shared = 10;

    cout << "P1 : " << p1.shared << "  P2 : " << p2.shared << endl;
    return 0;
}