#include <iostream>

using namespace std;

int main(){
    int choose;

    cout << " Enter 1 for Pizza \n Enter 2 for burger \n Enter 3 for sandwich \n";
    cout << "Enter your Choice = ";
    cin >> choose;

    if(choose == 1){
        cout << "Your Pizza is here";
    } else if (choose == 2) {
        cout << "Your Burger is here";
    } else if (choose == 3){
        cout << "Your sandwich is here";
    } else{
        cout << "invalid number";
    }
    
    return 0;
}