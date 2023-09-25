#include<iostream>
using namespace std;

int main()
    {
        int arr[10],i, num;
        cout << "Enter: ";
        cin >> num;

        for(i=0; num>0; i++)
            {
                arr[i] = num%2;
                num/=2; 
            }

        cout << i;

        // for (i-=1; i>=0; i--)
        //     {
        //         cout << arr[i];
        //     }
        return 0;
    }