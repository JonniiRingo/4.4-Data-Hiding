#include <iostream>
#include <string>
using namespace std; 


// Create a class BankAccount with encapsulated attributes (accountNumber, accountHolder, and balance). 

// Implement getter and setter methods for these attributes, including validation for the balance attribute 

// to ensure it remains non-negative. Create an instance of the BankAccount class in the main() function and 

// demonstrate the use of getter and setter methods to access and modify the attributes.




class bankaccount{
private: 
string accouont_holder;
int account_number;
double balance; 

public:
        bankaccount(const string& ah, const int& an,const double& bal)
            : accouont_holder (ah), account_number(an), balance(bal) { }; 

    void setAccholder(){
            cout << "Pease enter name of account holder: " << endl; 
            cin >> accouont_holder; 
        }

    void setAccountNumber(){
            cout << "Please enter the account number: " << endl; 
            cin >> account_number; 
        }

    void setAccountBalance(){
            cout << "Please enter the acount balance: " << endl; 
            cin >> balance;
            while (balance < 0 ){
                cout << "Invalid entry. Please enter a valid balance: " << endl; 
                cin >> balance; 
            } 
        }

    string getAccountHolder(){
            return accouont_holder;
        }

    int getAccountNumber(){
            return account_number;
        }

    int getBalance(){
            return balance;
        }


};


int main(){

    string name;
    int account_num, dollars; 
 
    bankaccount b1(name, account_num, dollars); 

    b1.setAccholder(); 
    b1.setAccountNumber();
    b1.setAccountBalance(); 

    string printName = b1.getAccountHolder(); 
    int printAccountNumber = b1.getAccountNumber(); 
    int printBalance = b1.getBalance();

    cout << "The name of the account holder is " << printName << endl; 
    cout << "The acount number is " << printAccountNumber << endl;
    cout << "The acount balance is " << printBalance << endl;
    


    return 0; 
}