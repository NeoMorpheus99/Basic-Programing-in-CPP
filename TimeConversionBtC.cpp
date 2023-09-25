#include<iostream>
using namespace std;

class timer
    {
        int hr, min;
        public:
            timer(){};

            //using a one argument constructor

            // timer (int t)
            //     {
            //         hr= t/60;
            //         min = t%60;
            //     }

            //using operator overloading
            
            void operator =(int t)
                {
                    hr=t/60;
                    min=t%60;
                }

            void display()
                {
                    cout << hr << " Hours ";
                    cout << min << " mins";
                }
    };

int main()
    {
        timer ob;
        ob =155; // time in mins
        ob.display();
        return 0;
    }