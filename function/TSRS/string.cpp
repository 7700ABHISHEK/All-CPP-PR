#include<iostream>

using namespace std;

int strl(string); // declaration

int main(){
    string str;
    int len, ans;

    cout << "Enter any string : ";
    getline(cin, str);    

    len = strl(str);

    cout << "String length is : " << len;

    return 0;
}

int strl(string str){
    int count = 0;

    for(int i=0; str[i] != '\0'; i++){
        count++;
    }

    return count;
}