#include<iostream>

using namespace std;

int sumArr(int [], int);

int main (){
    int size, sum;
    
    int a1[] = {1, 2, 3, 4, 5, 6};
    int a2[] = {10, 12, 31, 24, 45, 63};

    cout << sumArr(a1, 6) << endl;
    cout << sumArr(a2, 6);

    return 0;
}

int sumArr(int arr[], int size){
    int sum = 0;

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }

    return sum;
} 
