#include <iostream>

using namespace std;

int main(){
    int i, n, p, sum = 1;
    cout << "Enter n (base) = ";
    cin >> n;

    cout << "Enter p (Power) = ";
    cin >> p;

    for(i=1; i <= p; i++){
        sum *= n;
    }

    cout << sum << endl;

    return 0;
}