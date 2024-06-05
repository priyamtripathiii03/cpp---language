#include<iostream>
using namespace std;

class Higher
{
	int a;
	public :
		void setter()
		{
			cout << "Enter the value : ";
			cin >> a;
		}
		Higher operator++(int)
		{
		 a++;	
		}
		void getter()
		{
		    cout << a << endl;
		}
		
};
int main()
{
	Higher h1;
	h1.setter(); 
	h1++;
		
	return 0;
}
