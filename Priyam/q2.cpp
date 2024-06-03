#include<iostream>
using namespace std;

class bankaccount
{
	int accountNumber;
	int balance;
	char ownerName[100];
	public:
		void set()
		{
			cout<<"enter the account number : ";
			cin>>accountNumber;
			cout<<"enter the balance : ";
			cin>>balance;
			cout<<"enter owner name : ";
			cin>>ownerName;
			cout<<endl;
		}
		void get()
		{
			cout<<"Account Number: "<< accountNumber << endl;
			cout<<"Balance : "<< balance << endl;
			cout<<"Owner name: "<< ownerName << endl << endl;
		}
		void credit()
		{
			int deposit;
			int totalbalance;
			cout<<"Deposit amount : ";
			cin>>deposit;
			
			totalbalance = balance + deposit;
			cout<< "total balance : " << totalbalance << endl << endl;
		}
		void debit()
		{
			int withdraw;
			int totalbalance;
			cout<<"Withdraw amount:";
			cin>>withdraw;
			totalbalance = totalbalance - withdraw;
			cout<<"total balance : "<< totalbalance << endl << endl;
		}
		void display()
		{
			int totalbalance;
			cout<<"total balance : "<< totalbalance << endl;
		}
};
int main()
{
	bankaccount b1;
	b1.set();
	b1.get();
	b1.credit();
	b1.debit();
	b1.display();
	return 0;
}
