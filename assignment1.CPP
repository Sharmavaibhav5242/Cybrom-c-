//source code
#include<iostream>
using namespace std;
int main()
{
string message="Hello c++";
cout<<message<<endl;

int a;
int b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
int result= a+b;
cout<<"Result"<<"="<<"\t"<<result<<endl;

int num;
cout<<"Enter number"<<endl;
cin>>num;
int sqr=num*num;
cout<<"Square of the number is"<<"="<<sqr<<endl;

double Amount;
double Time;
double Rate;
cout<<"Enter Amount,Time,Rate"<<endl;
cin>>Amount>>Time>>Rate;
double Interest=(Amount*Time*Rate)/100;
cout<<"The simple interest is"<<"="<<"\t"<<Interest<<endl;

int n;
cout<<"Enter the number"<<endl;
cin>>n;
if (n>=0)
cout<<"The number is valid"<<endl;
else
cout<<"The number is invalid"<<endl;
	 	
}
    
	

