#include<iostream>

using namespace std;

void swapping(int *, int *) ;

int main(){
    int x,y;

    cout << "Enter tthe value of X and Y : ";
    cin>> x >> y;

    cout << "Before : ";
    cout << x << " " << y << endl;

    swapping( &x , &y);

    cout << "After : ";
    cout << x << " " << y << endl;

    return 0;
}

void swapping(int *a , int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}