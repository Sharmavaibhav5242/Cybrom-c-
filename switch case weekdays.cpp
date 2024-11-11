#include<iostream>
using namespace std;
int main()
{
int num1;
int num2;
char operation;
cout<<"Enter numbers"<<endl;
cin>>num1>>num2>>operation;
switch(operation)
{
	case '+': cout<<num1+num2<<endl;
	break;
	case '-' : cout<<num1-num2<<endl;
	break;
	case '*' : cout<<num1*num2<<endl;
	break;
	case '/' : cout<<num1/num2<<endl;
	break;
	default : cout<<"invalid"<<endl;
	break;
}
 


}
