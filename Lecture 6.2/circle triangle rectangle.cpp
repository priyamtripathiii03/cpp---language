#include<iostream>
using namespace std;

class Abstract
{
	protected : 
	int l,b,h,w,r;
	float pi = 3.14;
	
	protected :
		virtual void calculate()=0;
	
};
class Circle: public Abstract 
{
	public :
		void calculate()
		{
			cout << "Enter the radius : ";
			cin >> r;
			cout << "Area of circle : " << pi*r*r << endl;
				
		}
};
class Triangle : public Abstract 
{
	public :
		void calculate()
		{
			cout << "Enter the height : ";
			cin >> h;
			cout << "Enter the breadth : ";
			cin >> b;
			cout << "Area of Triangle : " << (h*b)/2 << endl;
				
		}
};
class Rectangle : public Abstract 
{
	public :
		void calculate()
		{
			cout << "Enter the length : ";
			cin >> l;
			cout << "Enter the width : ";
			cin >> w;
			cout << "Area of Triangle : " << l*b << endl;
				
		}
};
int main()
{
	Circle c1;
	c1.calculate();
	Triangle t1;
	t1.calculate();
	Rectangle r1;
	r1.calculate();
	return 0;
}
