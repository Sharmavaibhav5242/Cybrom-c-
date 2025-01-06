#include <iostream>
using namespace std;
class info{
	public:
  string name="Vaibhav";
  int age=20;
  void display()
  {
  	cout<<name<<endl<<age;
  }
};
int main()
{
	info a;
	a.display();
}
