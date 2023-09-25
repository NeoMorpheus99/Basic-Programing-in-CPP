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
            complex operator +(complex &ob)
                {
                    complex temp;
                    temp.x = x+ob.x;
                    temp.y =y+ob.y;

                    return temp;
                }
            void display()
                {
                    cout << x << " + " << y << "i";
                }
    };

    int main()
        {
            //complex ob1, ob2, ob3;
             complex ob1(2, 3), ob2(3, 4);
             complex ob3;
            ob3 = ob1+ob2;

            ob3. display();
            return 0;
        }