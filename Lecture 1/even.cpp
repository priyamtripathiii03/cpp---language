#include<iostream>
using namespace std;
main()
{
	int n;
	int a[n];
	cout <<"Enter the value of n:";
	cin >>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin >>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << "even number : "<<a[i]<< endl;
		}
	}
}

