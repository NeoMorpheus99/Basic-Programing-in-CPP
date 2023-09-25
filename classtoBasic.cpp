#include<iostream>
using namespace std;

class cont  
    {
        int x;
        public:
        cont(){};
        cont(int b)
            {
                x=b;
            }
            operator int()
                {
                    return x*x;
                }
            
    };

    int main()
        {
                cont ob(3);
                int b = ob;

                cout << b;
                return 0;
        }