#include<iostream>
using namespace std;
int main ()
{
    int unit,bill;
    cout<<"enter unit\n";
    cin>>unit;
    if(unit>=0 && unit<= 50)
    {
        cout<<"bill is ="<<unit*2;
    }
    else if(unit>=51 && unit<= 100)
    {
        cout<<"bill is ="<<unit*3;
    }
    else if(unit>=101 && unit<= 500)
   {
    cout<<"bill is ="<<unit*5<<;
   }
   else(unit<0)
   {
    cout<<"reading is invalid\n";
   }

}