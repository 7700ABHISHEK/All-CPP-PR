#include <iostream>

using namespace std;

int main(){
    int i, size, sum = 0;

    cout << "Enter size of array : ";
    cin >> size;

    int a[size];

    for(i=0; i<size; i++){
        cout << "Enter Value of " << i << ": ";
        cin >> a[i];
    }

    for(i=0; i<size; i++){
        sum = sum + a[i];
    }

    cout << "The Average is : " << sum / size ;

    return 0;
}