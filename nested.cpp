#include<iostream>
using namespace std;
int main(){
   int aadhar;
   cout<<"enter aadhar\n" ;
   cin>>aadhar;
   if (aadhar == 1234)
   {
    int age ;
    cout<<"enter your age\n";
    cin>>age;
    if(age >=18)
    {
        cout<<"you can drive\n";
    }
    else
    {
        cout<<"you are not elligible\n";
    }
   }
   else{
    cout<<"your aadhar is invalid\n";
   }
}