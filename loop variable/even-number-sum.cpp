#include<iostream>

using namespace std;

int main(){
    int num, i, sum = 0;
    
    cout << "Enter Any Number = ";
    cin >> num;

    for(i=0; i <= num; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    cout << " " << sum;
 
    return 0;
}