#include<iostream>
using namespace std;
class Customer
{
	private:
		int id;
		char name[50];
		int age;
		char city[50];
		long int mobile_no;
		int simcard_validity;
		char telecom_brand_name[50];
	public:	
		void input()
		{
			cout<<"Enter id: ";
			cin>>id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
			cout<<"Enter city: ";
			cin>>city;
			cout<<"Enter mobile_no: ";
			cin>>mobile_no;
			cout<<"Enter simcard_validity: ";
			cin>>simcard_validity;
			cout<<"Enter telecom_brand_name: ";
			cin>>telecom_brand_name;
			cout<<endl;
		}
		void output()
		{
			cout<<endl;
			cout<<"id: "<<id<<endl;
			cout<<"name: "<<name<<endl;
			cout<<"age: "<<age<<endl;
			cout<<"city: "<<city<<endl;
			cout<<"mobile_no: "<<mobile_no<<endl;
			cout<<"simcard_validity: "<<simcard_validity<<endl;
			cout<<"telecom_brand_name: "<<telecom_brand_name<<endl;
		}	
};
int main()
{
	Customer c1,c2,c3,c4,c5;
	c1.input();
	c2.input();
	c3.input();
	c4.input();
	c5.input();
	
	c1.output();
	c2.output();
	c3.output();
	c4.output();
	c5.output();
	
	
	return 0;
}
