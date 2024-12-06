 #include<iostream>
 using namespace std ;
 int main()
 {int n,sum=0;
 cout<<"enter the number  ";
 cin>>n;
    
     for(int i=1;i<=n;++i)
     {
         sum+=i;
         cout<<i<<"\n";
     }
     cout<<" \n sum is = "<<sum;
 }
