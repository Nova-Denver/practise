#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int sele=INT_MAX,ssele=INT_MAX,n,i;
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
    if(a[i]<sele)
    sele=a[i];

  }
  for(i=0;i<n;i++)
  {
    if(a[i]<ssele&&a[i]>sele)
    ssele=a[i];
  }
  cout<<endl;
  cout<<"SMALLEST"<<sele<<endl;
  cout<<"s.SMALLEST"<<ssele<<endl;

}
