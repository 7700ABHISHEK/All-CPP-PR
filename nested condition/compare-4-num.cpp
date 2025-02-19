#include<iostream>

using namespace std;

int main(){
    long int a, b, c, d;

    cout << "Enter A , B , C and D = ";
    cin >> a >> b >> c >> d;

    if((a == b) && (b == c) && (c == d)){
        cout << "All are Same";
        return 0;
    }

    if((a > b) ){
        if(a > c){
            if(a > d){
                cout << "A is Bigger";
            } else {
                cout << "D is Bigger";
            }
        }
    } else if(b > c){
        if(b > d){
            cout << "B is bigger";
        } else {
            cout << "D is bigger";
        }
    } else if(c > d){
        cout << "C is bigger";
    } else {
        cout << "D is bigger";
    }

    return 0;
}