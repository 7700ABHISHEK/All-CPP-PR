#include<iostream>

using namespace std;

void divisible(int);

int main(){
    int n;

    cout << "Enter N : ";
    cin >> n;

    divisible(n);

    return 0;
}

void divisible(int a){
    if((a % 3 == 0) && (a % 5 == 0 )){
        cout << "Yes it is divisible by both";
    } else if((a % 3 == 0) && (a % 5 != 0 )){
        cout << "Yes it is divisible by 3 but not 5";
    } else if((a % 3 != 0) && (a % 5 == 0 )){
        cout << "Yes it is not divisible by 3 but 5";
    } else{
        cout << "it is not divisible by both";
    }
}