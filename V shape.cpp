//WAP TO TO PRINT THE SUM OF N NUMBERS......

// #include<iostream>
// using namespace std ;
// int main()
// {int n,sum=0;
// cout<<"enter the number  ";
// cin>>n;
    
//     for(int i=1;i<=n;++i)
//     {
//         sum+=i;
//         cout<<i<<"\n";
//     }
//     cout<<" \n sum is = "<<sum;
// }
  

//WAP TO PRINT THE NUMBER REVERSE ..........


// #include<iostream>
// using namespace std ;
// int main()
// {
// int num,r;
// cout<<"enter the number ";
// cin>>num;
// for(int i=1;num>0;i++)
// {
//   r=num%10;
//   cout<<r;
//   num=num/10;  
// }
// } 



//WAP TO CHECK WEATHER THE NUMBER IS PALINDROM OR NOT.........


                                                    //12321
// #include<iostream>
// using namespace std;
// int main()
// {
//     int digit,temp_digit,r,rev=0;
//     cout<<"enter the number ";
//      cin>>digit;
//      temp_digit=digit;
//     for(int i=1;digit>0;i++)
//     {
//       r=digit%10;
//       rev =(rev*10)+r;
//       digit=digit/10;
//     } 
//    if(rev==temp_digit)
//    {
//       cout<<"the number is palindrome";
//    }
//    else{
//       cout<<"the number is not palindrome";
//    } 
    
     
//  }



//WAP TO CALCULATE THE POWER OF THE NUMBER..........


// #include<iostream>
// using namespace std ;
// int main()
// {
//    int n,p,power=1;
//    cout<<"enter the number";
//    cin>>n;
//    cout<<"enter the power";
//    cin>>p;
//    for(int i=1;i<=p;i++)
//    {
//       power=power*n;
//    }
//    cout<<power;
// }







//PRINT THE ASCCI FROM 1 TO 256..........
//QUESTION 1:-


// #include<iostream>
// using namespace std;
// int main()
// {
   
//    for(int i=0;i<=256;i++)
//    {
//       cout<<char(i)<<"\n";
//    }
   
// }


//QUESTION 2:-WAP TO PRINT THE ALL ACSII VALUES FROM 0 TO 256........


// #include<iostream>
// using namespace std;
// int main()
// {
   
//    for(char ch='A';ch<='Z';ch++)
//    {
//       cout<<"the value of char is ="<<ch<<"="<<int(ch)<<"\n";
//    }
   
// }






//WAP TO THE PRINT THE FACTOR OF GIVEN NUMBER ...........




// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i;                  //factor...........
//             cout<<endl;
//         }

//     }
// }









// wap to check wheather the number is prime or not........




// #include <iostream>
// using namespace std ;
// int main() {

// int n,count=0;
// cout<<"enter the number";
// cin>>n;
// for(int i=1;i<=n;i++) //7
// {
// if(n%i==0)
// {
//     count++;
// }

// }
// if(count==2)
// {
//     count<<"the number is prime";
// }
// else
// {
//     cout<<"the number is not prime";
// }


//     return 0;
// }






//WAP TO CHECK THE NUMBER IS PERFECT OR NOT........





// #include <iostream>
// using namespace std ;
// int main() {

// int n,fact=1,sum=0;

// cout<<"enter the number";
// cin>>n;
// for(int i=1;i<n;i++)
// {
//     if(n%i==0)
//     {
//       sum=sum+i;
        
//     }
// }
// if(sum==n)
// {
//     cout<<"the number is perfect";
// }
//     return 0;
// }







//WAP TO MAKE THE REVERSE OF THE NUMBER.............




// #include <iostream>
// using namespace std ;
// int main() {

// int n,reminder,reverse=0;

// cout<<"enter the number";
// cin>>n;
// for(int i=1;i<=n;i++)
// {
// reminder=n%10;
// reverse=(reverse*10)+reminder;
// n=n/10;
// }
// cout<<"the reversed number is = "<<reverse;



