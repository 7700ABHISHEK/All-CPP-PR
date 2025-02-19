#include <iostream>

using namespace std;

class BankAccount {
    protected:
        int accountNumber, balance;
        string accountHolderName;
    public: 
        void createAccount(int accountnumber, string accountholdername){
            this->accountHolderName = accountholdername;
            this->accountNumber = accountNumber;

            cout << "--------------Account created Successfuly--------------"  << endl;
        }

        void deposit(int balance){
            this->balance = balance;

            cout << "-------------- money deposited successfully--------------" << endl;
        }

        void withdraw(int balance){
            this->balance =balance;
        }

        void displayAccountInfo(){
            cout << "Account number is : " << this->accountNumber << endl;
            cout << "Account Holder Name is : " << this->accountHolderName << endl;
            cout << "Account Balance is : " << this->balance << endl;
        }

        int getAccountNumber(){
            return accountNumber;
        }
};

class SavingsAccount : public BankAccount{
    protected : 
        int interestRate;
        string password;
    public: 
        void setPassword(string password){
            this->password = password;

            cout << "-------Password set successfully-------" << endl;
        }

        void validatepassword(string password){
            this->password = password;
        }

        void calculateInterest(int interestRate){
            this->interestRate = interestRate;
        }
};

int main(){
    SavingsAccount management[2];
    int choice, counter=0;

    cout << "\nWelcome to HDFC bank " << endl;


    do{
        cout << "\nEnter 1 to Creating account : ";
        cout << "\nEnter 2 to Creating password : ";
        cout << "\nEnter 3 to Deposit money : ";
        cout << "\nEnter 4 to Displaying account info : ";
        cout << "\nEnter 5 to Withdraw money : ";
        cout << "\nEnter 6 to Calculate interest : ";
        cout << "\nEnter 7 to Exit : " << endl << endl;

        cout << "Enter your Choice : ";
        cin >> choice;

        switch (choice){
        case 1: {
            string holderName;
            int accountNumber;


            cout << "\nEnter your Account number : ";
            cin >> accountNumber;

            cin.ignore();
            
            cout << "\nEnter your name : ";
            getline(cin, holderName);
 
            management[counter].createAccount(accountNumber, holderName);
            counter++;
            break; 
        }
        case 2:{
            string password;

            cout << "\nEnter your password : ";
            cin >> password;

            management[counter].setPassword(password);
            counter++;
            break;
        } 

        case 3:{
            int balance, accountNumber;

            cout << "\nEnter account number for validation : ";
            cin >> accountNumber;

            if(management[counter].getAccountNumber() != accountNumber){
                cout << "\nEnter valid account number ";
                break;
            }

            cout << "\nEnter amount for deposit : ";
            cin >> balance;

            management[counter].deposit(balance);
        } 
        case 4: {
            for(int i=0; i<counter; i++){
                management[i].displayAccountInfo();
            }
        }
        case 5: 
            break;
        case 6: 
            break;
        case 7: 
            cout << "Thanks for visiting";
            break;
        }

    }while(choice != 7);

    return 0;
}