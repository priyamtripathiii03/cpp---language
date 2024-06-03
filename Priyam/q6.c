#include<iostream>
using namespace std;

class MathOperations
{
	
	private:
		
		int a,b,press;
		
		public:
		   
		   void division()
		   {
		   	 cout << "Enter the value of a : ";
		   	 cin >> a;
		   	 cout << "Enter the value of b : ";
		   	 cin >> b;
		   	 
		   	 press = a/b;
		   	 
		   	 if(b==0)
		   	 {
		   	 	throw 'w';
			 }
			 else
			 {
			 	cout << "this value is not divisible by 0 ";
			 }
			 catch(int x)
			 {
			 	cout << " Invalid value ! ";
			 }
		   }
};
main()
{
	MathOperations m1;
	m1.division();
}