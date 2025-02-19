#include<iostream>

using namespace std;

int main(){
    int n, ans = 0, r;

    cout << "Enter N :- ";
    cin >> n;

    while(n != 0){
        r = n % 10;
        ans = (ans * 10) + r;
        n /= 10;
    }

    cout << "Reverse of number is :- " << ans;

    return 0;
}