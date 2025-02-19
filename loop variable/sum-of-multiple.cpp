#include <iostream>

using namespace std;

int main(){
    int i, num, sum = 0;

    cout << "Enter Any Number :- ";
    cin >> num;

    for( i=0; i < num; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum = sum + i;
        }
    }

    cout << sum;

    return 0;
}