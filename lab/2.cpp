#include<iostream>
using namespace std;
int main()
{
    cout << "Display sqaure of number 1 to 10.\n";
    cout << "================================\n";
    cout << "\tX\tX^2\n";
    cout << "================================\n";
    int I,X,Num_Cale1, Num_Cale2, Num_Cale3;
    cin >> I;
    cin >> X;
    while(I <= X) {
    Num_Cale1 = I % 2;
    Num_Cale2 = I % I;
    Num_Cale3 = I % 1;
        if((Num_Cale1 != 1)&&(Num_Cale2 == 0)&&(Num_Cale3 == 0))
    {
        cout << "\t"<< I << "\t"<< I*I << endl;
        I++;
    }
    }
return(0);
}