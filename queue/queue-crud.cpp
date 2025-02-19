#include<iostream>
using namespace std;

class Queue{
    private:
        int *arr;
        int capacity;
        int front;
        int rear;
        int count;
    public:
        Queue(int size){
            this->arr = new int[size];
            this->capacity = size;
            this->front = -1;
            this->rear = -1;
            this->count = 0;
        }

        ~Queue(){
            delete[] this->arr;
        }

        void enqueue(int);
        void dequeue();
        void getfront();
        void getrear();
        void display();
        void isEmpty();
        void isFull();
        void Size();
};

void Queue::enqueue(int data){
    if(this->rear == this->capacity - 1){
        cout << "Queue is overflow..." << endl;
        return;
    }
    if(this->front == -1 && this->rear == -1){
        this->front = 0;
        this->rear = 0;
        this->arr[rear] = data;
        this->count++;
    } else{
        this->rear++;
        this->arr[rear] = data;
        this->count++;
    }

    cout << "Data Enqueued successfully..." << endl;
}

void Queue::dequeue(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is empty..." << endl;
        return;
    }

    arr[this->front] = 0;
    this->front++;
    this->count--;
    
    cout << "Data Dequeued successfully..." << endl;
}

void Queue::getfront(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is empty..." << endl;
        return;
    }

    cout << "Front element is : " << this->arr[front] << endl;
}

void Queue::getrear(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is empty..." << endl;
        return;
    }


    cout << "Rear element is : " << this->arr[rear] << endl;
}

void Queue::display(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is empty..." << endl;
        return;
    }

    for(int i = this->front; i <= this->rear; i++){
        cout << this->arr[i] << " ";
    }

    cout << endl;

}
void Queue::isEmpty(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is Empty..." << endl;
    } else{
        cout << "it is not empty..." << endl;
    }
}
void Queue::isFull(){
    if(this->rear == this->capacity - 1){
        cout << "Queue is full" << endl;
    } else{
        cout << "It is not full..." << endl;
    }
}
void Queue::Size(){
    if(this->front == -1 && this->rear == -1){
        cout << "Queue is Empty..." << endl;
        return;
    }

    cout << "Size is : " <<  this->count << endl;
}


int main(){
    int n;
    cout << "Enter number of element : ";
    cin >> n;
    Queue queue(n);
    int choice;

    do{
        cout << "Enter 1 to Enqueue : " << endl;
        cout << "Enter 2 to Dequeue : " << endl;
        cout << "Enter 3 to Front : " << endl;
        cout << "Enter 4 to Rear : " << endl;
        cout << "Enter 5 to Display : " << endl;
        cout << "Enter 6 to isEmpty : " << endl;
        cout << "Enter 7 to isFull : " << endl;
        cout << "Enter 8 to Size : " << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1: { 
                int data;

                cout << "Enter data : ";
                cin >> data;

                queue.enqueue(data);
                break;
            }
            
            case 2: { 
                queue.dequeue();
                break;
            }

            case 3: { 
                queue.getfront();
                break;
            }

            case 4: { 
                queue.getrear();
                break;
            }

            case 5: { 
                queue.display();
                break;
            }

            case 6: { 
                queue.isEmpty();
                break;
            }

            case 7: { 
                queue.isFull();
                break;
            }

            case 8: { 
                queue.Size();
                break;
            }

            case 9:{
                cout << "Thank you for visiting...." << endl;
                break;
            }

            default:
                cout << "Enter valid choice..." << endl;
        }

    } while(choice != 0);

    return 0;
}