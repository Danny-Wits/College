#include <iostream>
using namespace std;

// class declaration
class person
{
private:
    string name;
    short age;
    bool gender;

public:
    // declaring and defining a member function inside the class
    bool set_info(string name, short age, bool gender)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
    };
    // declaring the member function here and declaring it outside the class
    void get_info();
};

// Defining a member function outside the class
void person::get_info()
{
    cout << "NAME : " << name << endl
         << "AGE : " << age << endl
         << "GENDER :" << (gender ? "MALE" : "FEMALE") << endl;
}

int main()
{
    // object instantiation
    person p1;

    // calling a member functions
    p1.set_info("WASEEM", 20, true);
    p1.get_info();

    return 0;
}
