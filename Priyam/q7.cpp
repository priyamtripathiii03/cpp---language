#include<iostream>
using namespace std;

class Shape
{
	public :
		virtual void area() = 0;
		virtual void draw() = 0;
};

class Circle : public Shape
{
	public:
		void area()
		{
			cout << "Circle area : " << endl;
		}
		
		void draw()
		{
			cout << "Circle draw : " << endl;
		}
};

class Rectangle : public Shape
{
	public :
		void area()
		{
			cout << "Rectangle area : " << endl;
		}
		
		void draw()
		{
			cout << "Rectangle draw : " << endl;
		}
};

int main()
{
	Shape *s[2];
	Circle c1;
	Rectangle r1;
	
	s[0] = &c1;
	s[1] = &r1;
	
	s[0]->area();
	s[0]->draw();
	
	s[1]->area();
	s[1]->draw();
	
	return 0;
}
