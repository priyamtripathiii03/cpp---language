#include<iostream>
using namespace std;

class Election
{
	int age;
	
	public :
		void vote()
		{
			cout << "Enter your Age :";
			cin >> age;
			if (age < 18)
			{
				throw 0;
			}
			else
			{
			   cout << "You are eligible for vote" << endl;
			
			}
		}
		
};
int main()
{
	Election e1;
	try
	{
		e1.vote();
		
	}
	catch(...)
	{
		cout << "You are not eligible for vote" << endl;
	}
	
	return 0;
	
	
}