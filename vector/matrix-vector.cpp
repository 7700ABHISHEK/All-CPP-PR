#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cout << "Enter size : ";
    cin >> n;

    vector <int> v1(n, n);
    vector < vector <int> > v2(n, v1);

    for(vector <int> arr : v2){
        for(int val : arr){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}