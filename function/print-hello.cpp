#include<iostream>

using namespace std;

void hello(); // declare

int main(){
    
    hello();
    hello();
    hello();   // calling
    hello();
    hello();

    return 0;
}

void hello(){ // body
    cout << "Hello\n";
}