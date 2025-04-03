#include<iostream>
using namespace std;
int main()
{
    // int a,b,c;
    // cout<<"enter 2 num";
    // cin>>a>>b;
    // cout<<"select 1 for + ,select 2 for - \n";
    // cin>>c;
    // switch(c)
    // {
    //     case 1:
    //     {
    //         cout<<"sum is =\n"<<a+b;
    //         break;
    //     }
    //     case 2:
    //     {
    //         cout<<"sbtract is =\n"<<a-b;
    //         break;
    //     } 
    //     default :
    //     {
    //         cout<<"invalid choice";
    //         break;
    //     } 
    //     }

                         // example
    
    const float x= 3.14;
    int r;
    cout <<"enter r";
    cin >>r;
    cout <<"select A for area of circle ,C for curcumference , S for square";
    char n;
    cin>> n;
    switch (n)
    {
       case 'a':
       {
        cout<<"area ="<<x*r*r;
        break;
       }
       case 'c':
       {
        cout<<"circum ="<<2*x*r;
        break;
       }
       case 's':
       {
        cout<<"square="<<r*r;
        break;
       } 
       default:
       {
        cout <<"invalid";
        break;
       } 
    }

    }
