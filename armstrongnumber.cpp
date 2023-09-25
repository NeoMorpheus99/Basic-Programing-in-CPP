
//getting armstrong number from 1 to 500

#include<iostream>
#include <math.h>
using namespace std;

int main()
    {
        int i, j=153, rem, sum=0;
        //for(i=10; i<500; i++)
          //  {
                while(j!=0)
                {
                    rem = j % 10;
                    sum += pow(rem, 3);
                    j = j / 10;
                }
                if(sum == j)
                    {
                        cout << j;
                        sum = 0;
                    }
            //}
        return 0;
    }       