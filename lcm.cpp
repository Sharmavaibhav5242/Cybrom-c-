#include<iostream>
using namespace std;
int main()
{
	int larger=4;
	int smaller=3;
	int lcm;
	for (int i=larger; ;i=i+larger)
	{
		if (i%larger==0 && i%smaller==0)
		{
		 lcm=i;
		 break; 
//		 sirf break nhi dalne ki wajah se poora if loop infinte
// chalra tha jiski wajah se compiler output nhi dikha raha h
	}
		
	}
	cout<<lcm;
}
