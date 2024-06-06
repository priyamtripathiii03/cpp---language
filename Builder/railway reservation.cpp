#include<iostream>
using namespace std;

class Enquiry
{
	int a;
	string train_Name;
	string source;
	string destination;
	string train_Time;

	
	public:
	int train_Number;
	void set()
	{
		cout << "Enter the train number : ";
		cin >> train_Number;
		cin.ignore();
		
		cout << "Enter the train name : ";
		getline(cin,train_Name);
		
		cout << "Enter the source : ";
		getline(cin,source);
		
		cout << "Enter the destination : ";
		getline(cin,destination);
		
		cout << "Enter the train time : ";
		getline(cin,train_Time);
	}

	void get()
	{
		cout << "Train Number : "<< train_Number << endl;
		cout << "Train name : " << train_Name << endl;
		cout << "Source : "     << source << endl;
		cout << "Destination : "<< destination << endl;
		cout << "Train time : " << train_Time << endl;
		
	}
		
	Enquiry()
	{
		cout << "WELCOME TO IRCTC!\n\n";
		cout<<endl;
	}
		
};
 int main()
{
		Enquiry e;
		e.set();

		cout << "..................." << endl;
		
		Enquiry e1;
		e1.set();

		cout << "..................." << endl;
		
		Enquiry e2;
		e2.set();
		
		cout << "..................." << endl;
		
		int d;
		cout << " Enter the details : " <<  endl;
		cin  >>  d;
		
		
		if(e.train_Number == d)
		{
		    e.get();
		    cout<<endl;
		}
		
		if(e1.train_Number == d)
		{
		     e1.get();
		     cout<<endl;
		}
		if(e2.train_Number == d)
		{
		   e2.get();
		   cout<<endl;
		}
		
		return 0;
}

