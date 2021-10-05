#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
  cout << "Enter 6number : ";
cin >> str;
    char first = str[0];
    char second = str[1];
    char third = str[2];
    char last = str[str.length() - 1];
    cout  << first << endl;
    cout << second << endl;
    cout << third << endl;
    cout << last << endl;

    return 0;
}