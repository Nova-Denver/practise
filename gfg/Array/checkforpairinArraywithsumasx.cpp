#include<iostream>
using namespace std;
int main()
{
  int n,i=0,x,flag;
  cout<<"Enter the number whose sum you want to find \n";
  cin>>x;
  cout<<"Enter the size of the array";
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    if(x==(a[i]+a[i+1]))
    {
// cout<<"Pair found "<<a[i]+a[i+1]<<endl;
flag=1;
     }

   }
   if(flag==1)
   cout<<"Pair found "<<endl;
else
cout<<"NOT FOUND!!";

return 0;
}
