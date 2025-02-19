#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main(){
    Node *HEAD = new Node();
    HEAD->data = 50;
    HEAD->next = nullptr;

    Node *current = new Node();
    current->data = 60;
    current->next = nullptr;
    HEAD->next = current;

    current = new Node();
    current->data = 70;
    current->next = nullptr;
    HEAD->next->next;

    Node *ptr;
    ptr = HEAD;

    while (ptr != NULL){
        cout << "Head data : " << ptr->data << " Pointer : " << ptr->next << " Pointer of ptr : " << ptr; 
        ptr = ptr->next;
    }
    
    return 0;
}