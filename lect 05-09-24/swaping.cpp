#include<iostream>

using namespace std;

int main(){
    int x = 2, y = 5, z;

    cout << " before X = " << x << " y = " << y ;

    z = x;
    x = y;
    y = z;

    cout << " After X = " << x << " Y = " << y ;

    return 0;
}