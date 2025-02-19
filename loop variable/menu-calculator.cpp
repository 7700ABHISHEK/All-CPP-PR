#include <iostream>

using namespace std;

int main(){
    int i, a, b, choice;

    do{
        cout << "Enter A and b :- ";
        cin >> a >> b;

        cout << "Enter 1 for (+) :-\n";
        cout << "Enter 2 for (-) :-\n";
        cout << "Enter 3 for (*) :-\n";
        cout << "Enter 4 for (/) :-\n";
        cout << "Enter 5 for Exit :-\n";
        cin >> choice;

        switch (choice){
        case 1:
            cout << "Addition of A and B is " << a+b ;
            break;
        case 2:
            cout << "Substraction of A and B is " << a-b ;
            break;
        case 3:
            cout << "Multiplication of A and B is " << a*b ;
            break;
        case 4:
            cout << "Divition of A and B is " << a/b ;
            break;
        case 5:
            cout << "Thank you, Visit Again";
        default:
            cout << "Invalid Number";
        }

    } while(choice >= 5);

    return 0;
}