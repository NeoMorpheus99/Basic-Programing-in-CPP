//Create a class student which stores name, roll number and age of a student. Derive a class test
//from student class, which stores marks in 5 subjects. Input and display the details of a student.

#include<iostream>

using namespace std;

class student{
    char name[10];
    int roll;
    int age;

    public:
    void baseInput()
        {
            cout << "Enter roll: ";
            cin >> roll;
            cout <<"Enter name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
        }
    void displayBase(){
        cout << "\nRoll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class test: public student{
    
        protected:
        float marks[5];

    public :
        void getmarks(){
            baseInput();
            for(int i=0; i< 5; i++)
                {
                    cout << "Enter Marks : ";
                    cin >> marks[i];
                }
        }
        void displayMarks(){
            displayBase();
            for(int i=0; i< 5; i++)
                {
                    cout << "Marks : " << marks[i] << endl;
                }
        }
};

class sports{
    protected:
        float sports;
    public:
        void getsports(){
            cout << "Enter Sports marks: ";
            cin >> sports;
        }
};

class result: public test, sports{
    float total = 0.0;
    float percent;

    public:
        void marksTotal(){
            getmarks();
            getsports();
            
            for (int i =0; i<5; i++)
                {
                    total += marks[i];
                }
            
            total += sports;
            percent = (total/6);

            cout << "Total: " << total << " Percent: " << percent;

        }
};

int main()
    {
        result ob;
        ob.marksTotal();
        return 0;
    }