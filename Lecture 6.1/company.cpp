#include<iostream>
using namespace std;

class Employee
{
	protected :
	
	string company_name;
	public :
	
	void myAccess()
	{
		cin.ignore();
		cout << "Enter the Company Name : ";
		getline(cin,company_name);
		cout << "Company Name :" << company_name << endl << endl;		
	}
	
		
};

class Manager : public Employee
{
	 protected :
	 	int employee_salary;
	 	int total_staff;
	 	int total_annual_revenue;
	 	bool can_terminate;
	 	
	 	public:
	 		void myAccess()
	 		{
				cout << "Enter the Company Name :";
				getline(cin,company_name);
	
		
	 			cout << "Enter the Employee Salary :";
	 			cin >> employee_salary;
	 			
	 			cout << "Enter the total Staff :";
	 			cin >> total_staff;
	 			
	 			cout << "Enter the Annual Revenue :";
	 			cin >> total_annual_revenue;
	 			
	 			cout << "Enter the Can Terminate :";
	 			cin >> can_terminate;
	 			cout << endl << endl; 
	 			
	 			
	 			cout << "Company Name :" << company_name << endl;
	 			cout << "Employee Salary :" << employee_salary << endl ;
	 			cout << "Total Staff :" << total_staff << endl;
	 			cout << "Total Annual Revenue :" << total_annual_revenue << endl;
	 			cout << "Can Terminate : " << can_terminate << endl << endl;
			}
		
};

class Admin : public Manager
{
 	protected :
	 int manager_salary;
	 
	 public :
	 void myAccess()
	    {
			cout << "Enter the Company Name :";
			getline(cin,company_name);
			
				cout << "Enter the Employee Salary :";
	 			cin >> employee_salary;
	 			
	 			cout << "Enter the Total Staff :";
	 			cin >> total_staff;
	 			
	 			cout << "Enter the Annual revenue :";
	 			cin >> total_annual_revenue;
	 			
	 			cout << "Enter the Can Terminate :";
	 			cin >> can_terminate;
			
				cout << "Enter the Manager Salary :";
			 	cin >> manager_salary;
				cout << endl << endl; 
				
				
			 	cout << "Company Name : " << company_name << endl;
				cout <<"Manager salary : " << manager_salary << endl;
				cout << "Employee Salary : " << employee_salary << endl ;
	 			cout << "Total staff : " << total_staff << endl;
	 			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
	 			cout << "Can Terminate : " << can_terminate << endl;
	    }
		
			
};

int main()
{
	Admin a1;
	a1.myAccess();
	
	return 0;
}
