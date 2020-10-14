#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"ENter the size of the array";
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++)
  {
    cin>>array[i];
  }
  cout<<"Reversed is ";
  for(i=n-1;i>=0;i--)
  {
    cout<<array[i]<<" ";
  }
}
