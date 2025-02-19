#include <iostream>

using namespace std;

int main(){
    int n, i, factorial = 1;

    cout << "Enter Any Number = ";
    cin >> n;

    for(i = 1; i <= n; i++){
        factorial *= i;
    }
    cout << factorial;

    return 0;
}