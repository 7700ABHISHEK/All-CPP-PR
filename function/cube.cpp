#include<iostream>

using namespace std;

void cube(int, int); // declaration

int main(){
    int a, p;

    cout << "Enter any number : ";
    cin >> a;

    cout << "Enter its power : ";
    cin >> p;

    cube(a, p); // calling

    return 0;
}

void cube(int a, int p){
    int i, sum = 1;
    for(i=1; i<=p; i++){   // body 
        sum = sum * a;
    }
    cout<<sum;
}