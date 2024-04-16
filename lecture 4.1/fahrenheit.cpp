#include<iostream>
using namespace std;

class P
{  
    protected:
	float n ,f ,k;
	
};
class Q :public P
{   
    public:
    void Fahrenheit()
    {
        cout << "Enter the Fahrinheit : ";
        cin >> n;
        
        f=(1.8*n)+32;
	}
};
class R  : public Q
{   
   	public :
   	
   		void kelvin()
   		{
   			k=n+273;
   		}
		     
   void set()
   {
  	 cout << "fahrinheit : "<< f << endl ;
  	 cout << "kelvin : " << k;
  }
   
};

int main()
{
 	R r1;
  
    r1.Fahrenheit();
    r1.kelvin();
    r1.set();
}