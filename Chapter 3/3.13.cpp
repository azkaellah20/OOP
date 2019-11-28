#include <iostream>
#include <string>
using namespace std;
class Account {

public:

   Account( string accountName, int initialBalance )
      : name{ accountName } {

      if ( initialBalance > 0 )
         balance = initialBalance;
   }

   void deposit( int depositAmount ) {
      if ( depositAmount > 0 )
         balance = balance + depositAmount;
   }

   void withdraw( int withdrawAmount ) {
      if ( withdrawAmount > balance )
        cout << "Withdrawal amount exceeded account balance.\n";
      if ( withdrawAmount <= balance )
         balance = balance - withdrawAmount;
   }

   int getBalance() const {
      return balance;
   }

   void setName( string accountName ) {
      name = accountName;
   }

   string getName() const {
      return name;
   }

private:

	string name;
   int balance{ 0 };
};

main() {

   Account account1( "Azka", 25000 );
   Account account2( "ABC", 10000 );
   cout<<"\tWelcome to 5E bank "<<endl;
   cout << "Account 1 "<<endl<<"Name: " << account1.getName() <<endl<< "balance: "<< account1.getBalance();
   cout << "\n\nAccount 2 "<<endl<<"Name: " << account2.getName() <<endl<< "balance: "<< account2.getBalance();

   int depositAmount;

   cout << "\n\nEnter deposit amount for Account 1: ";
   cin >> depositAmount;
 
   cout << "\n" <<depositAmount << " Added to Account 1 balance\n\n";
   account1.deposit( depositAmount );

   cout << "Account 1 "<<endl<<"Name: " << account1.getName() <<endl<< "balance: "<< account1.getBalance();
   cout << "\n\nAccount 2 "<<endl<<"Name: " << account2.getName() <<endl<< "balance: "<< account2.getBalance();

   cout << "\n\nEnter deposit amount for account 2: ";
   cin >> depositAmount;

   cout << "\n" << depositAmount << " Added to Account 2 balance\n\n";
   account2.deposit( depositAmount );
   
   cout << "Account 1 "<<endl<<"Name: " << account1.getName() <<endl<< "balance: "<< account1.getBalance();
   cout << "\n\nAccount 2 "<<endl<<"Name: " << account2.getName() <<endl<< "balance: "<< account2.getBalance();
}
