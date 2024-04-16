#include<iostream>
using namespace std;

class A
{  
    protected :
    	
	int p,p1,p2;
	
	public :
			
		void SBI()
		{
			cout << "sbi intrest rate" << endl;
			cin >> p;
	    }
	    void BOB ()
		{
			cout << "bob intrest rate" << endl;
			cin >> p1;
	    }
	    void ICICI ()
		{
			cout << "icici intrest rate" << endl;
			cin >> p2;
	    }
	
};
class B : public A
{      
        public:
        	
        	void get()
        	{
        		SBI();
        		cout<< " sbi :"<< p << endl;
        	}
};
class C : public A
{      
    public:
	        
       	void get1()
       	{
       		BOB();
       		cout << " bob : "<< p1 << endl;
		}
};
class D : public A
{
    public:
    
	    void get2()
	    {
	    	ICICI();
	    	cout << "icici : " << p2 << endl;
		} 	
};

int main()
{

  B b1;
  b1.get();
  C c1;
  c1.get1();
  D d1;
  d1.get2();

	return 0;
}