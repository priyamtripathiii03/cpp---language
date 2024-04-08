#include<iostream>
using namespace std;
class Student
{
	private:
		
		int id;
		char name[50];
		int age;
		char course[50];
		char city[50];
		char email[50];
		char college[50];
		
	public:
		
		void input()
		{
			cout<<"Stu_id: ";
			cin>>id;
			cout<<"Stu_name: ";
			cin>>name;
			cout<<"Stu_age: ";
			cin>>age;
			cout<<"Stu_course: ";
			cin>>course;
			cout<<"Stu_city: ";
			cin>>city;
			cout<<"Student_email: ";
			cin>>email;
			cout<<"Stu_college: ";
			cin>>college;
			cout<<endl;
			
		}
		void output()
		{
			cout<<endl;
			cout<<"Stu_id "<<id<<endl;
			cout<<"Stu_name "<<name<<endl;
			cout<<"Stu_age "<<age<<endl;
			cout<<"Stu_course: "<<course<<endl;
			cout<<"Stu_city: "<<city<<endl;
			cout<<"Student_email: "<<email<<endl;
			cout<<"stu_college: "<<college<<endl;
		}	
};
int main()
{
	Student s1,s2,s3,s4,s5;
	s1.input();
	s2.input();
	s3.input();
	s4.input();
	s5.input();
	
	s1.output();
	s2.output();
	s3.output();
	s4.output();
	s5.output();
	
	return 0;
}

