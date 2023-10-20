/*
A class is a way to bind the data and its associated functions together, allowing it to e hidden.
*/

#include<iostream>
using namespace std;

class My_class
    {
        private:
            int x, y; //Variables
        public:
            void sum(int x, int y); //function
    };
void My_class :: sum(int x, int y)
    {
        cout << x+y;
    }

int main()
    {
        My_class a;
        a.sum(2,3);
    }