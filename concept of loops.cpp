#include<iostream>
using namespace std;
int main()
{
int num;
int even=0;
int odd=0;
for(int i=1 ; i<=10 ;i++){ 
cout<<"Enter a number"<<endl;
cin>>num;
if(num%2==0)
      even++;
else
       odd++;
}
	cout<<"Total number of even's are"<<"\t"<<even<<endl;
	cout<<"Total number of odd's are"<<"\t"<<odd<<endl;
}
