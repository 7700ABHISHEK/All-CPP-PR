#include<iostream>

using namespace std;

int main(){
    int a, b;

    cout << "Enter A and B :- ";
    cin >> a >> b;

    if(a == b){
        cout << "Both are Same";
        return 0;
    }

    if(a > b){
        cout << "A is Bigger";
    } else {
        cout << "B is Bigger";
    }

    return 0;
}