#include <iostream>
using namespace std;

int main(){
    int score;

    cout << "Enter your score : ";
    cin >> score;

    if(score > 100){
        cout << "Enter your score out of 100..." << endl;
    }
    else{
        char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 60) ? 'C' : (score >= 40) ? 'D' : 'F';

        cout << "Your grade is : " << grade << " ";

        switch (grade){
            case 'A' :
                cout << "Excellent work! ";
                break;

            case 'B' :
                cout << "Well done! ";
                break;

            case 'C' :
                cout << "Good job! " ;
                break;
            case 'D' :
                cout << "You passed, but could do better! ";
                break;
            case 'F' :
                cout << "Sorry but you failed! ";
                break;
        }

        if(grade >= 'A' && grade <= 'D'){
            cout << "You are eligible for next level : "; 
        } else{
            cout << "You are not eligible ";
        }
    }

    

    return 0;
}