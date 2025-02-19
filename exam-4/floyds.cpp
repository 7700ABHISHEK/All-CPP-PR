#include<iostream>

using namespace std;

int main(){
    int i,j, num=11;

    for(i=4; i>=1; i--){
        for(j=i; j<=4; j++){
            cout << num++ << " ";
        }

        cout << endl;
    }    

    return 0;
}