//     return 0;
// }








//WAP TO CHECK WEATHER THE NUMBER IS ARMSTRONG NUMBER OR NOT..........



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,r,temp,ans=0;
//     cout<<"enter the number ";
//     cin>>n;
//      temp=n;
//     for(int i=1;n>0;i++)
//     {
//         r=n%10;
//        ans=ans+(r*r*r);
//        n=n/10;
//     }

//     if(temp==ans)
//     {
//         cout<<"the number is ARMSTRONG";
//     }
//     else
//     {
//         cout<<"the number is not a  ARMSTRONG";
//     }

// }








//WAP TO CONVERT THE binary NUMBER INTO (decimal)............



// #include<iostream>
// using namespace std;
// int main()
// {
//  int n,reminder,ans=0,power=1;
//  cout<<"enter the number ";
//  cin>>n;
// for(  ;n!=0; )                          // OR   for(int i=1;n!=0;i++)
// {
//     reminder=n%10;
//     ans=ans+(reminder*power);
//     power=power*2;
//     n=n/10;
// }
// cout<<"the decimal number is =  "<<ans;
// }






//WAP TO CONVERT THE decimal  NUMBER INTO binary ............




// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,reminder,ans=0,power=1;
//     cout<<"enter the number ";
//     cin>>n;
//     for(;n!=0;)
//     {
//         reminder=n%2;
//         ans=ans+(reminder*power);
//         power=power*10;
//         n=n/2;
//     }   
//     cout<<"the binary number is = "<<ans;
// }







//ANOTHER METHOD OF (REVERSE NUMBER BY VARIATION IN FOR LOOP)




// #include<iostream>
// using namespace std ;
// int main(){
//     int n,rev=0;
//     cout<<"enter the number";
//     cin>>n;

//     for(  ;n!=0;n=n/10)
//     {
//      rev=rev*10+n%10;
//     }
//     cout<<"the reversed number is = "<<rev;
// }






//WAP TO CALCULATE THE HCF OF TWO NUMBER.............





// #include <iostream>
// using namespace std;

// int main()
// {
//    int smaller=4;
//    int larger=8;
//    int hcf;
//    for(int i =1;i<=smaller;i++)
//    {
//       if(smaller%i==0 && larger%i==0)
//       {
//        hcf=i;
//       }
//    }
//    cout<<"the hcf is = "<<hcf;
// }










//WAP TO CALCULATE THE LCM OF TWO NUMBER........


//  #include <iostream>
// using namespace std;

// int main()
// {
// int smaller=3;
// int larger =4;
// int lcm;
// for(int i=larger;    ; i=i+larger)
// {
//     if(i%larger==0 && i%smaller==0)
//      {
//         lcm=i;
//         break;
//      }

// }
// cout<<"the lcm is = "<<lcm;
// }



//WAP TO PRINT THE RIGHT ANGLE TRIANGLE................. 



// #include<iostream>
// using namespace std ;                                                                //*
// int main()                                                                           //* * 
// {                                                                                    //* * *
//    for(int r=1;r<=5;r++)                                                             //* * * *
//    {                                                                                 //* * * * *
//       for(int c=1;c<=5;c++)
//       {
//          if(c<=r)
//          {
//             cout<<"*";
//          }
//          else{
//             cout<<" ";
//          }
//       }
//       cout<<endl;
//    }
// }







//WAP TO PRINT THE LEFT ANGLE TRIANGLE ........................



// #include<iostream>
// using namespace std ;
// int main()                                              //                *
// {                                                       //              * *  
//    for(int r=1;r<=5;r++)                              //              * * *
//    {                                                     //         * * * *
//       for(int c=1;c<=5;c++)                              //       * * * * *
//       {
//          if(c>=6-r)
//          {
//             cout<<"*";
//          }
//          else
//          {
//             cout<<" ";
//          }
//       }
//       cout<<endl;
//    }
// }




