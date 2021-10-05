#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    string grade;
    cout << "Enter the number of your score : ";
    cin >> score;
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
    cout << grade << endl;
    return 0;
}