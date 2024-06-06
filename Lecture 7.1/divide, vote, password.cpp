#include<iostream>
using namespace std;

class Divide
{
	virtual void valid() = 0;
	
};

class Div : public Divide
{
	  int a,b;	
	 public : 
	
	void getter()
	{
		cout << "Enter the value of a : ";
		cin >> a;
		cout << "Enter the value of b : ";
		cin >> b;
	}
	void valid()
	{
		try
		{
			if(b==0)
			{
				throw b;
			}
			else
			{
				cout << "This number is divided : " << a/b << endl << endl; 
			}
		}
		catch(...)
		{
			cout << "This no is not divided by zero" << endl << endl;
		}
	}
};

class Age : public Divide
{
	int age;
	
	public :	
	
	void get()
	{
		cout << "Enter your Age : ";
		cin >> age;
	}
	void valid()
	{
		try
		{
			if(age < 18)
			{
				throw age;
			}
			else
			{
				cout << "You are eligible for vote" << endl << endl;
				
				
			}
			
		}
		
		catch(...)
		{
			cout << "You are not eligible for vote" << endl << endl;
			

		}
	}
};

class Pass : public Divide
{
	int i,check = 0;
	char pass[50];
	
	public : 
	
	void get()
	{
		cout << "Enter the Password : ";
		cin >> pass;
	}
	void valid()
	{	
		int len = strlen(pass);
		for(i=0; i<len; i++)
		{
			if(pass[i]>=65 && pass[i]<=90)
			{
				check = 1;
			}
		}
		
		try 
		{
			if(check!=1)
			{
				throw pass;
				
			}
			else
			{
				cout << "Your password is valid" << endl << endl; 
				
			}
		}
		catch(...)
		{
			cout << "Password must be contains an uppercase letter" << endl << endl;
			
		}
	}
	
};

int main()
{
	Div d1;
	Age a1;
	Pass p1;
	
	d1.getter();
	d1.valid();
	
	a1.get();
	a1.valid();
	
	p1.get();
	p1.valid();
	
	return 0;
}
