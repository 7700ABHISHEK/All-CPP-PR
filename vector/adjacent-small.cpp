#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v1{10,5,20,6,30,7,40,8,50};
    vector <int> v2;
    int size = v1.size();

    for(int i=1; i<size-1; i++){
        if(v1[i] < v1[i-1] && v1[1] < v1[i+1]){
            v2.push_back(v1[i]);
        }
    }
    
    for(int val : v2){
        cout << val << " ";
    }

    return 0;
}