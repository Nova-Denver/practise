#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int size,i,j,k,sum=0,maxsum=INT_MIN,index;
  cout<<"ENter the size of the array";
  cin>>size;
  int arr[size];
  for(i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  for(i=0;i<size;i++)
  {
    for(j=i;j<size;j++)
    {
      for(k=i;k<j;k++)
      sum+=arr[k];
    }

  if(sum>maxsum)
  maxsum=sum;
index=i;
}
cout<<maxsum<<" ";
return 0;
}
