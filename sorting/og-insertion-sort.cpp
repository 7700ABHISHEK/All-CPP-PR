#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>);
void insertionSort(vector<int>, int);

int main(){
    vector<int> arr(5);
    int n;

    n = arr.size();

    for(int i=0; i < n; i++){
        cout << "Enter values : ";
        cin >> arr[i];
    }

    cout << "Before : " << endl;
    display(arr);

    cout << "\nAfter : " << endl;
    insertionSort(arr,n);

    return 0;
}

void display(vector<int> arr){
    for(int val : arr){
        cout << val << " ";
    }
}

void insertionSort(vector<int> arr, int size){
    int key;

    for(int i=1; i < size; i++){
        int j = (i-1);
        key = arr[i];

        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            arr[j] = key;
            j--;
        }
    }

    display(arr);
}