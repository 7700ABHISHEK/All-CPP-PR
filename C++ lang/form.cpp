#include<iostream>
using namespace std;
int main(){
    string name, surname, email;
    int phone;

    cout <<"Enter Your First Name : ";
    cin>> name;
    cout <<"Enter Your Surname : ";
    cin>> surname;
    cout <<"Enter Your Email : ";
    cin>> email;
    cout <<"Enter Your Phone Number : ";
    cin>> phone;
    cout<<endl;

    cout<<"Your Name : " <<name <<surname <<endl;
    cout<<"Your Email : " <<email <<endl;
    cout<<"Your Phone no : " <<phone <<endl;

    return 0;
}
