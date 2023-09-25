
// overloading the Unary Minus operator

#include<iostream>

using namespace std;

class number
    {
        int x, y;
        public:
            number(int a, int b)
                {
                    x=a; y=b;
                }
            // void operator -() // using it as member function
            //     {
            //         x = -x;
            //         y = -y;
            //     }
            friend void operator -( number &s); // using friend function
            void display();

    };

    void operator -(number &s)
        {
            s.x = -s.x;
            s.y = -s.y;
        }

    void number :: display()
        {
            cout << x;
            cout << y;
        }
    
    int main()
        {
            number ob(2,3);

            -ob;
            ob.display();
            return 0;
        }
