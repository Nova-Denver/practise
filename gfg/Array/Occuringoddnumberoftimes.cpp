#include<iostream>
using namespace std;
int main()
{

  int size,count=0,maxcount=0,index=0;
  cout<<"Enter the size of array \n";
  cin>>size;
  int a[size];
  for(int i=0;i<size;i++)
{
  cin>>a[i];
}
for(int i=0;i<size;i++)
{ count=0;
  for(int j=0;j<size;j++)
  {
    if(a[i]==a[j])
    count++;
  }
  if(count%2!=0)
  {
maxcount=count;
index=i;
  }

}
cout<<a[index]<<" "<<maxcount;

}
// NOTE->>>>>>>>>> IF TWO NUMBERS PRESENT ODD TIMES IN ARRAY THEN IT PRINT WHATEVER LAST ELEMENT OCCUR
