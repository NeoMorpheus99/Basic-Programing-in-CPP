
#include <iostream>

using namespace std;
class A 
    {

    public:
        int add(int x, int y)
        {
            return (x + y);
        }

        double add(double x, double y)
        {
            return (x + y);
        }
        int add(int x, int y, int z)
        {
            return (x + y + z);
        }
    };



int main()
{

    A obj;
    cout << obj.add(2, 3) << endl;
    cout << obj.add(2.3, 4.5) << endl;
    cout << obj.add(2, 2, 2) << endl;

    return 0;
}