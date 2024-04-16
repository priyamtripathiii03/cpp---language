#include<iostream>
using namespace std;

class FastFood
{
	int id;
	char name[50];
	char type[50];
	char rating[50];
	char location[50];
	int year;
	int cafe_staff_quantity;
	
	public :
		
	FastFood()
	{
	     cout << "Enter cafe_id : ";
	     cin >> id;
		 cout << "Enter cafe_name : ";
		 cin >> name;
		 cout << "Enter cafe_type : ";
	     cin >> type;
		 cout << "Enter cafe_rating : ";
		 cin >> rating;
		  cout << "Enter cafe_location : ";
	     cin >> location;
		 cout << "Enter cafe_establish_year : ";
		 cin >> year;
		  cout << "Enter cafe_staff_quantity : ";
		 cin >> cafe_staff_quantity;
	}
	
	void getter()
	{
	
	cout << "Enter cafe_id : "<<id << endl;
	cout << "Enter cafe_name : "<<name << endl;
	cout << "Enter cafe_type : "<<type << endl;
	cout << "Enter cafe_rating : "<<rating << endl;
	cout << "Enter cafe_location : "<<location << endl;
	cout << "Enter cafe_establish_year : " <<year << endl;
	cout << "cafe_staff_quantity : " << cafe_staff_quantity << endl;
     }
	
		
};
int main()
{
	FastFood f1,f2,f3;
	
	f1.getter();
	cout << endl;
	f2.getter();
	cout << endl;
	f3.getter();
	cout << endl;
	
	
}