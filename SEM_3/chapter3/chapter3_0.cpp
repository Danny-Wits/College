#include <iostream>
using namespace std;

// class declaration
class student
{
public:
    string name;
    int roll_no;
    short age;
    bool gender;
    void get_info()
    {
        cout << "NAME : " << name << endl
             << "AGE : " << age << endl
             << "GENDER :" << (gender ? "MALE" : "FEMALE") << endl
             << "ROLL NO : " << roll_no;
    }
};

int main()
{
    // object instantiation
    student s1;
    s1.name = "UMAR";
    s1.age = 10;
    s1.gender = true;
    s1.roll_no = 1;
    // calling a member function
    s1.get_info();
    return 0;
}