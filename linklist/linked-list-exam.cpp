#include <iostream>
using namespace std;

class Node {
    public :
        int data;
        Node *next;

    Node (int data){
        this->data = data;
        this->next = nullptr;
    }    
};

class linkedlist {
    public:
        Node *Head;
        int count;

    linkedlist (){
        this->Head = nullptr;
        this->count = 0;
    }

    void insert (int data){
        Node *newnode = new Node(data);
        newnode = this->Head;
        this->Head = newnode;

        this->count++;
        cout << "\nData Added successfull...." << endl;
    }

    void viewAll(){
        if(this->count == 0 || this->Head == nullptr){
            cout << "linkedlist is empty...";
            return;
        }
        Node *temp = this->Head;

        while(temp != nullptr){
            temp = temp->next;
        }

        cout << Head->data;

    }

    void search(int data){
        if(this->count == 0 || this->Head == nullptr){
            cout << "Linkedlist is empty...";
            return;
        }
        Node *temp = this->Head;

        while(temp != nullptr){
            temp = temp->next;
        }

        

    }

    void deleteData(int pos){
        if(this->count == 0 || this->Head == nullptr){
            cout << "linkedlist is empty...";
            return;
        }

        Node *temp = this->Head;

        while(temp != nullptr){
            temp = temp->next;
        }
    }

    void update(int pos, int data){
        if(this->count == 0 || this->Head == nullptr){
            cout << "linkedlist is empty...";
            return;
        }

        Node *temp = this->Head;

        while(temp != nullptr){
            temp = temp->next;
        }
    }

};


int main(){
    linkedlist list;
    int choice;

    do{
        cout << "Enter 1 to insert : " << endl;
        cout << "Enter 2 to view : " << endl;
        cout << "Enter 3 to search : " << endl;
        cout << "Enter 4 to delete : " << endl;
        cout << "Enter 5 to update : " << endl;
        cout << "Enter 6 to Exit : " << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice){
            case 1: {
                int data;

                cout << "Enter data : ";
                cin >> data;

                list.insert(data);
                break;
            }
            case 2: {
                list.viewAll();
                break;
            }
            case 3: {
                int data;

                cout << "Enter data : ";
                cin >> data;

                list.search(data);
                break;

            }
            case 4: {
                int data, pos;

                cout << "Enter postion : ";
                cin >> pos;

                list.deleteData(pos);
                break;
            }
            case 5 : {
                int data, pos; 

                cout << "Enter positon : ";
                cin >> pos;

                cout << "Enter data : ";
                cin >> data;

                list.update(pos, data);
            }
            case 6: {
                cout << "Thank you for visiting....." << endl;
                break;
            }
            default : {
                cout << "Invalid choice......" << endl;
            }
        }

    } while(choice != 6);

    return 0;
}