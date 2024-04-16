#include<iostream>
using namespace std;

class P
{
	protected :
		int a,b,c;
};

class Q : public P
{
	public :
		
		void set()
		{
			cout << "Enter the a : ";
			cin >> a;
			cout << "Enter the b : ";
			cin >> b;
			cout << "enter the c : ";
			cin >> c;
		}
		
		void get()
		{
			cout << "a = " << a*a*a << endl;
			cout << "b = " << b*b*b << endl;
			cout << "c = " << c*c*c << endl;
		}
};

int main()
{
	Q q1;
	
	q1.set();
	q1.get();
	return 0;
}