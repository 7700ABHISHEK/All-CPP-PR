#include <iostream>

using namespace std;

int main(){
    int size, i, pos;

    cout << "Enter The Size of Array : ";
    cin >> size;

    int arr[size];

    for(i = 0; i < size; i++){
        cout << "Enter The Value : ";
        cin >> arr[i];
    }


    cout << "Enter The Postion of Array : ";
    cin >> pos;
    
    if(pos > size){
        cout << "Invlaid number";
        return 0;
    }

    for(i = pos; i < size; i++){
        cout << arr[i] << " ";
    }

    for(i = 0; i < pos; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int arrn = arr[i];

    for(i = pos; i < size; i++){
        cout << arrn << " ";
    }

    return 0;
}