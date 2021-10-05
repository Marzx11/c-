#include <iostream>
using namespace std;
int main()
{
    int score,Project,Midterm,Final;
    for (int i = 0; i < 3; i++) {
    cout << "Enter Project score : ";
    cin >> Project;
    cout << "Enter Midterm score : ";
    cin >> Midterm;
    cout << "Enter Final score : ";
    cin >> Final;
    if(Project >= 0 && Project <= 20){
        score += Project;
    }
    else{
        cout << "Project score Error !!!"<< endl;
        score += 0;
    }
    if(Midterm >= 0 && Midterm <= 30){
        score += Midterm;
    }
    else{
        cout << "Midterm score Error !!!" << endl;
        score += 0;
    }
    if(Final >= 0 && Final <= 50){
        score += Final;
    }
    else{
        cout << "Final score Error !!!" << endl;
        score += 0;
    }
    if(score >= 80 && score <= 100){
        cout << "Total Score : " << score << endl;
        cout << "Grade : A"<< endl;

    }
    else if(score < 80 && score >= 70){
        cout << "Total Score : " << score << endl;
        cout << "Grade : B"<< endl;
    }
    else if(score < 70 && score >= 60){
        cout << "Total Score : " << score << endl;
        cout << "Grade : C"<< endl;
    }
    else if(score < 60 && score >= 50){
        cout << "Total Score : " << score << endl;
        cout << "Grade : D"<< endl;
    }
    else if(score < 50 && score >= 0){
        cout << "Total Score : " << score << endl;
        cout << "Grade : F"<< endl;
    }
    else{
        cout << "Total Score : 0"  << endl;
        cout << "Grade : "<< endl;
    }
    score = 0;
    }
    return (0);
}