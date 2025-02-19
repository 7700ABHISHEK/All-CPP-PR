#include<iostream>
#include<vector>
 
using namespace std;

class Student{
    private :
        int id;
        string name;
    public :
        Student(){}

        Student(int studentid, string studentname){
            id = studentid;
            name = studentname;
        }

        void addStudent(){
            cout<<"Enter Student ID :- "<<id<<endl;
            cout<<"Enter Student Name :- "<<name<<endl;
        }

        int getID(){
            return id;
        }
};
 
int main(){

    vector<Student> arr;
    int choice;

    do
    {
        cout<<"Enter 1 To Adding Student "<<endl;
        cout<<"Enter 2 To View All Student "<<endl;
        cout<<"Enter 3 To Remove a Student "<<endl;
        cout<<"Enter 4 To Search Student"<<endl;
        cout<<"Enter 5 To Exit "<<endl;

        cout<<"Enter Your Choice :- ";
        cin>>choice;

        switch (choice)
        {
        case 1: {
            int id;
            string name;

            cout<<"Enter Student ID :- ";
            cin>>id;
            cin.ignore();
            cout<<"Enter Student Name :- ";
            getline(cin, name);

            arr.push_back(Student(id, name));

            break;
        }
        
        case 2:{
            for(auto num : arr){
                num.addStudent();
            }
            break;
        }

        case 3: {
            int id;

            cout<<"Enter Student ID To Remove :- ";
            cin>>id;

            bool isfound = false;

            for(auto i = arr.begin(); i != arr.end(); i++){
                if(i->getID() == id){
                    isfound = true;
                    arr.erase(i);
                break;
                }
            }

            isfound == true ? cout<<"Student Remove Successfully"<<endl : cout<<"Student Not Found";

        break;
        }
        case 4: {
            int id;

            cout<<"Enter Student ID To Search :- ";
            cin>>id;

            bool isfound = false;

            for(auto i = arr.begin(); i != arr.end(); i++){
                if(i->getID() == id){
                    i->addStudent();
                    isfound = true;
                break;
                }
            }
            isfound == true ? cout<<"Student Remove Successfully"<<endl : cout<<"Student Not Found"<<endl;

            break;
        }

        case 5: {
            cout<<"Thank You Visit Again";
        }

        }

    } while (choice != 5 );
    
    

 
return 0;
}