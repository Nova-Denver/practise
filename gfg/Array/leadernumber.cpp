#include<iostream>
using namespace std;
int main()
{


  int n,j;
  cout<<"Enter the size of the array";
  cin>>n;
  int a[n];
  cout<<"Enter the elements in array";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      break;
    //  cout<<a[j]<<" ";
    }
    cout<<endl;
    if(j==n)
    cout<<a[i]<<endl;
  }
}
