#include <iostream>

using namespace std;

int main(){
    char i;

    for(i = 'a'; i <= 'z'; i++){
        cout << i << " ";
    }
    cout << endl << endl;

    for(i = 'A'; i <= 'Z'; i++){
        cout << i << " ";
    }
    cout << endl << endl;

    for(i = 'z'; i >= 'a'; i--){
        cout << i << " ";
    }

    return 0;
}