//WAP TO PRINT THE INVERSE RIGHT ANGLE TRIANGLE............





// #include<iostream>
// using namespace std ;
// int main()
// {
//    for(int r=1;r<=5;r++)
//    {
//       for(int c=1;c<=5;c++)
//       {
//          if(c<=6-r)
//          {
//             cout<<"*";

//          }
//          else 
//          {
//             cout<<" ";
//          }
//       }
//    cout<<endl;
//    }
// }




//WAP TO PRINT THE INVERSE LEFT TRIANGLE ..............




// #include<iostream>
// using namespace std ;
// int main()
// {
//    for(int r =1;r<=5;r++)
//    {
//       for(int c=1;c<=5;c++)
//       {
//          if(c>=r)
//          {
//             cout<<"*";
//          }
//          else
//          {
//             cout<<" ";
//          }
//       }
//    cout<<endl;
//    }
// }





//WAP TO PRINT THE PRAMID............




// #include<iostream>
// using namespace std ;
// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=9;c++)
//         {
//             if(c>=6-r &&  c<=4+r)
//             {
//                 cout<<"*" ;

//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }








//WAP TO PRINT THE INVERSE PRAMID.......



// #include<iostream>
// using namespace std ;
// int main()
// {
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=9;c++)
//         {
//             if(c>=r && c<=10-r)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }





//WAP TO PRINT THE DIMOAND SHAPE..........




// #include<iostream>
// using namespace std ;
// int main()
// {
//     int a =0 ;
// for(int r=1;r<=9;r++)
// {

//     (r<=5)?a++:a--;

//     for(int c=1;c<=9;c++)
//     {
//       if(c>=6-a && c<=4+a)
//        {
//             cout<<"*";
//         }
//         else
//         {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// }








//WAP TO PRINT THE alphabets in the row........





// #include<iostream>
// using namespace std ;
// int main()
// {
//     int a=64;
//     for(int r=1;r<=5;r++)
//     {
//         for(int c=1;c<=5;c++)
//         {
//             if(c<=r)
//             {
//                 cout<<char(a+r);
               
//             }
            
//         }

//     cout<<endl;
//     }
// }






//WAP TO PRINT THE NUMBER TRIANGLE




// #include<iostream>
// using namespace std;
// int main()
//     {
//        int temp;
     
//      for(int r=1;r<=5;r++)
//      {
//            temp=r;
//         for(int c=1;c<=9;c++)
//         {
//             if(c<=r)
//             {
//                 cout<<temp;
//                 temp++;
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//      }
//     }








//WAP TO PRINT THE AP SERIES.............




// #include<iostream>
// using namespace std ;
// int main()
// {
//     int a=1,d=2,n=5;
//     int temp=0;
//     for(int i =0;i<n;i++)
//     {
//        temp=a+i*d;
//        cout<<temp<<" ";
//     }
// }





//WAP TO PRINT THE FIBBONACHI SERIES................




// #include<iostream>
// using namespace std;
// int main()
// {
//     int t1=0;
//     int t2=1;
//     int n=5;
//     int next=1;
//     int i=0;

// while(i<=n)
// {
// if(i==0)
// { 
//     cout<<t1<<" ";
//     i++;
//     continue;
// }
// if(i==1)
// {
//     cout<<t2<<" ";
//     i++;
//     continue;
// }
// next=t1+t2;
// cout<<next<<" ";
// t1=t2;
// t2=next;
// i++;
// }

// }








//WAP TO PRINT THE SERIES AND CALCULATE THE SUM    1    11    111    1111   11111.............






// #include<iostream>
// using namespace std ;
// int main()
// {
//    int t=0,sum=0;

    
//         for(int j=1;j<=5;j++)
//         {
//             t=t*10+1;
//             sum=sum+t;
//             cout<<t<<"   ";
//         }
//     cout<<"THE SUM OF THE SERIES IS = "<<sum;
// }

