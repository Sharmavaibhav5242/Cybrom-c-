#include <iostream>
using namespace std;
class A 
{
	public:
  int roll=123;
  void show()
  {
  	cout<<roll;
	  }	
};
class B:virtual public A
{
	
};
class C:virtual public A
{
	
};
class D:public B,public C
{
	
};
int main()
{
	D obj;
	obj.show();
}
