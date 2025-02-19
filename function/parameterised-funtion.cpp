#include<iostream>

using namespace std;

void add(int, int); // declare
void multi(int, int);

int main(){
    int a, b;

    cout << "Enter value of a and b : ";
    cin >> a >> b;

    add(a, b); // calling

    cout << "Enter value of a and b for multi : ";
    cin >> a >> b;

    multi(a, b);

    return 0;
}

void add(int a, int b){
    cout << "Add of a and b : " << a+b << endl; // body
}

void multi(int a, int b){
    cout << "multi of a and b : " << a * b << endl;
}