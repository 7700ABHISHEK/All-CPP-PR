#include<iostream>
#include<vector>

using namespace std;

int main (){
    vector <int> v1{10,20,30,40,50};
    vector <int> v2;

    int size = v1.size();

    for(int i=size-1; i>=0; i--){
        v2.push_back(v1[i]);   
    }
    
    for(int i=0; i<size; i++){
        cout << v2[i] << " ";
    }


    return 0;
}