#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, temp;
    vector<int> arr(5);

    n = arr.size();

    for(int i=0; i < n; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    for(int i=0; i < n-1; i++){
        for(int j=0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        cout << endl;
    }

    for(int val : arr){
        cout << val << " ";
    }

    return 0;
}