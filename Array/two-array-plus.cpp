#include <iostream>

using namespace std;

int main(){
    int i, size;

    cout << "Enter Size OF Array : ";
    cin >> size;

    int a[size], a2[size], a3[size];

    for(i=0; i<size; i++){
        cout << "Enter Values of  :";
        cin >> a[i];
    }

    for(i=0; i<size; i++){
        cout << "Enter Values of a[2] :";
        cin >> a2[i];
    }

    for(i=0; i<size; i++){
        a3[i] = a[i] + a2[i];
        cout << "Value of a[3] is : " << a3[i] << endl;
    }


    return 0;
}