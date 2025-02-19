#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;
    int **abc = &ptr;

    cout << "Address of *ptr is : " << *abc << endl;
    cout << "Address of A is : " << ptr << endl;
    cout << "Value of A is : " << *ptr << endl;

    return 0;
}