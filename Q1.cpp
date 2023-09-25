#include <iostream>
using namespace std;

class counter {  
    static int count;

    public:
        counter () {
            count++;
        }
        
        void display () {
            cout << "Total objects created: " << count << endl;
        }
};

int counter::count;

int main() {

    counter ob1, ob2;
    ob1.display();
    ob2.display();
    return 0;
}