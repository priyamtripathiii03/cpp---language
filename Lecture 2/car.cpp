#include<iostream>
using namespace std;
class Employee
{
	public:
		int id;
		char name[50];
		int age;
		char role[50];
		int salary;
		char city[50];
		int  experience;
		char company_name[50];
		
		void input()
		{
			cout<<"Enter id: ";
			cin>>id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
			cout<<"Enter role: ";
			cin>>role;
			cout<<"Enter salary: ";
			cin>>salary;
			cout<<"Enter city: ";
			cin>>city;
			cout<<"Enter experience: ";
			cin>>experience;
			cout<<"Enter company_name: ";
			cin>>company_name;
			cout<<endl;
		}
		void output()
		{
			cout<<endl;
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"role: "<<role<<endl;
			cout<<"salary: "<<salary<<endl;
			cout<<"city: "<<city<<endl;
			cout<<"experience: "<<experience<<endl;
			cout<<"company_name: "<<company_name<<endl;
		}	
};
int main()
{
	Employee e1,e2,e3,e4,e5;
	e1.input();
	e2.input();
	e3.input();
	e4.input();
	e5.input();
	
	e1.output();
	e2.output();
	e3.output();
	e4.output();
	e5.output();
	
	return 0;
}

