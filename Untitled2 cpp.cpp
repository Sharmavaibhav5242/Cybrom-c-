//source code

#include<iostream>
using namespace std;
int main()
{
  int n1;
  int n2;
  int n3;
  cout<<"Enter 3 values"<<endl;
  cin>>n1>>n2>>n3;
  cout<<"1st value is "<<"="<<n1<<endl;
  cout<<"2nd value is "<<"="<<n2<<endl;
  cout<<"3rd value is "<<"="<<n3<<endl;
 if (n1>n2 && n1>n3)
 cout<<"The gretest value is"<<"="<<n1<<endl;
 else
 if (n2>n3 && n2>n1)
 cout<<"The greatest value is "<<"="<<n2<<endl;
 else
 if (n3>n1 && n3>n2)
 cout<<"The greatest value is "<<"="<<n3<<endl;
 
}
