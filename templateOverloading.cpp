#include<iostream>
using namespace std;
template<class T>
class A
    {
        public: 
            T c;
            void input(T a)
                {
                    c= a;
                    cout << c;
                }
            void input(int b)
            {   
                cout << b;
            }
    };
    int main()
        {
            A<char> ob1;
            ob1.input('c');
            ob1.input(2);
            //A ob2;
            //ob2.input(2);
        }