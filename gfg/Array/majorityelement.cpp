#include<iostream>
using namespace std;
int main()
{

  int size,maxcount=0,count=0,i,j,index=-1;
  cout<<"Enter the size of the array";
  cin>>size;
  int a[size];
  for(i=0;i<size;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<size;i++)
  {
    count=0;
    
    for(j=0;j<size;j++)
    {
      if(a[i]==a[j])
      {
      count++;
    }
  }
    if(count>maxcount)
  {  maxcount=count;
    index=i;
  }
  }
  if(maxcount>(size/2))
  {
    cout<<"Majority found "<<a[index]<<endl;
  }
  else
  {
    cout<<"not found";
  }
  return 0;
}
