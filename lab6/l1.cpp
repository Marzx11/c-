#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    int a4 = 4;
    int a5 = 5;
    int a6 = 6;
    int a7 = 7;
    int a8 = 8;
    int a9 = 9;
    int a10 = 10;
    int sum2;
    int sum1;
    sum1 = a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
    cout << "Sum1 = " << sum1 << endl;
    for(int i = 0; i <= 10 ; i++)
        sum2 = sum2+i;
        cout << "Sum2 = " << sum2;
}