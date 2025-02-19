#include<iostream>

using namespace std;

int strl(string);

int main (){
    string str;
    int len;

    cout << "Enter any string : ";
    getline(cin , str);

    len = strl(str);

    cout << "Length is : " << len;

    return 0;
}

int strl(string str){
    int count = 0;

    for(int i=0; str[i] != '\0' ; i++){
        count ++;
        if(str[i] == 32){
            count --;
        }
    }
    return count;
}