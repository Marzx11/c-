#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int bin,dec=0,i,m,n=1;
	cout << "Enter binary number : ";
	cin >> bin;
	for(i=bin;i>0;i=i/10){
		m=i%10;
		dec=dec+(m*n);
		n=n*2;
	}
	cout << "Decimal value of " << bin << " = " << dec;
}