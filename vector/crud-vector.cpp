#include <iostream>
#include <vector>

using namespace std;

int main(){
    int choice;
    vector <int> arr;

    do{
        cout << "\n\n1 to insert value : ";
        cout << "\n2 to view value : ";
        cout << "\n3 to update value : ";
        cout << "\n4 to delete value : ";
        cout << "\n5 to clear value : ";
        cout << "\n6 to exit : ";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice){
            case 1: { 
                int idx, element;

                cout << "Enter index : ";
                cin >> idx;

                cout << "Enter value : ";
                cin >> element;

                arr.push_back(element);

                cout << "\nValue added : " << element;
                break;
            }

            case 2:{
                for(int val : arr){
                    cout << val << " ";
                }
                break;
            }
            case 3:{
                int idx, element, updateVal;

                cout << "Enter index : ";
                cin >> idx;

                cout << "Enter value : ";
                cin >> element;

                updateVal = arr.at(idx);
                arr.at(idx) = element;

                cout << "Updated value at : " << idx << "is " << updateVal;
                break;
            }
            case 4:{
                int idx, deletedVal;

                cout << "Enter index : ";
                cin >> idx;

                deletedVal = arr.at(idx);
                arr.at(idx) = 0;

                cout << "Deleted value is : " << deletedVal; 
                break;
            }
            case 5:{

                arr.clear();

                cout << "All values are clear.....";
            }
            case 6:
                break;
        }

    } while(choice != 6);

    return 0;
}