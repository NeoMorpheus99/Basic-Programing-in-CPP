
//norm Matrix : square root of sum of the square of all the elements

#include<iostream>
#include<math.h>
#define LOOPROW(r) for(int i=0;i<r; i++ )
#define LOOPCOL(c) for(int j=0; j<c; j++)
using namespace std;

int main()  
    {
        int arr[10][10], row, col;
        float sum=0, norm;
        cout << "Enter the number of rows and columns: ";
        cin >> row >> col;

        LOOPROW(row)
            {
                LOOPCOL(col)
                    {
                        cout << "Element " << i << " : " << j << " ";
                        cin >> arr[i][j]; 
                    }
            }
        
        cout << "Matrix: \n";
        LOOPROW(row)
            {
                LOOPCOL(col)
                    {
                        cout << arr[i][j] << "\t";
                    }
                cout << endl; 
            }
        
        LOOPROW(row)
            {
                LOOPCOL(col)
                    {
                        sum +=pow(arr[i][j],2);
                        norm = sqrt(sum); 
                    }
            }
            
        cout <<"SOS: " << sum << endl;
        cout << "Norm : " << norm;
        return 0;



    }