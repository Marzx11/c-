#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
char *months(int m);
char *monthmm(int month);
int main()
{
    string m;
    char slash,*str,*str2;
    int date,month,year;
    str = (char *) malloc(12);
    str2 = (char *) malloc(12);
    cout << "Input Date(dd/mm/yyy) : ";
    cin >> date >> slash >> month >> slash >> year;
    strcpy(str,months(month));
    strcpy(str2,monthmm(month));
    cout << "Format 1: " << str << " "<< date << ","<< year << endl;
    cout << "Format 2: " << date << " " << str2 <<" "<< year << endl;
    return(0);
}
char *months(int month)
{
    static char* sm[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    return sm[month-1];
}
char *monthmm(int month)
{
    static char* sm[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    return sm[month-1];
}