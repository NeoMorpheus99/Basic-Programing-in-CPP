#include <iostream>
using namespace std;

static int  x= 5;

class a{
    public:
        static int x;
};

int a::x = 15;

int main() {
    a ob;
    int x= 12;
    
    cout << "Global Static Varable: " << ::x<< endl;
    cout << "Public Static Varable: " << ob.x<< endl;
    cout << "Local Static Varable: " << x<< endl;
    

    return 0;
}