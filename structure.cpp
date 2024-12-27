//#include <iostream>
//using namespace std;
//struct info( string &name,int &roll)
//{
//	string name;
//	int roll;
//	cout<<name<<roll<<endl;
//}
//int main()
//{
//	string name="Vaibhav";
//	int roll=46;
//	info(name,roll);
//}
//#include <iostream>
//using namespace std;
//struct info
//{
//    string name;
//    int age;
//    // int marks[5]={0};
//    void display()
//    {
//        cout<<name<<endl;
//        cout<<age<<endl;
//        // cout<<marks<<endl;
//    }
//};
//int main()
//{
//    info p;
//    info v;
//    info c;
//    cout<<"Enter information"<<endl;
//    cin>>p.name;
//    cin>>p.age;
//    // cin>>p.marks;
//    p.display();
//    cin>>v.name;
//    cin>>v.age;
//    // cin>>v.marks;
//    v.display();
//    cin>>c.name;
//    cin>>c.age;
//    // cin>>c.marks;
//    c.display();
//}
//#include <iostream>
//using namespace std;
//struct info
//{
//    int a;
//    struct info *link; //link list and doubly link list.
//};
//int main()
//{
//    info p;
//    info c;
//    p.link=NULL;
//    p.a=12;
//    c.link=NULL;
//    c.a=15;
//    
//    c.link=&p;
//    cout<<c.link->a;
//}
