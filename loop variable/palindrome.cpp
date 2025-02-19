#include<iostream>

using namespace std;

int main(){
    int n, ans = 0, r, temp;

    cout << "Enter value N :- ";
    cin >> n;

    temp = n;

    while(n != 0){
        r = n % 10;
        ans = (ans * 10) + r;
        n /= 10;
    }

    if(ans == temp){
        cout << "Yeah it's Palindrome number";
    } else{
        cout << "opps it's not Palindrome number";
    }

    return 0;
}