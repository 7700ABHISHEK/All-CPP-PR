#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

class linkedlist {
    public:
        Node *head;
        int count;

        linkedlist(){
            this->head = nullptr;
            count = 0;
        }

        void addAtStart(int data){
            Node *newNode = new Node(data); // step 1

            newNode->next = this->head; // step 2
            this->head = newNode; // step 3
            this->count++;

            cout << "\nNew node insert at start...\n"  << endl;
        }

        void addAtEnd(int data){
            Node *newnode = new Node(data); // step 1

            if(count == 0){
                this->head = newnode; // only step
            } else{
                Node *temp = this->head; // step 2

                while(temp->next != nullptr){
                    temp = temp->next;
                }

                temp->next = newnode;
                cout << "\nNew node insert at end...\n" << endl;
            }
            this->count++;
        }

        void addAtAny(int pos, int data){
            Node *newnode = new Node(data);

            if(pos == 0){
                newnode->next = this->head;
                this->head = newnode;
            } else{
                Node *temp = this->head;

                for(int i=0; i<pos; i++){
                    temp = temp->next;
                }
                newnode->next = temp->next;
                temp->next = newnode;
            }

            this->count++;
        }

        void viewAll(){
            if(count == 0){
                cout << "Linked list is empty..." << endl;
                return;
            } else{
                Node *temp = head;

                while(temp != nullptr){
                    cout << temp->data << " ";
                    temp = temp->next;
                }
            }
            cout << endl;
        }

        void update(int pos, int data) {
            if(this->count == 0 || this->head == nullptr){
                cout << "linked list is empty..." << endl;
                return;
            }
            
            Node *temp = this->head;
            for(int i=0; i < pos; i++){
                temp = temp->next;
            }

            temp->data = data;
            cout << "Data updated successfully....." << endl;
        };

        void deleteAtStart() {
            if(this->count == 0 || this->head == NULL){
                cout << "Linked list is empty..." << endl;
            }

            Node *temp = this->head;
            this->head = this->head->next;

            delete temp;
            temp = NULL;
        };

        void deleteAtEnd(){
            if(this->count == 0 || this->head == NULL){
                cout << "Linked list is empty...";
            }

            Node *temp = this->head;
            while(temp->next->next != nullptr){
                temp = temp->next;
            }

            delete temp->next;
            temp->next = nullptr;

            temp = nullptr;
        }

        void deleteAtAny(int pos) {
            if(count == 0 || head == nullptr){
                cout << "linked list is empty..." << endl;
            }
            if(pos == 0){
                this->deleteAtStart();
                cout << "Element deleted successfully...." << endl;
                return;
            }

            Node *pre = this->head, *curr = this->head;

            // step 1

            for(int i=0; i < pos; i++){
                curr = curr->next;
            } 

            // step 2

            for(int i=0; i < pos - 1; i++){
                pre = pre->next;
            }

            pre->next = curr->next;

            delete curr;
            curr = NULL;

            pre = NULL;
            delete pre;

            this->count--;

            cout << "Element deleted successfully......" << endl;
        };

        void getSize(){
            cout << "Size of linked list is : " << this->count << endl;
        }
};

int main (){
    linkedlist list;
    int choice;

    do{
        cout << "Enter 1 to add at start..." << endl;
        cout << "Enter 2 to add at end..." << endl;
        cout << "Enter 3 to add at any position..." << endl;
        cout << "Enter 4 to view all..." << endl;
        cout << "Enter 5 to update value : " << endl;
        cout << "Enter 6 to delete at start..." << endl;
        cout << "Enter 7 to delete at end..." << endl;
        cout << "Enter 8 to delete at Any postion : " << endl;
        cout << "Enter 9 to getsize : " <<endl;
        cout << "Enter 0 to exit..." << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:{
                int data;

                cout << "Enter data to insert at start : ";
                cin >> data;

                list.addAtStart(data);
                break;
            }
                    
            case 2:{
                int data;

                cout << "Enter data to insert at end : ";
                cin >> data;

                list.addAtEnd(data);
                break;
            }

            case 3:{
                int data, pos;

                cout << "Enter postion : ";
                cin >> pos;

                cout << "Enter data to insert at any position : ";
                cin >> data;

                list.addAtAny(pos, data);

                break;
            }

            case 4: {
                list.viewAll();
                break;
            }

            case 5: {
                int pos, data;

                cout << "Enter postion : " ;
                cin >> pos;

                cout << "Enter data to change : " ;
                cin >> data;

                list.update(pos, data);
            }
            
            case 6: {
                list.deleteAtStart();
                break;
            }

            case 7: {
                list.deleteAtEnd();
                break;
            }

            case 8: { 
                int pos;

                cout << "Enter postion to delete : " ;
                cin >> pos;

                list.deleteAtAny(pos);
            }

            case 9: { 
                list.getSize();
            }

            default:
                cout << "invalid choice...";
            case 0:
                break;
        }

    } while(choice != 0);

    return 0;
}