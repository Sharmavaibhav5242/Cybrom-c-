#include<iostream>
using namespace std;
int main()
{
 cout<<"1.international"<<"\t"<<"2.domestic"<<endl;
 int num;
 cin>>num;
 switch(num)
 {
 	case 1 : cout<<"1.USA"<<"\t"<<"2.UK"<<endl;
 	int option;
 	cin>>option;
 	switch(option)
 	{
	 case 1 : cout<<"$5000";
 	break;
 	case 2: cout<<"8000 pounds";
 	break;}
 	break;
 	case 2: cout<<"1.Manali"<<"\t"<<"2.Himalaya"<<endl;
 	int options;
 	cin>>options;
 	switch (options)
 	{
 		case 1 : cout<<"8000 rupees";
 		break;
 		case 2 : cout<<"6000 rupees";
 		break;
	 }
 	
 	break;
 	default:cout<<"Error"<<endl;
 	break;
 	

 }

}
