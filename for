#include<iostream>
using namespace std;
int main(){

//   int i , count = 0;
//   cout<<"enter =";
//   cin>>n;

    // for(int i =1;i<=10;i++)
    // {
    //     cout<<n*i<<"\n";
    // }

// for(int i = 1;i<=n;i++)
// {
//         if (n%i == 0)
//         {
//            count++;
//         }
//     }
//     if(count>2){
//         cout<<"non prime no."<<"\n";
//     }
//     else{
//         cout<<"prime no."<<"\n";
//     }


    // for(int i = 1;i<=n;i++)
    // {
    //         if (n%i == 0)
    //         {
    //            cout<<i;
    //         }
    //     } 

   
    // int n , sum = 0;
    // cout<<"enter =";  //234
    // cin>>n;

    //  while( n>0 ){
    //     int x = n%10;//4
    //     sum += 1; // 4 3 2
    //     n /= 10; //23 , 2
    // }

    // cout<<sum; //3

    int n , sum = 0 ,temp = n;
    cout<<"enter =";  //234
    cin>>n;

     while( n>0 ){
        int x = n%10;//4
        sum += 1; // 4 3 2
        n /= 10; //23 , 2
    }

    if(temp % sum == 0){
      cout<<"manasvi no.";
    }
    else{
        cout<<"not";
    }


}
