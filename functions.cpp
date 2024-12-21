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
