#include<iostream>
using namespace std;
int main()
{

    int n,i,rev=0,r,temp;

    cout<<"enter n";
    cin>>n;
    temp=n;
    while(n>0)
   {
       r=n%10;
   rev=rev*10+r;
       n=n/10;

   }
   cout<<rev;

   if(rev==n)
   {

       cout<<"it is pallindrome";
   }
   else
   {

       cout<<"it is not pallindrome";
   }
}
