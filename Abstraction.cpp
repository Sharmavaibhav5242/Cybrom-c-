#include <iostream>
using namespace std;
class A
{
    public:
    virtual void shape()=0;
    
        
    
};
class B:public A
{
    public:
    void shape()
    {
        cout<<"Square";
    }
};
int main()
{
    
    B obj1;
    obj1.shape();
}
