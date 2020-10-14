#include<iostream>
using namespace std;
int linear(int a[],int key,int l,int hi)
{
  if(hi>l)
  return -1;
  if(l==key)
  return l;
  if(key==hi)
  return hi;

  return linear(a,key,l+1,hi-1);
}
int main()
{
  int n,key;
  int l=0;

  cout<<"Enter the size of array";
  cin>>n;
  int a[n];
  int h,hi;
  hi=h<n;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  cout<<"Enter the key you want to search";
  cin>>key;
  cout<<linear(a,key,l=0,hi);

}
