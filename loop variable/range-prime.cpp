#include<iostream>

using namespace std;

int main(){
    int i, j, start, end;
    bool flag = true;

    cout << "Enter a start and end number : ";
    cin >> start >> end;

    for(i=start; i<end; i++){
        flag = true;
        for(j=2; j<i; j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }

        if(flag) cout << i << " ";
    }
 
    return 0;
}