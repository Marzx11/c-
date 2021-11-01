#include <iostream>
#include <string.h>
#include <iomanip>
#include<time.h>
using namespace std;

int main()
{
    int a[5][2];
    int scoretest[10][10];
    srand(time(NULL));
    int n;
    cout << "Enter : ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
           cout << ". Enter Score Test " << j+1 << " : " ;
            cin >> scoretest[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout <<"\t" << scoretest[i][j]  ;
        }
        cout << endl;
    }

    return(0);

}