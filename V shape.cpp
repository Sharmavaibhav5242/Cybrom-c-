#include<iostream>
using namespace std;
int main ()
{
	int l;
	cout<<"Enter the length of the V-shape character"<<endl;
	cin>>l;
	for (int i=0;i<l;i++)
	{
		for (int j=0;j<l;j++)
		{
			if (j==i)
			cout<<" * ";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for (int i=0;i<l;i++)
	{
		for (int j=0;j<l;j++)
		{
			if (j=l*2)
			cout<<" * ";
			else 
			cout<<" ";
		}
		cout<<endl;
	}
	
	}	

