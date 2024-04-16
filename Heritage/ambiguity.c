#include<iostream>
using namespace std;

class A
{
	public:
		int a;
	void star_a()
	{
		cout << "enter the number 1 : ";
		cin >> a;
	}
};
class B : public A
{
	protected:
		int b;
	void star_b()
	{
		star_a();
		cout << "enter the number 2 : ";
		cin >> b;
	}
};
class C : public A
{
	protected:
		int c;
	void star_c()
	{
		cout << "enter the number 3 : ";
		cin >> c;
	}
};
class D : public B,C
{
	public :
		int d;
		void star_d()
		{
			star_b();
			star_c();
			cout << "enter the number 4 : ";
			cin >> d;	
		}
		void get()
		{
			cout << "sum:" << B::a*b*c*d;	
		}
};
main()
{
	D d1;
	d1.star_d();
	d1.get();
}