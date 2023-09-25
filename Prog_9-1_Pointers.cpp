#include<iostream>
#include<conio.h>
using namespace std;

class number   
    {
        private:
            int x; 
            int y;
        public:
            void getNum();
            void sum();
            void dis();
    };
    
    void number::getNum()
        {
            cout<<"Enter the numbers: ";
            cin >> x >> y;
        }
    void number::sum() 
        {
           cout<< ++x;
           cout << ++y;
        }
    
    void number::dis()
        {
            cout << x;
            cout << y;
        }
int main()
    {
        
        number data;

        // int a, *ptr1, **ptr2;
        // ptr1= &a;
        // ptr2=&ptr1;

        // cout << "a address: " <<ptr1;
        // cout << "ptr1 address: "<<ptr2;

        // cout<<"\n\n";
        // ptr1 +=2;
        // ptr2 +=2;
        // cout<< "a adress : " << ptr1;
        // cout << "ptr1 adres: "<< ptr2;






    }