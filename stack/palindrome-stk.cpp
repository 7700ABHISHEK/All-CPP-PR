#include<iostream>
#include<stack>

using namespace std;

bool isPalindrome(string str){
    stack <char> palindrome;
    
    for(int ch:str){
        palindrome.push(ch);
    }

    for(int ch:str){
        if(palindrome.top() != ch){
            return false;
        }  
            palindrome.pop();
    }
    return true;
}

int main(){
    string str;

    cout << "Enter Value to check whether it is palindrome or not : ";
    getline(cin, str);

    if(isPalindrome(str) == true){
        cout << "it is palindrome...";
    } else{
        cout << "it is not palindrome...";
    }

    return 0;
}