#include<iostream>
#define loop(x) for(int i=0; i<x; i++)

using namespace std;

class numberSystem
    {
        private: 
            int dig; 
            int bin[32];

        public: 
            void getDetails();
            void binaryFunction();
            void displayDetails();
    };

void numberSystem::getDetails()
    {
        cout << "Enter the Num: ";
        cin >> dig;
    }

void numberSystem::binaryFunction()
    {
        int i;
        for(i=0; dig>0; i++)
            {
                bin[i] = dig%2;
                dig/=2;
            }
        cout << "Binary Number: ";
        for(i-=1; i>=0; i--)
            {
                cout << bin[i];
            }
    }

void numberSystem::displayDetails()
    {
        
    }

int main()
    {
        numberSystem check;
        check.getDetails();
        check.binaryFunction();

        //check.displayDetails();


        
        return 0;
    }
