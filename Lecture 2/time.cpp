#include<iostream>
using namespace std;

class time
{
	public:
	int sec;
	
	void day (int sec)
	{
		int i,a=0,b=0,c=0;
		int s=60,h=3600,d=86400;
		for(i=1;i<=sec;i++)
		{
			if(i==s)
			{
				a+=1;
				s+=60;
			}
			if(i==h)
			{
				b+=1;
				h+=3600;
			}
			if(i==d)
			{
				c+=1;
				d+=86400;
			}	
		}
		cout<<" day "<< c << endl <<" hour "<< b << endl <<" minute "<< a << endl <<" second "<< sec << endl; 
	}	
};

int main()
{
	time t1;
	cout<<"Enter a sec : ";
	cin>>t1.sec;
		
	t1.day(t1.sec);	
	return 0;
}

