#include <iostream>

using namespace std;

int main(){
    int i, size;

    cout << "Enter Size : ";
    cin >> size;

    int a[size];

    for(i=0; i<size; i++){
        cout << "Enter Values of " << i << ": ";
        cin >> a[i];
    }

    for(i=0; i<size; i++){
        cout << a[i] << " ";
    }

    return 0;
}