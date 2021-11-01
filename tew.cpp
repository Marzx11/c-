#include <iostream>
#include <string.h>
#include <iomanip>
#include<time.h>
using namespace std;
void menu();
int choice1();
int choice2(int en,int stch[]);
int main()
{
    int cn,en,stch[0];
    char choice;
    bool flag = true;
    do{
        menu();
        cin >> choice;
        if(choice == '1'){
            choice1();
        }
        else if(choice == '2'){
            choice2(en,stch);
        }
        else if(choice == '3'){
            choice2(en,stch);
        }
    }while(flag);
    cout << "\n . . . Exit Program . . .\n";
    return(0);
}

void menu()
{
    int cn,en,stch[0];
    cout << "Main menu Election" <<endl;
    cout << "========================" <<endl;
    cout << "1. Input number of students" <<endl;
    cout << "2. Random result election" <<endl;
    cout << "3. Summary Result of Election" <<endl;
    cout << "4. Report Result of Election" <<endl;
    cout << "5. Exit" <<endl;
    cout << "Select Choice : ";
    //
}
int choice1()
{
    int en;
    cout << "Enter Number of right student : ";
    cin >> en;
    cout << "Number of right student to " << en << "."<<endl;

    return(en);
}
int choice2(int en,int stch[])
{
    int years;
    srand(time(NULL));
    for(int i=0;i<en;i++)
    {
        stch[i] = rand() % 5+1;
    }

    for(int i=0;i<en;i++)
        //for(int j=0;j<=4;j++)
           // for(int k=0;k<en;k++)
            {
                cout << "Year " << ", Student # " << i+1 << ":" << "select " <<endl;
            }

}
int choice3(int en,int stch[])
{
    for(int i=0;i<)
}