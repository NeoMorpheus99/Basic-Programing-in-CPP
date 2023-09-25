//WAP to add two objects of time class. 
//Overload the operator ‘==’ to compare two objects and display whether 
//they are equal or not. Overload the assignment operator.

#include <iostream>
using namespace std;

class timer
    {
        int hr; 
        int min;
        int sec;
        public:
            timer(){};
            timer(int h, int m, int s){
                hr=h;min=m;sec=s;
            }
            timer operator+(timer ob){
                timer temp;
                temp.hr = hr+ob.hr;
                temp.min = min+ob.min;
                temp.sec= sec+ob.sec;

                while(temp.sec>60)
                    {
                        temp.min++;
                        temp.sec-60;
                        while(temp.min>60){
                            temp.hr++;
                            temp.min-60;
                        }
                    }
                return temp;
                }
            void display()
                {
                    cout << hr << ":" << min <<":"<< sec << endl;
                }
    };

int main()
    {
        timer ob1(2, 35, 45), ob2 (3, 40, 56);
        timer ob3;

        ob3 =ob1+ob2;
        ob3.display();
        return 0;

    }