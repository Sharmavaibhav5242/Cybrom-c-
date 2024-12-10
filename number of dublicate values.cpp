#include <iostream>
using namespace std;
int main ()
{
//	int arr []={1,2,3,4,1};
//	int count=0;
//	for(int i=0;i<5;++i)
//	{
//		for (int j=i+1;j<5;++j)
//		{
//			if (arr[i]==arr[j])
//			{
//				count++;
//			}
//		}
//		}	
//		cout<<"Duplicate values = "<<count;
int m=5;
int arr[m]={1,2,3,2,1};
int org=arr[m];
int temp;

for(int i=0;i<m/2;++i)
{
	temp=arr[m-1-i];
	arr[m-1-i]=arr[i];
	arr[i]=temp;
}
for (int i=0;i<m;++i)
{
	if(org==arr[m])
	{
		cout<<"Pallindrom";
	}
	else
	{
		cout<<"Not a pallindrom";
	}
}
}


