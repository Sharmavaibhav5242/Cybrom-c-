#include<iostream>
using namespace std;
int main()
{
//	double base;
//	double height;
//	cout<<"Enter base and height of the triangle"<<endl;
//	cin>>base>>height;
//	const double d1=0.5;
//	cout<<"The area of the  triangle is"<<"="<<"\t"<<d1*base*height<<endl;
int num;
int even=0;
int odd=0;
for(int i=1;i<=10;i++){
cout<<"Enter Number"<<endl;
cin>>num;
if (num%2==0)
{
	 even++ ;
}
else
{
	 odd++ ;
}
		
}
cout<<"Total number of even"<<"\t"<<even<<endl;
cout<<"Total number of odd"<<"\t"<<odd<<endl;


}
