#include<iostream>
using namespace std;

class A
{  
    protected:
	float n =50;

};
class B
{   
    protected:
	float n =90;
};
class C : public A , public B
{   
   
   	public:
   		void setter()
   		{
   			cout << A :: n << endl;
   			cout << B  :: n;
		}
	

};
int main()
{
 
 	C c1;
 	c1.setter();
 	
 	return 0;
}