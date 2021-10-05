#include<iostream>
using namespace std;
int main()
{
    float principal,rate,result;
    int year;
    cout<<"Enter Principal : ";
    cin>>principal;
    cout<<"Enter Interate  in % : ";
    cin>>rate;
    cout<<"Enter Year : ";
    cin>> year;
    cout << "|   Principle   |   Year    |   INTEREST  |"<<endl;
    cout << "-------------------------------------------"<<endl;
    //result=principal*(rate/100)*(float)year;
    int amount, r;
    for (int i = 1 ; i <= year; i++ )
    {
        principal = principal * (1+(rate/100)); 
        //rate = principal * rate/100 ;
        cout << "      "<< principal  << "     |" <<"      "<< i << "     |" <<"      "<< rate/100*principal << "     |" << endl;
        }
    //for (int a = 1 ; a <= rate ; a++ )
      //   cout << "      "<< a << "     |" << endl;
    
    //result=result+ principal;
    //cout<<"\nTotal amount="<<result;
    return 0;
}
