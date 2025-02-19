#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v{};

    v.push_back(12);
    v.push_back(22);
    v.push_back(32);
    v.push_back(42);
    v.push_back(52);
    v.push_back(62);

    v.pop_back();

    for(int val : v){
        cout << val << " ";
    }

    cout << endl;

    v.at(1) = 12; 
    cout  << "Size : " << v.size() <<  " ";

    cout << endl;

    for(int val : v){
        cout << val << " ";
    }

    v.clear();

    cout << endl;

    cout << "is Array empty : " << v.empty();


    return 0;
}