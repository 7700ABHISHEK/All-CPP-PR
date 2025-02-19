#include <iostream>

using namespace std;

int main(){
    int n, firstdigit, lastdigit, r;

    cout << "Enter any Value : ";
    cin >> n;

    lastdigit = n % 10;

    while(n != 0){
        r = n % 10;
        n /= 10;
    }
    
    firstdigit = r;

    cout << firstdigit + lastdigit;

    return 0;
}