#include <iostream>

using namespace std;

int main(){
    int size, choice, idx = 0;

    cout << "Enter the size of array : ";
    cin >> size;
    
    int arr[size];

    do{
        cout << endl << "Enter your Choice : ";
        cin >> choice;

        switch (choice){
        case 1 :
            if(idx >= size){
                cout << "Array Overflow" << endl;
                break;
            }
            int value;

            cout << "Enter The Value for Insertion : ";
            cin >> value;

            arr[idx] = value;
            idx++; 
            break;

        case 2 :
            for(int val : arr){
                cout << val << " ";
            }
            break;

        case 3 :
            
            break;

        case 4 :
            int v;
            idx--;
            v = arr[idx];

            arr[idx] = 0;

            cout << "Deleted Element is : " << v ;
            break;
        case 5 :
            cout << "Thanks for visit";
            break;
        
        default:
            break;
        }

    }while (choice != 0);

    return 0;
}

// create
// read
// delete
// update