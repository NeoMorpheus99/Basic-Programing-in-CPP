#include<iostream>
using namespace std;

class name  
    {
        int x;
        public: 
            name(){};
            
            //using one argument constructor
            name(int a)
                {
                    x=a;
                }
            
            // using operator Overloading 
            void operator =(int a)
                {
                    x=a;
                }
            void display()
                {
                    cout << x;
                }
    };
int main()
    {
        name ob;
        ob= 2;
        ob.display(); 
        return 0;
    }