#include<iostream>
using namespace std;

class Maximum
{
	int a,b;
	public :
		void setter()
		{
			cout << "Enter the value of a : ";
			cin >> a;
		}
		void getter()
		{
			if(a>b)
			{
				cout << "b is maximum";
			}
			else
			{
				cout << "a is maximum";
			}
		}
		Maximum operator < (Maximum m)
		{
			Maximum temp;
		     temp.b=this->a;
		     temp.a=m.a;
		     
		     return temp;
		}
		
};
int main()
{
	Maximum m1,m2,m3;
	m1.setter();
	m2.setter();
	
	m3 = m1 < m2;
	m3.getter();
	
	return 0;
}
