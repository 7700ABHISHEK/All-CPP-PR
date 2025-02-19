#include <iostream>

using namespace std;

int main(){
    int i, num;

    cout << "Enter the number it's even number = ";
    cin >> num;

    for(i = 1; i <= num; i++){
        if(i % 2 == 0){
            cout << " " << i;
        }
    }

    return 0;
}