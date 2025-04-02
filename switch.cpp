#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 2 num";
    cin>>a>>b;
    cout<<"select 1 for + ,select 2 for - \n";
    cin>>c;
    switch(c)
    {
        case 1:
        {
            cout<<"sum is =\n"<<a+b;
            break;
        }
        case 2:
        {
            cout<<"sbtract is =\n"<<a-b;
            break;
        } 
        default :
        {
            cout<<"invalid choice";
            break;
        } 
        }
    }
