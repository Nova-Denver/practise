#include<iostream>
using namespace std;
int main()
{

  int size,maxcount=0,count=0,i,j,index=-1,x,flag;
  cout<<"Enter the size of the array\t";
  cin>>size;
  int a[size];
  for(i=0;i<size;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the element you want to search\t";
  cin>>x;
  for(i=0;i<size;i++)
  {
    if(x==a[i])
    {
       flag=1;
    }
  }
  if(flag==1)
  {
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
}
else
cout<<"Element not exist";
  return 0;
}
