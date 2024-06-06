#include<iostream>
using namespace std;

class Distance
{
	int meter,km;
	public :
		void setter()
		{
			cout << "Enter the value of km : ";
			cin >> km;
			cout << "Enter the value of meter : ";
			cin >> meter;
		}
		
	    void method()
	{
		if(meter>=1000)
		{
			int temp_km;
			temp_km = meter/1000;
			km = temp_km + km;
			meter = meter%1000;
		}
	}
	Distance operator+(Distance d)
	{
		Distance temp;
		
		temp.km = this->km + d.km;
		temp.meter = this->meter + d.meter;
		
		return temp;
	}
	void getter()
	{
		cout << "Km :" << km << endl << "Meter :" << meter << endl ;
	}
};
int main()
{
	Distance d1,d2,d3;
	d1.setter(); 
	d1.method();
	d1.getter();
	cout << endl << endl;
	
	d2.setter(); 
	d2.method();
	d2.getter();
	cout << endl << endl;
	
	d3 = d2+d1;
	d3.getter();
			
	return 0;
}
