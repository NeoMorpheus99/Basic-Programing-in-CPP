#include<iostream>
#include<fstream>

using namespace std;

int main()
    {
        ofstream fout;
        fout.open("country"); // ctreating the file

        fout << "Bhutan";
        fout << "INdia";
        fout << "Druk";
        fout.close();

        fout.open("capital"); // ctreating the file

        fout << "Thimphu";
        fout << "Delhi";
        fout << "Thimthrom";
        fout.close();



    }