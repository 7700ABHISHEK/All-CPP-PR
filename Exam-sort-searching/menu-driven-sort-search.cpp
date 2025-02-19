#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>);
void takingValue(vector<int>&);
void selectionSort(vector<int>&);
void mergeSort(vector<int>, int, int);
int merge(vector<int>&, int, int, int);
void LinearSearch(vector<int>, int);
int binarySearch(vector<int>&, int, int, int);
void bubbleSort(vector<int>&);

int main(){
    int n, choice;

    cout << "Enter size : ";
    cin >> n;

    vector<int> arr(n);

    do{
        cout << "\nEnter 1 to do Selection sort..." << endl;
        cout << "Enter 2 to do Merge sort..." << endl;
        cout << "Enter 3 to do Linear search..." << endl;
        cout << "Enter 4 to do Binary search..." << endl;
        cout << "Enter 5 to exit..." << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:{
                takingValue(arr);
                selectionSort(arr);
                display(arr);
                break;
            }

            case 2: {

                takingValue(arr);

                mergeSort(arr, 0, n-1);

            }

            case 3 :{
                takingValue(arr);

                int key;

                cout << "Enter key : ";
                cin >> key;

                LinearSearch(arr, key);
                break;
            }

            case 4 :{
                takingValue(arr);

                int key; 

                cout << "Enter key : ";
                cin >> key;

                int idx = binarySearch(arr, 0, n-1, key);
                bubbleSort(arr);
                display(arr);

                if(idx != -1){
                    cout << "Element found at index " << idx;
                } else{
                    cout << "Element not found...";
                }
                break;
            }
        }

    } while(choice != 5);

    return 0;
}

void display(vector<int> arr){
    for(int val : arr){
        cout << val << " ";
    }
}

void takingValue(vector<int> &arr){
    for(int i=0; i < arr.size(); i++){
        cout << "Enter values : ";
        cin >> arr[i];
    }
}

void selectionSort(vector<int> &arr){
    int temp;
    for(int i=0; i < arr.size(); i++){
        int minIdx = i;

        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

void mergeSort(vector<int> arr, int low, int high){
    int mid = (low+high) / 2;

    while(low <= high){
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
    }
}

int merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;

    int start = low;
    int end = high;

    while(arr[start] <= arr[mid] && arr[end] >= arr[mid]){
        if(arr[start] >= arr[end]){
            temp.push_back(start);
            start++;
        } else{
            temp.push_back(end);
            end++;
        }
    }

    while(arr[start] <= arr[mid]){
        temp.push_back(start);
        start++;
    }

    while(arr[end] >= arr[mid]){
        temp.push_back(end);
        end++;
    }

    for(int i=low ; i <= high; i++){

    }
}

void LinearSearch(vector<int> arr, int key){
    bool found = false;
    for(int i=0; i < arr.size(); i++){
        if(arr[i] == key){
            cout << "Element found at index " << i << endl;
            found = true;
        }
    }
    if(!found){
            cout << "Element not found...";
    }
}

void bubbleSort(vector<int> &arr){
    int temp;
    for(int i=0; i < arr.size(); i++){
        for(int j=0; j < arr.size() - 1-i; j++){

            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(vector<int> &arr, int low, int high, int key){
    int mid = (low + high) / 2;

    if(arr[mid] != key){
        return -1;
    }

    if(arr[mid] == key){
        return mid;
    } else if(key > arr[mid]){
        return binarySearch(arr, mid+1, high, key);
    } else if(key < arr[mid]){
        return binarySearch(arr, low, mid-1, key);
    }
}