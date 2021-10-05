#include<iostream>
#include <iomanip> 
#include<string.h>
using namespace std; 
void getdataidname(string (&idname)[5][2]);
void getdat_test(int scoretest[5][3]);
void averge(int scoretest[5][3],float scoreaverage[5][3]);
void tdata(std::string (&idname)[5][2],float scoreaverage[5][3],std::string (&totaldata)[5][5]);
void displaydata(std::string (&idname)[5][2],int scoretest[5][3],float scoreaverage[5][3],std::string (&totaldata)[5][5]);

int main() 
{  
    int r = 5;
    int c = 2;
    const int max = r;
    std::string idname[5][2];
    std::string totaldata[5][5];
    int scoretest[5][3];
    float scoreaverage[5][3];
    getdataidname(idname);
    getdat_test(scoretest);
    averge(scoretest,scoreaverage);
    tdata(idname,scoreaverage,totaldata);
    displaydata(idname,scoretest,scoreaverage,totaldata);
}

void getdataidname(string (&idname)[5][2])
{
    int r = 5,c = 2;
     for(int i=0;i<r;i++)  
    {
        for(int j=0;j<c;j++)
        {
        cout << i+1 << ". Enter id&name : ";
        cin >> idname[i][j];
        }
        cout << "----------------------------------\n";
    }
}
void getdat_test(int scoretest[5][3])
{
    int r = 5,c = 3;
    int numdata[c] = {1,2,3};
    int num[r] = {1,2,3,4,5};
     for(int i=0;i<r;i++)  
    {
        for(int j=0;j<c;j++)
        {
        cout << num[i] << ". Enter Score Test " << j+1 << " : " ;
        cin >> scoretest[i][j];
        }
        cout << "----------------------------------\n";
    }
}
void averge(int scoretest[5][3],float scoreaverage[5][3])
{
    int r = 5,c = 3;
     for(int i=0;i<r;i++)  
    {
        for(int j=0;j<c;j++)
        {
            if(j < 2 )
            {
                scoreaverage[i][j] = scoretest[i][j]*0.25;
            }
            else
            {
                scoreaverage[i][j] = scoretest[i][j]*0.50;
            }
        } 
    }
}
void sortdata(const int max)
{

}
void tdata(std::string (&idname)[5][2],float scoreaverage[5][3],std::string (&totaldata)[5][5])
{
    int r = 5,c = 2,n = 3,t = 6;
    int i,j,k;
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;j++)
        {
            totaldata[i][j] = idname[i][j];
        }
    }
    k=i;
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;j++)
        {
            totaldata[k][j] = scoreaverage[i][j];
        }
    }

}

void displaydata(std::string (&idname)[5][2],int scoretest[5][3],float scoreaverage[5][3],std::string (&totaldata)[5][5])
{
    int r = 5,c = 2,n = 3;
    cout << "--------------------------------------------------------------\n";
    cout << "  No." << "\tId" << "\tName" << "\ttest1(25%) " << "\ttest2(25%) " << "\ttest3(50%) " << "\tTotal(100%) \n";
    cout << "--------------------------------------------------------------\n";
     for(int i=0;i<r;i++)
    {
        cout << i+1 << ". ";
        for(int j=0;j<r;j++)
        {
            cout <<"\t" << totaldata[i][j];
        }
        cout <<endl;
    }
}


