#include <iostream>

using namespace std;

int main(){
    int i, num;

    cout << "Enter the number it's odd number's = ";
    cin >> num;

    for(i = 1; i <= num; i++){
        if(i % 3 == 0){
            cout << " " <<  i;
        }
    }

    return 0;
}