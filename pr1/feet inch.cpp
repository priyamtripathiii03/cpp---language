#include<iostream>
using namespace std;

class feeinc
{
	
	public :
		int feet,inch;
		int f=12,i=0;
		
		void setter()
		{
			cout << "enter feet : ";
			cin >> feet;
			cout << "enter inch : ";
			cin >> inch; 
		}
		void measure()
		{
			int p;
			for(p=1;p<=inch;p++)
			{
				if(inch>=f)
				{
					if(p==f)
					{
						f+=12;
						feet+=1;
					}
				}
				else
				{
					i+=1;
				}
			}
		}
		void getter()
		{
			cout << "feet : " << feet << endl << "inch : " << inch;
		}
};

int main()
{
	feeinc fein1,fein2;
	
	fein1.setter();
	fein1.measure();
	fein1.getter();
	
	cout << endl;
	
	fein2.setter();
	fein2.measure();
	fein2.getter();
	
	int a = fein1.feet + fein2.feet;
	int b = fein1.i + fein2.i;
	
	cout << endl << endl << "feet : " << a << endl << "inch : " << b;
	return 0;
}