#include<iostream>
using namespace std;
int main ()
{
//	array is the type of data structure for storing multiple  data 
// array stores similar type of data for example int int , char char , float float.
// it is formed in contagious memory location.
// contagious mean adjacent.
// why indexing start from 0.
// &- this is called amprecent.
// array address is written in subscript [].
// cout<<a[0]; this gives the array address and gives the value of variable which is stored in 0 numbered variable.
// cout<<a[0]+1; this gives the value of next variable.
// the data is stored in object form in array function.
// int main()
//{
//   int arr[]={1,2,3,4,5,6};
//   arr[3]=40;
//   for (int i=0;i<6;++i)
//   { if (arr[i]!=40)
//       cout<<arr[i];
//   }
//    
//}
//int arr[2][3]= {{1,2,3},{4,5,6}};
//	for (int i=0; i<2; ++i)
//	{
//		for (int j=0; j<3; ++j)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
//{
//	int arr[2][3]= {{1,2,3},{4,5,6}};
//	for (int i=0; i<2; ++i)
//     {
//         for (int j=0;j<3;++j)
//         {
//             cout<<arr[1][1];
//         }
//     }
//}
//{
//	int arr[2][2][2]= {{{1,2},{3,4}},{{5,6},{7,8}}};
//	
//         cout<<arr[1][0][0];
//     
//}
//int arr [5]={1,2,3,4,5};
//int largest =arr[0];
//for(int i=0;i<5;++i)
//{
//
//if (arr[0]<arr[i])
//{
//	largest=arr[i];
//}
//
//}
//cout<<largest;
//}
//int main ()
//{
//    int arr [5]={1,2,3,4,5};
//    int largest=arr[0];
//    int largest2=arr[0];
//    for (int i=0;i<5;++i)
//    {
//        arr[i];
//        if(largest<arr[i])
//        {
//            largest=arr[i];
//        }
//    }
//    for (int i=0;i<5;++i)
//    {
//       if (largest2<arr[i] && arr[i]!=largest)
//       {
//           largest2=arr[i];
//       }
//    }
//    cout<<largest2;
//}
//int main ()
//
//{   int temp;
//    int n=5;
//    int arr[n]={1,2,3,4,5};
//    for (int i=0;i<n/2;++i)
//    {
//        temp=arr[n-i-1];
//        arr[n-i-1]=arr[i];
//        arr[i]=temp;
//    }
//    for (int i=0;i<5;++i)
//    {
//        cout<<arr[i];
//    }
//}
//int arr[]={1,2,3,4,1};
//for(int i=0;i<6;++i)
//{
//	for(int j=i+1;j<6;++j)
//	{
//		if(arr[i]==arr[j])
//		{
//			cout<<"Dublicate number"<<arr[i];
//			arr[j]==-1 && arr[i]!=-1;
//			
//		}
//	}
//}
//    int arr []={1,2,3,1,4,5,2};
//    for (int i=0;i<7;++i)
//    {
//        bool dup=false;
//        for(int j=i+1;j<7;++j)
//        {
//            if(arr[i]==arr[j])
//            {
//                dup=true;
//                arr[j]=-1;
//                
//            }
//            
//        }
//        if(dup)
//        {
//            cout<<"Duplicate value is="<<arr[i]<<endl;
//        }
//    }
//}
// int arr []={1,2,3,4,5};
//    for(int i=0;i<5;++i)
//    {
//        if(arr[i]=5)
//        {
//            cout<<"Found"<<endl;
//            return 0;
//        }
//    }
//    cout<<"Not Found";
//int main ()
//{
//    int arr[]={1,2,1,3,4};
//    int j=0;
//     for(int i=0;i<5;++i)
//     {
//         if(arr[i]!=1)
//         {
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     for(int i=0;i<j;++i)
//     {
//         cout<<arr[i];
//     }
//   
//}
//{
//    int arr[]={1,2,4,3,2};
//    for (int i=0;i<5;++i)
//    {
//        for(int j=i+1;j<5;++j)
//        {
//            if(arr[i]==arr[j])
//            arr[j]=-1;
//        }
//        
//        
//       
//    }
//    for(int i=0;i<5;++i)
//        {
//            if(arr[i]!=-1)
//            {
//                cout<<arr[i];
//            }
//        }
//    
//   
//}{
//    int arr[]={10,0,30,0,50};
//    int j=0;
//    for (int i=0;i<5;++i)
//    {
//        if(arr[i]!=0)
//        {
//            arr[j]=arr[i];
//            j++;
//        }
//    }
//    for(int i=j;i<5;++i)
//    {
//        arr[j]=0;
//        j++;
//    }
//    for(int i=0;i<5;++i)
//    {
//        cout<<arr[i];
//    }
//}
//#include <iostream>
//using namespace std;
//int main ()
//{
//int arr[]={10,12,13,14,15};
//int j=0;
//for(int i=0;i<4;++i)
//{
//    if(arr[i+1]-arr[i]>1)
//    {
//        cout<<arr[i]+1;
//    }
//    
//
//}
//}
//#include <iostream>
//using namespace std;
//int main ()
//{
//int arr[]={10,20,13,14,15};
//int j=0;
//for(int i=0;i<4;++i)
//{
//    if(arr[i+1]-arr[i]>1)
//    {
//     for(int j=arr[i]+1;j<arr[i+1];++j)
//     {
//         cout<<j<<endl;
//     }
//    }
//    
//
//}
//}
//#include <iostream>
//using namespace std;
//int main ()
//{
//  int k;
//  int j=0;
//  int temp;
//  cout<<"Enter the largest value to be found out";
//  cin>>k;
//  int arr[]={10,20,30,40,50};
//  for(int i=0;i<5;++i)
//  {
//      for(int j=i+1;j<5;++j)
//      {
//          if(arr[j]>arr[i])
//          {
//            int temp;
//            temp=arr[i];
//            arr[i]=arr[j];
//            arr[j]=temp;
//          }
//      }
//}
//
//  cout<<arr[k-1];
// 
//}



