#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout  << "Address of a is :" << ptr;
    cout  << "\nValue of a is :" << *ptr;

    return 0;
}