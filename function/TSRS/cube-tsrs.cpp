#include<iostream>

using namespace std;

int cube(int); // declaration

int main (){
    int n;

    cout << "Enter N : ";
    cin >> n;

    cout << "Cube of N : " << cube(n);

    return 0;
}

int cube(int n){
    return n*n*n;
}