//ชญาดา แซ่อึ้ง
//ID 6406021622010
//Sec c
#include<iostream>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
using namespace std;
void print_first(int size, int randArray[],float percent[],float totalper);
int rand_num(int size, int randArray[],float percent[]);
int print_chairman(int size, int randArray[],float percent[],float totalper);

int main(int argc, char *argv[])
{
    int size;
    cout << "Enter number student chairman : ";
    cin >> size;
    int randArray[size],total;
    float percent[size];
    float totalper;
    srand (time (NULL));
    rand_num(size,randArray,percent);
    print_first(size,randArray,percent,totalper);
    print_chairman(size,randArray,percent,totalper);

}

int print_chairman(int size, int randArray[],float percent[],float totalper)
{
    int total = 0;
    cout << "Result of eletion chairman" << endl;
    cout << "----------------------------"<< endl;
    cout << setw(4) <<"|" << "No." << setw(4) <<"|" << "Votes" <<"|" << setw(4) << "Percent(%)" <<"|"<< endl;
    cout << "----------------------------"<< endl;
    for(int i=0;i<size;i++)
    {
    total += randArray[i];
    totalper = totalper+percent[i];
    cout << setw(4) <<"|" << i+1 << setw(4)  <<"|" << randArray[i] << setw(8) <<"|" << percent[i] <<"|" <<endl ;
    }
    cout << "----------------------------"<< endl;
    cout << "Total "<< total << setw(10) << "|" << totalper <<endl;
}

int rand_num(int size, int randArray[],float percent[])
{
    int s = 500;
    int total;
    float totalper;
    for(int i=0;i<size;i++)
    {
      randArray[i] = rand() % (s + 1); 
      s = s-randArray[i];
      total = total+randArray[i];
    }
    for(int i=0;i<size;i++)
    {
        percent[i] = (randArray[i]*100)/total;
        totalper = totalper+percent[i];
    }
}
void print_first(int size, int randArray[],float percent[],float totalper)
{
    int total = 0;
    cout << "Number of rigth student : 500 "<< endl;
    for(int i=0;i<size;i++)
    {
        total += randArray[i];
    }
    cout << "Number of Votes : " << total << " = " << (total*100)/500 << " %"<<endl;
    cout << "Number of not Votes : " << 500-total << " = " << (500-total)*100/500 << " %" <<endl;
}