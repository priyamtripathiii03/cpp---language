#include<iostream>
#include<string>

using namespace std;

class Movie
{
	public:
		string title;
		string genre;
		int releasedYear;
		
		void setter()
		{
			cout << "enter the title : ";
			cin >> title;
			
			cout << "enter the genre : " ;
			cin >> genre;
			
			cout << "enter the releasedYear : " ;
			cin >> releasedYear;
		}
		
		void getter()
		{
			cout << "title" << title << endl;
			cout << "genre" << genre << endl;
			cout << "releasedYear"<< releasedYear << endl;
		}
};
main()
{
	Movie m[3];
	int p;
	
	for(p=0; p<=3; p++)
	{
		m[p].setter();
		m[p].getter();
		
	}
	
	
}