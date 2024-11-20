#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b=1;
	int ctr=0;
	int counter=0;
	while (ctr<10)
	{
		while(a<=100)
		{
			a=a+b;
			b=a-b;
			cout<<a<<endl;
			counter++;
			cout<<counter<<endl;
		}
		ctr++;
	}
}
