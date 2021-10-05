#include<iostream>
#include<string>
using namespace std;
int main()
{
    char Ch;
    cout << "Enter character : ";
    cin >> Ch;
    cout << endl;
    if(Ch >= 98 && Ch <= 122)
    {
        cout <<"\'"<< Ch <<"\'"<< " is lower character." << endl;
        cout <<"\'" << Ch <<"\'"<< " convert to upper \'";
        Ch = Ch - ('a'-'A');
        cout << Ch << "\'";
    }
    else
    {
        cout <<"\'"<< Ch <<"\'"<< " is upper character." << endl;
        cout <<"\'"<< Ch <<"\'"<< "  to lower \'";
        Ch = Ch + ('a'-'A');
        cout << Ch <<"\'";
    }
    
return(0);
}