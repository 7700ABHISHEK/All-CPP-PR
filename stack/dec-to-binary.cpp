#include<iostream>
using namespace std;

class Stack {
    private :
        int *arr;
        int top;
        int capacity;
        int count;
    public :
        Stack(int size){
            this->arr = new int[size];
            this->top = -1;
            this->count=0;
            this->capacity = size;
        }

        void push(int);
        void pop();
        void peek();
        void display();
        bool isEmpty();
        bool isFull();
        int size();
};

void Stack::push(int data){
    if(top == capacity -1 ){
        cout << "Stack is overflow..." << endl;
        return;
    }
    this->top++;
    arr[top] = data;
    this->count++;
}

void Stack::pop(){
    if(top == -1){
        cout << "Stack is underflow..." <<endl;
        return;
    }
    this->top--;
    cout << "Stack pooped successfully..." << endl;

}

void Stack::peek(){
    if(top == -1){
        cout << "Stack is empty..." << endl;
        return;
    }
    cout << this->top[arr];
}

void Stack::display(){
    if(top == -1){
        cout << "Stack is empty..." << endl;
        return;
    }
    for(int i=top; i >= 0; i--){
        cout << arr[i] << " ";
    }
}

bool Stack::isEmpty(){
    if(top == -1){
        cout << "Stack is empty";
    } else{
        cout << "stock is not empty";
    }
}

bool Stack::isFull(){
    if(top == capacity-1){
        cout << "stack is full";
    } else{
        cout << "stack is not full";
    }
}

int Stack::size(){
    if(top == -1){
        cout << "Stack is empty..." << endl;
    } 

    cout << "Size : " << count << endl;
}


int main(){
    Stack binarystk(20);
    int n;

    cout << "Enter any number to convert into binary : ";
    cin >> n;

    while(n > 0){   
        int rem = n % 2;
        binarystk.push(rem);
        n = n/2;
    }

    binarystk.display();

    return 0;
}