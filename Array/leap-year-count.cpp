#include <iostream>

using namespace std;

int main(){
    int i, size, count=0;

    cout << "Enter Size Of Array : ";
    cin >> size;

    int a[size];

    for(i=0; i<size; i++){
        cout << "Enter The Year For Finding Leap Year : ";
        cin >> a[i];
    }

    for(i=0; i<size; i++){
        if(a[i] % 4 == 0 && a[i] % 100 != 0 || a[i] % 400 == 0 ){
            count++;
        } 
    }

    cout << count;

    return 0;
}