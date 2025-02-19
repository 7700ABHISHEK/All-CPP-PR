#include<iostream>

using namespace std;

class BankAccount{
    protected : 
        int accountNumber;
        string accountHolderName;
        int balance = 0;
    public: 
        void createAccount(string accountHolderName, int accountNumber){
            this->accountHolderName = accountHolderName;
            this->accountNumber = accountNumber;
        }
        void deposit(int balance){
            this->balance = this->balance + balance;
        }

        void withdraw(int balance){
            this->balance = this->balance - balance;
        }

        void displayAccountInfo(){
            cout << "\nAccount number : " << this->accountNumber;
            cout << "\nAccount Holder Name : " << this->accountHolderName;
            cout << "\nAccount Balance : " << this->balance << endl;
        }
};

class SavingsAccount : public BankAccount{
    protected:
        int interest;
    public:
        void calculateInterest(int interest){
            interest = balance * 1 / interest;
            this->interest = interest;

            cout << "Interest is : " << interest;
        }
};

int main(){
    SavingsAccount s1;
    int choice;
    int accountNumber;
    string accountHolderName;

    cout << "\nEnter your name : ";
    cin >> accountHolderName;

    cout << "\nEnter Account number : ";
    cin >> accountNumber;

    s1.createAccount(accountHolderName , accountNumber);

    do{
        cout << "\n1 to Deposit : ";
        cout << "\n2 to Withdraw : ";
        cout << "\n3 to Display : ";
        cout << "\n4 to Calculate : ";
        cout << "\n5 to exit : " << endl;

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice){
        case 1:{
            int balance;

            cout << "Enter Amount : ";
            cin >> balance;

            s1.deposit(balance);

            break;

        }
        case 2:{
            int withdraw;

            cout << "Enter Amount of withdrawel : ";
            cin >> withdraw;

            s1.withdraw(withdraw);
        }
        case 3:{
            s1.displayAccountInfo();
            break;
        }
        case 4:{
            int interest;

            cout << "Enter the interest : ";
            cin >> interest;

            s1.calculateInterest(interest);
            break;
        }
        case 5: 
            cout << "Thank you for visitng : ";
            break;
        }

    } while (choice != 5);
    

}