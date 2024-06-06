#include<iostream>
using namespace std;

class Divide
{
	protected :
		int a,b;
		public :
			void getter()
			{
				cout << "Enter the value of a : ";
				cin >> a;
				cout << "Enter the value of b : ";
				try 
				{
					cin >> b;
					if(b==0)
					{
						throw  12.90;
						
					}
					else
					{
						cout << a/b << endl;
						
					}
				}
				catch (int c)
					{
						cout << "This value is not divided by 0" << endl << endl;
						
					}
					catch (...)
					{
						cout << "Error..." << endl;
					}
				}
};
int main()
{
	Divide d1;
	d1.getter();
	
	return 0;
}