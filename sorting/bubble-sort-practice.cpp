#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>);
void bubbleSort(vector<int>, int);

int main(){
    vector<int> arr(5);

    int n = arr.size();

    for(int i=0; i < n; i++){
        cout << "Enter values : ";
        cin >> arr[i];
    }

    cout << "Before : " << endl;
    display(arr);

    cout << "\nAfter : " << endl;
    bubbleSort(arr, n);

    return 0;
}

void display(vector<int> arr){
    for(int val : arr){
        cout << val << " ";
    }
}

void bubbleSort(vector<int> arr, int size){
    int temp;

    for(int i=0; i < size - 1; i++){
        for(int j=0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    display(arr);
}