#include<iostream>
using namespace std;

class Node{
    public : 
        int data;
        Node *next;
};

int main(){

    Node *HEAD = new Node();
    HEAD->data = 80;
    HEAD->next = nullptr;

    Node *Current = new Node();
    Current->data = 20;
    Current->next = nullptr;
    HEAD->next = Current;

    Current = new Node();
    Current->data = 50;
    Current->next = nullptr;
    HEAD->next->next = Current;

    cout << "Head data : " << HEAD->data << " Head next pointer : " << HEAD->next << endl ;
    cout << "current data : " << HEAD->next->data << " Current next pointer : " << HEAD->next->next << endl;
    cout << "current 2 data : " << HEAD->next->next->data << " Current next pointer : " << HEAD->next->next->next << endl;

    return 0;
}