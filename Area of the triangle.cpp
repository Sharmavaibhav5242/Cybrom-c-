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
//int num;
//int even=0;
//int odd=0;
//for(int i=1;i<=10;i++){
//cout<<"Enter Number"<<endl;
//cin>>num;
//if (num%2==0)
//{
//	 even++ ;
//}
//else
//{
//	 odd++ ;
//}
//		
//}
//cout<<"Total number of even"<<"\t"<<even<<endl;
//cout<<"Total number of odd"<<"\t"<<odd<<endl;
//int height;
//cout<<"Enter the height of L shape"<<endl;
//cin>>height;
//for (int k=0;k<3;k++)
//{
//	cout<<endl;
//for (int i=0;i<height-1;i++)
//{
//	cout<<"*"<<endl;
//}
//for (int i=0;i<height;i++)
//{
//	cout<<"* ";
//}
//cout<<endl;	
//}
int a=0;
int b=1;
for (int i=1;i<=10;i++)
{
	a=a+b;
	b= a-b;
	if(a==21)
	continue;
	cout<<a<<endl;
}
cout<<"Process end"<<endl;

}


