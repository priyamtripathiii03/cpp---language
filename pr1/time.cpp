#include<iostream>
using namespace std;

class time
{
	int sec,min,hour,s=0;
	
	public :
		
		void setter()
		{
			cout << "enter the hour : ";
			cin >> hour;
			cout << "enter the min : ";
			cin >> min;
			cout << "enter the sec : ";
			cin >> sec;
		}
		
		void clock()
		{
			if(sec>=60)
			{
				int squad_min;
				squad_min = sec / 60; 
				min = min + squad_min;
				s=sec % 60;  
			}
			if(sec>=60)
			{
				int squad_hour;
				squad_hour = min / 60; 
				hour = hour + squad_hour;
				min=min % 60; 
			}
			
		}
		
		void getter()
		{
			cout << "hour : " << hour << " minutes : " << min << " seconds : " << s;
		}
};

int main()
{
	time t1;
	
	t1.setter();
	t1.clock();
	t1.getter();
	
	
	return 0;
}