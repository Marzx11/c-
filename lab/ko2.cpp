#include <iostream>
using namespace std;
int getNumBar();
void printBar(int barNum);
 
int main(int argc, char *argv[])
{
	int barNum[5];
	for(int i=0; i<5;i++)
	{
		barNum[i] = getNumBar();
        
	}
	
	cout<<"\n\n";
	for(int i=0; i<5;i++)
	{
		printBar(barNum[i]);
	}
 
	return 0;
}
 
int getNumBar()
{
	int barnum;
	cout<<"Enter a number: ";
	cin>>barnum;
	return barnum;
}
 
void printBar(int barNum)
{
	for(int i=0;i<barNum;i++)
	{
		cout  << "*";
	}
	cout<<"\n";
}