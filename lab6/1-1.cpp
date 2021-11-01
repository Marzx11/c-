
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

bool ispalindrome(string p)
{
    bool val;
for(int i = 0; i < p.size()/2;i++)
  {
    if (p[i] != p[p.size()-1-i])
    {
        cout << p[i] << " = " << p[p.length()-1-i] << endl ;
        val +=  true;
        break;
    }
    else 
    {
        cout << p[i] << " = " << p[p.length()-1-i] << endl;
        val += false;

    }
  }
    return val;
}

int main()
{
    string palin;
    cout << "Enter Text : ";
    cin >> palin;
    cout << "\n";

    if (ispalindrome(palin))
    {
        cout << "Your Text is Not Palindrome.";
    }
    else
    {
       cout << "Your Text is Palindrome.";
    } 
    return(0);
}