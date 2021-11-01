#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void gen_number(int *x,int n);
void checkgrade(int *x,int n);
void checkgrade(int *x,int n,char grade[]);
void display(char grade[],int a,int b,int c,int d,int f,int n,int *x);

int main()
{
    int n;
    cout << "Enter the number of students : ";
    cin >> n ;
    int *x;
    x = new int[n];
    char grade[100];
    gen_number(x,n);
    checkgrade(x,n,grade);
    int a,b,c,d,f;
    display(grade,a,b,c,d,f,n,x);
    return(0);
}

void gen_number(int *x,int n)
{
    srand(time(0));
    for(int i = 0 ; i < n ; i++) 
    {
        x[i] = rand() % 100+1;
    }
}

void checkgrade(int *x,int n,char grade[])
{
    for(int i = 0 ; i < n ; i++) 
    {
        if(*(x+i) > 80)
            grade[i] = 'A';
        else if(*(x+i) >= 70)
            grade[i] = 'B';
        else if(*(x+i) >= 60)
            grade[i] = 'C';
        else if(*(x+i) >= 50)
            grade[i] = 'D'; 
        else
            grade[i] = 'F';   
    }
}

void display(char grade[],int a1,int b1,int c1,int d1,int f1,int n,int *x)
{
    
    int fre[100];
     for(int i = 0 ; i < n ; i++) 
    {
        if(*(x+i) > 80)
            a1 += 1;
        else if(*(x+i) >= 70)
            b1 += 1;
        else if(*(x+i) >= 60)
            c1 += 1;
        else if(*(x+i) >= 50)
            d1 += 1;
        else
            f1 += 1;  
    }
    for(int j = 0 ; j < n ; j++) 
    {
        if(*(x+j) > 80)
            fre[j] = a1;
        else if(*(x+j) >= 70)
            fre[j] = b1;
        else if(*(x+j) >= 60)
            fre[j] = c1;
        else if(*(x+j) >= 50)
            fre[j] = d1;
        else
            fre[j] = f1;
    }  

    cout << "- - - - - - Report Grade Student - - - - - - - -" <<endl;
    cout << "------------------------------------------------" <<endl;
    cout << "| " << setw(4) << "  No. " << "|" << setw(4) << "   Score "  << "  |" << setw(2) << "Grade " << setw(4) << "| " << setw(4)<< "Frequency " << setw(4) << "|" <<endl;
    cout << "------------------------------------------------" <<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << "| " << setw(4) << i+1 << "   | " << setw(4) << *(x+i) << "    | "  << setw(4) << grade[i] << "    |"  << setw(4) << fre[i] << setw(8) << "    |" <<endl;
    }
    cout << "------------------------------------------------" <<endl;
}