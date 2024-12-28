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
#include <iostream>
using namespace std;
int sum(int number)
{
    if(number<=1)
    {
        return number;
    }
    return number*sum(number-1);
}
int main()
{
    cout<<sum(4);
}
