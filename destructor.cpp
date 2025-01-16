#include <iostream>
using namespace std;
class A
{
    public:int *ptr;
    A()
    {
        ptr=new int;
        cout<<"memory allocated";
    }
    ~A()
    {
        delete ptr;
        cout<<"Memory deallocated";
    }
};
int main()
{
    A obj;
}
