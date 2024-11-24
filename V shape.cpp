#include<iostream>
using namespace std;
int main ()
{
  int num;
  cout<<"Enter num"<<endl;
  cin>>num;
  int copy=num;
  int rev=0;
  for(;num!=0;)
  {
  	rev=rev*10+num%10;
  	num=num/10;
}
  if(rev==copy)
  {
  	cout<<"The number is pallindrom";
  }
  else
  {
  	cout<<"The number is not a pallindrom";
  }

}

