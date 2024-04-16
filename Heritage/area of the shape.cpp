#include<iostream>
using namespace std;

class shape
{
  public:
  int w,h;
  void set()
  {
  	cout << "Enter the width : ";
  	cin >> w;
  	cout << "Enter the height : ";
  	cin >> h;
  	
  }		
}; 
class triangle : public shape
{
	 public:
	 	int Ast;
		 void get1()
		 {
			An=(w*h)/2;
		 	cout<<"Area of triangle is:"<<ast<<endl;
		 }
	
};
class rectangle : public shape
{
    public:
	int p;

	void get2()
	{
		p=(w*h);
		cout << "Area of rectangle is : " << p << endl;
		}	
};
main()
{
	rectangle r1;
	triangle t1;
	r1.set();
	r1.get2();
	t1.set();
	t1.get1();
	
}