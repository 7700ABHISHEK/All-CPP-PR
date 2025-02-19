#include<iostream>

using namespace std;

int sumArr(int [], int); // declaration

int main (){
    int size, sum;

    cout << "Enter the size : ";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cout << "Enter values : ";
        cin >> arr[i];
    }

    sum = sumArr(arr, size);  // calling

    cout << sum;

    return 0;
}

int sumArr(int arr[], int size){ // Body
    int sum = 0;

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }

    return sum;
} 
