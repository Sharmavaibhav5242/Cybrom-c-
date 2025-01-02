//#include <iostream>
//using namespace std;
//int sum (int number)
//{
//    if (number<=1)
//    {
//        return number;
//    }
//    return number+sum(number-1);
//}
//int main()
//{
//    cout<<sum(4);
//}
//#include <iostream>
//using namespace std;
//int sum(int number)
//{
//    if(number<=1)
//    {
//        return number;
//    }
//    return number*sum(number-1);
//}
//int main()
//{
//    cout<<sum(4);
//}
#include <iostream>
using namespace std;
int fibo(int number)
{
	if(number<=1)return number;
	return fibo(number-2)+fibo(number-1);
}
int main()
{
	cout<<fibo(10);
}
