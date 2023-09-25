#include <iostream>
using namespace std;

class one
{
public:
    int x;
    one()
        {
            x = 10;
        }
    class two
        {
        public:
            int y;
            two()
            {
                y = 2;
            }
            void display()
        {
            one ob;
            cout << ob.x << y;
        }
        };
    
};

int main()
    {
        one::two ob;
        ob.display();
        return 0;
    }