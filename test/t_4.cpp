#include <iostream>
#include <cstdlib>
#include <math.h>
#define pi 3.14
using namespace std;
int main()
{
    int n;
    float r,circum,area;
    double volume;
    cout <<"Enter the number of radius : ";
    cin >> r;
    cout << "1. Calculate the circumference of circle" <<endl;
    cout << "2. Calculate the area of circle"<<endl;
    cout << "3. Calculate the volume of phere"<<endl;
    cout << "Enter the choice :  ";
    cin >> n;
    
    switch(n)
    {
        case 1 :
            circum = 2.0*pi*r;
            cout << "circumference of circle : " << circum;
            break;
        case 2 :
            area=pi*pow(r,2);
            cout << "area of circle : " << area;
            break;
        case 3 :
            volume = (4.0/3.0) * pi *pow(r,3);
            cout << "volume of circle : "<< volume;
            break;  
        default : cout << "error";
    }
        
}