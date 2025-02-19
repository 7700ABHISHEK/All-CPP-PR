#include <iostream>

using namespace std;

int main(){
    int i, sum = 0, n;

    cout << "Enter Any Number = ";
    cin >> n;

    for(i=1; i <= n; i++){
        sum += i;
    }
    cout << sum;

    return 0;
}