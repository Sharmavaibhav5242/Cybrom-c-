#include <iostream>
using namespace std;
class A
{
 int roll;
 string name;
 char section='a';
 public:
 void inp(){
     roll=123;
     name="Vaibhav";
 }
 void display(){
     cout<<roll<<name;
 }
};
int main()
{
    A obj;
    obj.inp();
    obj.display();
}
