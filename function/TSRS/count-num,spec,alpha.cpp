#include<iostream>

using namespace std;

int strl(string);

int main (){
    string str;

    cout << "Enter any string : ";
    getline (cin, str);

     strl(str);

    return 0;
}

int strl(string str){
    int count1 = 0, count2 = 0, count3 = 0;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            count1 ++;
        } else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            count2++;
        } else{
            count3++;
        }
    }
    cout << "Number is :" << count1 << endl;
    cout << "Alphabet is :" << count2 << endl;
    cout << "Special char is :" << count3 << endl;
}