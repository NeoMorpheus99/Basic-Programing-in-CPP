#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v)
    {
        for(int i=0; i<v.size();i++)
            {
                cout << v[i] << " ";
            }
        cout << "\n";
    }

int main()
    {
        vector<int> v;
        cout << "Initial Size: " << v.size() << "\n";

        int x; 
        cout << "Enter Five Interger Value: ";
        
    }