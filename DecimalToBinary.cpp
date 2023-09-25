#include<iostream>

using namespace std;

int main()
    {
        int bin=0;
        int i, num, rem;
        cout<< "Enter: ";
        cin >> num;

        for(i=1; num > 0; i*=10)
            {
                rem = num%2;
                num = num/2;
                bin+=(rem*i);
            }
cout <<bin;
        return 0;

    }
