#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, count = 0, temp;
    bool swap = false;
    vector <int> arr(5);

    n = arr.size();

    for(int i=0; i < n; i++){
        cout << "Enter value : ";
        cin >> arr[i];
    }

    for(int i=0; i < n-1; i++){
        for(int j=0; j < n-i-1; j++){
            swap = false;

            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swap = true;
            }
            count++;

        }

        cout << endl;

        if(swap == false){
            break;
        }

    }

    cout << count << endl;

    for(int val : arr){
        cout << val << " ";
    }


    return 0;
}