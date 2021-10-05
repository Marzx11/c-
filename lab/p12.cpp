#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
        int deposit = 0;
        double interestRate = 0.0;
        double acctBalance = 0.0;

        cout << "Deposite: ";
        cin >> deposit;
        cout << "Rate: ";
        cin >> interestRate;

        cout << fixed << setprecision(2);
        for (int year = 1; year < 4; year +=1 )
        {
            acctBalance =  getBalance(deposit, interestRate,year);
            cout << "Year" << year << ": $"  << acctBalance << endl;
        }
 
        return 0;
}
{

    double balance = 0.0;
    balance = amount * pow((1 + rate),y)
    return balance;
}
