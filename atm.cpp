/*
     ATM management system


     1.Pratik Lahane (Group Leader)
     2.Ashmit Narkhede
     3.Siddhant Deshmukh
     4.Shravan Kharad
     5.Bhargav Bakshi
     6.Harish Thakare
     7.Prasanna Satpute




*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {

	
private:
	string name;
	long long accnumber;
	char type[10];
	long long amount = 0;
	long long tot = 0;

	
public:
	
	void setvalue()
	{
		cout << "Enter name\n";
		cin.ignore();

		
		getline(cin, name);

		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> tot;
	}

	// Display data of user
	void showdata()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << tot << endl;
	}

	// Deposit
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
	}

	// Showamount
	void showbal()
	{
		tot = tot + amount;
		cout << "\nTotal balance is: " << tot;
	}

	// Withdraw
	void withdrawl()
	{
		int a, avai_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		avai_balance = tot - a;
		cout << "Available Balance is" << avai_balance;
	}
};

int main()
{
	
	Bank b;

	int choice;

	
	while (1) {
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account "
			<< "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cin >> choice;

		// Choices 
		switch (choice) {
		case 1:
			b.setvalue();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showbal();
			break;
		case 5:
			b.withdrawl();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}
