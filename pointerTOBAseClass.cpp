#include <iostream>
using namespace std;

class base
{
public:
    virtual void display() //virtual keyword used in the base class
    {
        cout << "Hello ";
    }
    virtual void show()
    {
        cout << "World ";
    }
};

class derived : public base
{
public:
    void display()
    {
        cout << "Hi ";
    }

    void show()
    {
        cout << "Earth";
    }
};

int main()
{
    base *ptr, b;
    ptr = &b;
    ptr->display();
    ptr->show(); // compiler will execute the base as the type of the pointer is bsae class

    derived ob2;
    ptr = &ob2;
    ptr->display(); // function call to the derived class function
    ptr->show(); // function call to the derived class function

    return 0;
}