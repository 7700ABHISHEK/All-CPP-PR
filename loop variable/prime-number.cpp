#include <iostream>

using namespace std;

int main(){
    int i, n, count = 0;
    bool flag = true;

    cout << "Enter any number for checking that it is prime number or not :- ";
    cin >> n;

    for(i = 2; i*i < n; i++){
        count++;
        if(n % i == 0){
            cout << "It's not a prime number";
            return 0;
        }
    }

    cout << " " << count << endl;
    
    if(flag){
        cout << "It's a prime number";
    }

    return 0;
}