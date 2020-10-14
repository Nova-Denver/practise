#include<iostream>
using namespace std;
int main()
{

  int n,i;
  cout<<"Enter the size of the array";
  cin>>n;
  int array[n];
  cout<<"Enter the elements in array";
  for(i=0;i<n;i++)
  {
    cin>>array[i];
  }
  int max=0;
  int maxfar=0;
  for(i=0;i<n;i++)
  {
    max=max+array[i];
    if(max>maxfar)
    maxfar=max;

  if(max<0)
  {
    max=0;
  }

}
cout<<maxfar;
}
