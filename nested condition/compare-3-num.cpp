#include<iostream>

using namespace std;

int main(){
    int a, b, c;

    cout << "Enter A , B and C = ";
    cin >> a >> b >> c;

    if((a == b) && (b == c) ){
        cout << "All are Same";
        return 0;
    }


    if((a == b) && (c > b)){
        cout << "A and B are equal and C is Bigger";
        return 0;
    } else if((a == b) && (c < b)) {
        cout << "A and B are equal and C is Smaller";
        return 0;
    }

    if((a == c) && (b > a)){
        cout << "A and C are equal and B is Bigger";
        return 0;
    } else if((a == c) && (b < a)) {
        cout << "A and C are equal and B is Smaller";
        return 0;
    }

    if((b == c) && (a > c)){
        cout << "B and C are same and A is Bigger";
        return 0;
    } else if((b == c) && (a < c)) {
        cout << "B and C are same and A is Smaller";
        return 0;
    }

    if(a > b){
        if(a > c){
            cout << "A is Bigger";
        } else{
            cout << "C is Bigger";
            return 0;
        }

    } else if(b > c){
        cout << "B is Bigger";
    } else {
        cout << "C is Bigger";
    }

    return 0;
}