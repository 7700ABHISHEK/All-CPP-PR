#include<iostream>

using namespace std;

int strl(string);

int main (){
    string str;
    int len;

    cout << "Enter any String : ";
    getline(cin , str);

    len = strl(str);

    cout << "Length is : " << len;

    return 0;
}

int strl(string str){
    int count = 0;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }
    return count;
}