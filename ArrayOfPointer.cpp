#include<iostream>
using namespace std;

class num
    {
        int i;
        float f;

        public: 
            void getData(int a, float b)
                {
                    i=a; f=b;
                }
            void dis()
                {
                    cout << i << " " << f << endl;
                }
    };

int main()
    {
        num *ptr[10];

        for (int i =0; i <10; i++)
            {
                int x; float y;
                cout << "Enter Num " << i+1 << " : ";
                cin >> x >> y;
                ptr[i] = new num;
                ptr[i] ->getData(x, y);
            }
        for (int i=0; i<10; i++)
            {
                ptr[i]->dis();
            }
        return 0;
    }