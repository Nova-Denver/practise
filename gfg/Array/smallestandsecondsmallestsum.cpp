#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int sum=INT_MIN,secondsum=INT_MIN,n,i,tempsum;
  cout<<"Enter the size of the the array\n";
  cin>>n;
  int a[n];
  cout<<"Enter the elments in array\n";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    tempsum=a[i]+a[i+1];
    if(tempsum>sum)
    {
      sum=tempsum;
    }

  }
  for(i=0;i<n;i++)
  {
    tempsum=a[i]+a[i+1];
    if(secondsum<tempsum && tempsum<sum)
    {
      secondsum=tempsum;
    }

  }

  cout<<"\n\n\n\n\n\n";
  cout<<sum<<endl;
  cout<<secondsum<<endl;


}
