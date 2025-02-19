#include<iostream>

using namespace std;

int main(){
    float pi = 3.14, r, s;
    cout << "Enter radius = ";
    cin >> r;

    s = pi * r * r * 0.5;

    cout << "Area of semi-circle is " << s ;

    return 0;
}