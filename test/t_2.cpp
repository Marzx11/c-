#include <iostream>
using namespace std;
int main()
{
    int score = 0;
    int p,m,f,n;
    string grade;
     cout << "Enter Project score : ";
    cin >> p;
    cout << "Enter Midterm score : ";
    cin >> m;
    cout << "Enter Final score : ";
    cin >> f;
    if(p >= 20)
    {
        p = 0;
        cout << "Project score Error !!!" << endl;
    }
    else
        {
           score += p;
        }
    if(m >= 30)
    {
        m = 0;
        cout << "Midterm score Error !!!" <<endl;
    }
    else
        {
           score += m;
        }
    if(f >= 50)
    {
        f =0;
        cout << "Final score Error !!!" <<endl;
    }
    else
        {
           score += f;
        }
    cout << "Total score : " << score <<endl;

    if (score >= 0 && score <= 100)
    {
        if (score >= 80 && score <= 100)
        {
            grade = "A";
        }
        else if (score >= 70 && score <= 79)
        {
            grade = "B";
        }
        else if (score >= 60 && score <= 69)
        {
            grade = "c";
        }
        else if (score >= 50 && score <= 59)
        {
            grade = "D";
        }
        else
        {
            grade = "F";
        }
    }
    cout << "Grade : " << grade << endl;
    return 0;
}