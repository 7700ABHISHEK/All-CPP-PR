#include<iostream>

using namespace  std;

int main(){
    float b, h, triangle ; 
    cout << "Enter Base : ";
    cin >> b;
    cout << "Enter Height : ";
    cin >> h;

    triangle = h * b * 0.5;

    cout << "Area of Triangle is " << triangle;

    return 0;
}