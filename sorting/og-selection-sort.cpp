#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>);
void selectionSort(vector<int>, int);

int main(){
    vector<int> arr(5);
    int n;

    n = arr.size();

    for(int i=0; i < n; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    cout << "before : " << endl;
    display(arr); 

    cout << "\nAfter : " << endl;
    selectionSort(arr,n);

    return 0;
}

void display(vector<int> arr){
    for(int val : arr){
        cout << val << " ";
    }
}

void selectionSort(vector<int> arr, int size){
    for(int i=0; i < size; i++){
        int minIdx = i;

        for(int j = (i+1); j < size; j++){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }

        }

        if(minIdx != i){
            int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }

    }

    display(arr);
}