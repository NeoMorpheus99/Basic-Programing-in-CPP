#include<iostream>
using namespace std;

class assign    
    {
        int x, y;
        public:
            friend istream &operator >>(istream &, assign&);
            friend ostream &operator << (ostream&, assign&);
    };
istream &operator >> (istream &in, assign &ob)
    {
            in >> ob.x >> ob.y;
            return in;
    }
ostream &operator << (ostream &out , assign &ob)
    {
        out << ob.x << ob.y;
        return out;
    }

int main()
    {
        assign ob1;
        cin >> ob1;
        cout << ob1;
        return 0;
    
    }
