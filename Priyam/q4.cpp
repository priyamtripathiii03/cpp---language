#include<iostream>
using namespace std;

class vehicle
{
	public:
	virtual void displayDetails()
	{
		cout<<"Vehicle "<<endl;
	}
};
class model:public vehicle
{
	void displayDetails()
	{
		cout<<"Model is Xuv "<<endl<<endl;
	}
};
class speed:public vehicle
{
	void displayDetails()
	{
		cout<<"Speed is 120"<<endl<<endl;
	}
};
int main()
{
	vehicle *s[2];
	model m1;
	speed s1;
	s[0]=&m1;
	s[1]=&s1;
	
	s[0]->displayDetails();
	s[1]->displayDetails();
	return 0;
}

