#include <iostream>

using namespace std;

void valueswap(int, int);

int main(){
    int x,y;

    cout << "Enter the value of x and y : ";
    cin >> x >> y;

    cout << "Before : ";
    cout << x << " " << y << endl; 

    valueswap(x , y);

    cout << "After : ";
    cout << x << " " << y << endl; 

    return 0;
}

void valueswap (int a, int b){
    int temp;

    temp = a;
    b = temp;
    a = temp;
}