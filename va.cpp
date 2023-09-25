//WAP input a number check whether the number is palindrome or not using with argument and with return type.

#include<iostream>
using namespace std;

int palindrome (int);
int display(int, int);

int main()
{
	int num;
	
	cout << "Enter the number to check whether the number is palindrome or not: ";
	cin >> num;
	
	palindrome(num);
	
    return 0;
}

int palindrome (int num)
{
	int n, digit, rev=0;
	
	n = num;
	do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } 
	while (num != 0);

    return display(n, rev);
}

int display(int n, int o)
    {
        	if (n == o)
        cout << n << " is a palindrome.";
    else
        cout << n << " is not a palindrome.";
    
    return 0;
    }