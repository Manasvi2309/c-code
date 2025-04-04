#include<iostream>
using namespace std;
int main()
{
    // int a = 10;
    // x:
    // cout << a <<"\n";
    // a--;
    // if (a>0)
    // {
    //     goto x;
    // }
   
    int y;
    cout<<"enter y =";
    cin>> y;
    int i = 1;
    x:
    i++;
    if(i<=10)
    {
       cout<<"\n" ;
       cout<<y*i;
       goto x;
    }
return 0;
}
