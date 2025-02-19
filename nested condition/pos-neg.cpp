#include<iostream>

using namespace std;

int main(){
    int a;

    cout << "Enter any number = ";
    cin >> a;

    if(a == 0){
        cout << "It's a neutral number";
        return 0;
    } 

    if(a > 0){
        cout << "A is Positive";
    } else {
        cout << "A is negative";
    }

    return 0;
}