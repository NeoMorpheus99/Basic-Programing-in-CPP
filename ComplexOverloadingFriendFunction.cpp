#include<iostream>
using namespace std;

class complex
    {
        int x, y;
        public:
            complex(){};
            complex(int a, int b)
                {
                    x=a; y=b;
                }
            friend complex operator +(complex &, complex&);
            void display()
                {
                    cout << x << " + " << y << "i";
                }
    };

    complex operator+(complex &a, complex &b)
        {
            return complex((a.x+b.x),(a.y+b.y));
        }

    int main()
        {
            //complex ob1, ob2, ob3;
             complex ob1(2, 3), ob2(3, 4);
             complex ob3;
            ob3 = operator+(ob1,ob2);

            ob3. display();
            return 0;
        }