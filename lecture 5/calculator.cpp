#include<iostream>
using namespace std;

class Sum
{
	int a,b,c,d,e;
	public :
		
		void calculate(int a, int b)
		{
			int p=a/b;
			cout << "division for a / b  : " << p << endl;
		}
		
		void calculate(int a, int b,int c)
		{
			int q=a-b-c;
			cout << "subtraction for a - b - c : " << q << endl;
		}
		
		void calculate(int a, int b, int c,int d)
		{
			int r=a*b*c*d;
			cout << "multiplication for a * b * c * d : " << r << endl;
		}
		
		void calculate(int a, int b, int c, int d, int e)
		{
			int s=a+b+c+d+e;
			cout << "addition for a + b + c + d + e : " << s << endl;
		}		
};

int main()
{
	Sum s1;
	
	s1.calculate(10,20);
	s1.calculate(10,20,30);
	s1.calculate(10,20,30,40);
	s1.calculate(10,20,30,40,50);
	
	return 0;
}