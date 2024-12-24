//#include <iostream>
//using namespace std;
//int sum()
//{
//    int a=10;
//    int b=20;
//    return a+b;
//}
//int main()
//{
//    cout<<sum();
//}
//#include <iostream>
//using namespace std;
//void sum()
//{
//    cout<<"jhkhjhkh";
//}
//int main()
//{
//  sum();
//}
//#include <iostream>
//using namespace std;
//int sum(int a,int b)
//{
//    return a+b;
//}
//int main()
//{
//    cout<<sum(10,12);
//}
//#include <iostream>
//using namespace std;
//int sum(int a,int b)
//{
//    int c=a;
//    int d=b;
//    return c+d;
//}
//int main()
//{
//    int a;
//    int b;
//    cout<<"Enter two values";
//    cin>>a>>b;
//    cout<<sum(a,b);
//}
//#include <iostream>
//using namespace std;
//// function= userdefined pre defined
//// function with parameter without parameter
//// function return type and non return type
//int sum(int *a,int *b)
//{
//     return *a**b;
//    //  pointer use *
//      pointer dangling ho jata h isilye call by refrence use karenge
//}
//int main()
//{ 
//    int a,b;
//    cout<<"Enter two number";
//    cin>>a>>b;
//    cout<<sum(&a,&b);
//}
//#include <iostream>
//using namespace std;
//// function= userdefined pre defined
//// function with parameter without parameter
//// function return type and non return type
//int sum(int &b)
//{
//     return b;
//    //  refrencing
//    
//}
//int main()
//{ 
//    int a;
//    cout<<"Enter number";
//    cin>>a;
//    cout<<sum(a);
//}
//#include <iostream>
//using namespace std;
//namespace first
//{
//    void display()
//{
//    cout<<"first";
//    
//}
//}
//namespace second
//{
//   void display()
//{
//    cout<<"second";
//} 
//}
//
//
//int main()
//{
//    
// first:: display();
// second::display();
//}
//#include <iostream>
//using namespace std;
//void rev(string &str)
//{
//    int start=0;
//    int end=str.length()-1;
//    while(start<end)
//    {
//        char temp;
//        temp=str[start];
//        str[start]=str[end];
//        str[end]=temp;
//        
//        start++;
//        end--;
//    }
//}
//int main()
//{
//   string str="vansh";
//   rev(str);
//   cout<<str;
// }
//#include <iostream>
//using namespace std;
//bool pal( string &str)
//{
//int start=0;
//int end=str.length()-1;
//while(start<end)  
//{
//    if(str[start]!=str[end])
//    {
//        cout<<"not a palindrome";
//        return false;
//    }
//    start++;
//    end--;
//    
//   
//}
//    return true;
//}
//int main()
//{
//
//string str="aman";
//if(pal(str))
//{
//    cout<<"pallindrome";
//}
//
//
//
//}
//#include <iostream>
//using namespace std;
//void toggle(string &str)
//{
//    for(int i=0;i<str.length();++i)
//    {
//        // char ch=str[i];
//        if(str[i]>='A' && str[i]<='Z')
//        {
//            str[i]=str[i]+32;
//        }
//        else if(str[i]>='a' && str[i]<='z')
//        {
//            str[i]=str[i]-32;
//        }
//    }
//}
//int main()
//{
//    string str="VANSH";
//    toggle(str);
//    cout<<str;
//}
//#include <iostream>
//using namespace std;
//bool bp(string &str)
//{
//    int circle=0;
//    int square=0;
//    int curly=0;
// for(int i=0;i<str.length();++i)
//  {
//      char ch=str[i];
//      if(ch=='(')  circle++;
//        else if(ch=='[')  square++;
//                else if(ch=='{')  curly++;
//                
//    else if(ch==')'){
//        if(circle==0)
//        {
//            return false;
//        }
//        circle--;
//    }            
//
//
//    else if(ch=='}'){
//        if(curly==0)
//        {
//            return false;
//        }
//        curly--;
//    }            
//
//
//
//          else if(ch==']'){
//        if(square==0)
//        {
//            return false;
//        }
//        square--;
//    }            
//
//      
//      
//  }
//  
//  
//  
//  if(circle==0 && square==0 && curly==0)
//  {
//      return true;
//  }
//        
//return false;
//        
//    
//    
//    
//    
//}
//int main()
//{
//   string str="([{}])" ;
//   if(bp(str))
//   {
//       cout<<"balanced";
//   }
//   else
//   {
//       cout<<"unbalanced";
//   }
//    
//}
//#include <iostream>
//using namespace std;
//bool anagram(string &str1,string &str2)
//{
//    char count[256]={0};
//    if(str1.length()!=str2.length())
//    {
//        return false;
//    }
//    for(int i=0;i<str1.length();++i)
//    {
//        count[str1[i]]++;
//        count[str2[i]]--;
//    }
//    for(int i=0;i<str1.length();++i)
//    {
//        if(count[i]!=0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//int main()
//{
//    string str1="bittu";
//    string str2="titub";
//    if(anagram(str1,str2))
//    {
//        cout<<"Anagram";
//    }
//    else
//    {
//        cout<<"Not an anagram";
//    }
//}
#include <iostream>
using namespace std;
bool subseq(string &str1, string &str2)
{
    int j=0;
    char m=str1.length();
    char n=str2.length();
    for(int i=0;i<m;++i)
    {
        if(str1[i]==str2[j])
        {
            j++;
        }
    }
    if(n==j)
    {
        return true;
    }
    return false;
}
int main()
{
    string str1="ABCDE";
    string str2="ACB";
    if((subseq(str1,str2)))
    {
        cout<<"Subsequence";
    }
    else
    {
        cout<<"Not a subsequence";
    }
}
