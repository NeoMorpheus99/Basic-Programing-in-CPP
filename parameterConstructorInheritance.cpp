//single inheritance
#include<iostream>
using namespace std;

class A{
    int x;
    public:
        A(int i){
            x=i;
            cout << x;
        }
};

class B:public A{
    int y, z;
    public:
        B(int i, int j):A(i){
            y=i; z=j;
            cout << y << z;
        }
};

int main()
    {
        B ob(2,3);
        return 0;
    }