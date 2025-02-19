#include<iostream>

using namespace std;

int main(){
    char a;

    cout << "Enter any number or character = ";
    cin >> a;

    if((a >= 0) && (a <= 9)){
        cout << "Your Number is = " << a;
    } else if(isalpha(a)) {
        cout << "This is Alphabet" << a;
    } else{
        cout << "This is Special character" << a;
    }

    return 0;
}