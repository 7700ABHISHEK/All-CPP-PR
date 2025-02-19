#include <iostream>

using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
int modulo(int, int);

int main(){
    int choice, a, b, sum;

    do{
        cout << "Enter 1 for + : " << endl;
        cout << "Enter 2 for - : " << endl;
        cout << "Enter 3 for * : " << endl;
        cout << "Enter 4 for / : " << endl;
        cout << "Enter 5 for % : " << endl;
        cin >> choice;

        switch (choice){
        case 1: 
            cout << "Enter first number : ";
            cin >> a;

            cout << "Enter second number : ";
            cin >> b;

            sum = add(a, b);

            cout << "Addition of two is : " << sum << endl;

            break;
        case 2: 
            cout << "Enter first number : ";
            cin >> a;

            cout << "Enter second number : ";
            cin >> b;

            sum = sub(a, b);

            cout << "Substraction of two is : " << sum << endl;

            break;
        case 3: 
            cout << "Enter first number : ";
            cin >> a;

            cout << "Enter second number : ";
            cin >> b;

            sum = mul(a, b);

            cout << "multiplication of two is : " << sum << endl;

            break;
        case 4: 
            cout << "Enter first number : ";
            cin >> a;

            cout << "Enter second number : ";
            cin >> b;

            sum = divi(a, b);

            cout << "Division of two is : " << sum << endl;

            break;
        case 5: 
            cout << "Enter first number : ";
            cin >> a;

            cout << "Enter second number : ";
            cin >> b;

            sum = modulo(a, b);

            cout << "Modulo of two is : " << sum << endl;

            break;
        
        default: 
            cout << "Thank you visiting" << endl;
            break;
        }

    } while(choice != 0);

    return 0;
}

int add( int a, int b){
    return a+b;
}
int sub( int a, int b){
    return a-b;
}
int mul( int a, int b){
    return a*b;
}
int divi( int a, int b){
    return a/b;
}
int modulo( int a, int b){
    return a%b;
}