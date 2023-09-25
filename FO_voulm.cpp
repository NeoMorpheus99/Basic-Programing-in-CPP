//WAP to overload volumn function to calculate volumne of a cube and a vloumne of a cylinder using function overloading


#include <iostream>

using namespace std;

class vol
    {
        private:
            int x;
            int y;

        public:
            int volumn(int x)
                {
                    return(x*x*x);
                }
            double volumn(int x, int y)
                {
                    return (3.14*(x*x)*y);
                }
    };

int main ()
    {
        vol shape;
        cout<< "cube: \n";
        cout << shape.volumn(2);
        cout<< "\ncylinder: \n";
        cout<< shape.volumn(2,3);
    }