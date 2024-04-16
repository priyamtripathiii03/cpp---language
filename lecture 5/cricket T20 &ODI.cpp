#include<iostream>
using namespace std;

class A  
{
	protected :
		int over;
	
	public :
		void cricket(int over)
		{
			this->over = over;
			cout  << " Over : " << over << endl;
		}
		
};
class B : public A
{
	    public :
		void cricket(int over)
		{
			this->over = over;
			cout  << "T20 : " << over << endl;
		}
};

class C: public A
{
		public :
		void cricket(int over)
		{
			this->over = over;
			cout  << "ODI : " << over << endl;
		}
};
main()
{
	B b1;
	b1.cricket(20);
	
	C c1;
	c1.cricket(50);
	
}
