#include <iostream>
using namespace std;
int main()
{
    int salary,total;
    int hour,totalh;
    char choice;
    cout << "Enter Salary : ";
    cin >> salary;
    cout << "Late (Y/N) : ";
    cin >> choice;
    switch(choice) 
    {
    case 'N' : salary += 1000;
        break;
    case 'Y' : salary += 0;
        break;
    default : cout << " "<< endl;
    }
    cout << "Over Time Hour (Y/N) : ";
    cin >> choice;
    switch(choice) 
    {
    case 'Y' : cout << "Enter OT Hour : ";
                cin >> hour;
                totalh = hour * 200;
                total = salary + totalh;
        break;
    case 'N' : total = salary;
        break;
    default : cout << " "<< endl;
    }
    cout << "Salary : " << total << endl;
    return(0);
}