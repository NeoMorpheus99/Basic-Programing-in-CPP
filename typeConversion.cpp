#include<iostream>

using namespace std;

class one
    {
        int a;
        float b;

        public:
            void get_data(int x, int y){
                a=x; b=y;
            }
            void dis()
                {
                    cout << a << " " << b;
                }
    };

// //Pointer to object.
// int main()
//     {
//         one ob;
//         one *p =&ob;
//         p->get_data(2, 3.3);
//         p->dis();
    
//     }

int main()
    {
        one *ptr;
        ptr = new one[10];
        int x; float y;
        for(int i=0; i <10; i++)
            {
                cout << "Enter 2 number: ";
                cin >> x >> y;
                ptr->get_data(x, y);
                ptr->dis();
                ptr++;
            }
    }