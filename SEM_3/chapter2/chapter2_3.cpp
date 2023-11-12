// Scope resulution operator  ::

#include <iostream>
std::string text = "GLOBAL";
class human
{
    short age;

public:
    human(short x)
    {
        age = x;
    }
    int get_age();
};

// 1. Used to declare member functions outside of a class
int human::get_age()
{
    return age;
}

int main()
{
    human h(20);
    std::cout << h.get_age();
    // 2.Accessing identifiers from a Namespace eg : std::cout
    std::cout << "\n";

    // 3.Accessing GLOBAL VARIABLE
    using namespace std;
    string text = "LOCAL";
    //:: to acces global value of text
    cout << ::text << endl;
    cout << text;

    return 0;
}