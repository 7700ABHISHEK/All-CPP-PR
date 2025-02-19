#include<iostream>
using namespace std;
int main(){
    float a, b, c, d, e, f;
     
    cout << "Enter first number ";
    cin >> a;

    cout << "Enter second number ";
    cin >> b;

    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;

    cout <<"sum of a and b : "<< c <<endl;
    cout <<"sub of a and b : "<< d <<endl;
    cout <<"mul of a and b : "<< e <<endl;
    cout <<"div of a and b : "<< f <<endl;

    return 0;

}