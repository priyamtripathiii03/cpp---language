
#include<iostream>
using namespace std;
main()
{
	int start;
	int end;
	cout<<"Enter the starting no : ";
	cin>>start;
	cout<<"Enter the ending no : ";
	cin>>end;
	
	int n=(end-start)/4+1;
	cout<<"expected years: "<<n<<endl;
	int leap[n];
	int i,y=0;
	for(i=start;i<=end;i++)
	{
		if(i%4==0)
		{
			leap[y]=i;
			y++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<< leap[i] << endl;
	}
}

