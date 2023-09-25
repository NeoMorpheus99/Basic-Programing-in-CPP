#include<iostream>
#define loop(x) for(int i=0; i< x; i++)
#define loopM for(int m=0; m<5; m++)
using namespace std;

class student
    {
        private:
            char name[10];
            int Roll;
            float marks[5];
            float total;
        
        public:
            void getDetails();
            void totalMarks(int n);
            void display(int n);
    };

void student::getDetails()
    {
        loop(n)
            {
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter Roll: ";
                cin >> Roll;
                loopM
                    {
                        cout << "sub " << m+1 << " : ";
                        cin >> marks[m];
                    }
            }
    }
void student::display()
    {
        loop(n)
            {
                cout << "name: " << name <<endl;
                cout << "roll: " << Roll <<endl;
                loopM
                    {
                        cout<<"marks: " << m+1 << " : ";
                        cout << marks[m];
                    }
                cout<<endl;
            }
    }

int main()
    {
        int no;
        student data[10];

        cout<< "number of studnet";
        cin >> no;
        loop(no)
            {
                data[i].getDetails(no);
            }

        loop(no)
            {
                data[i].display(no);
            }
        
        
    }