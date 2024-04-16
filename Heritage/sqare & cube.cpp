#include<iostream>
using namespace std;

class input
{
  public:
  int a;
  void set()
  {
    cout << "Enter the value : ";
    cin >> a;
  }
};
class square : public input
{
   public:
   void get()
   {
     cout<<" square is : "<< a*a << endl;
   }
};

class cube :public input
{
   public:
   void get1()
   {
     cout<<"cube is :"<< a*a*a << endl;
   }

};
main()
{
   cube c1;
   square s1;

   s1.set();
   s1.get();
   
   c1.set();
   c1.get1();
   


}