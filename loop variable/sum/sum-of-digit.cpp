#include<iostream>

using namespace std;

int main(){
    int n, sum = 0, count = 0, r;

    cout << "Enter N : ";
    cin >> n;

    while (n != 0){
        r = n % 10;
        count++;
        sum = sum + r;
        n /= 10;
    }

    cout << "Sum of digit is " << sum << endl;
    cout << "Count of digit is " << count << endl;

    return 0;
}