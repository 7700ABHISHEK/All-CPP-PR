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

    cout << "-------------" << endl;
    cout << "Stack pushed successfully..." << endl;
    cout << "-------------" << endl;
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


int main (){
    Stack stack(5);
    int choice;

    do{
        cout << "\nEnter 1 to push: " << endl;
        cout << "Enter 2 to pop: " << endl;
        cout << "Enter 3 to peek : " << endl;
        cout << "Enter 4 to Display : " << endl;
        cout << "Enter 5 to check isEmpty : " << endl;
        cout << "Enter 6 to check isFull : " << endl;
        cout << "Enter 7 to check size : " << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1 : {
                int data;

                cout << "Enter data : ";
                cin >> data;

                stack.push(data);

                break;
            }
            case 2 : {
                stack.pop();
                break;
            }
            case 3 : {
                stack.peek();
                break;
            }
            case 4 : {
                stack.display();
                break;
            }
            case 5 : {
                stack.isEmpty();
                break;
            }
            case 6 : {
                stack.isFull();
                break;
            }
            case 7 : {
                stack.size();
                break;
            }
            case 0 : {
                cout << "Thank you for visiting...";
                break;
            }
            default : {
                cout << "Invalid choice...." << endl;
            }
        }

    } while(choice != 0);

    return 0;
}