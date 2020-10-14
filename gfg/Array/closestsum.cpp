#include<iostream>
#include<climits>
using namespace std;
int main()
{
int n,sum=INT_MAX,i,j=0,tempsum,index1,index2;
cout<<"Enter the size of the array";
cin>>n;
int a[n];
cout<<"Enter the elements in array\n";
for(int i=0;i<n;i++)
{
  cin>>a[i];
}

while(i<n)
{
  for(i=1;i<n;i++)
  {
   tempsum=a[j]+a[i];
    if(tempsum<sum)
    {
      sum=tempsum;
      index1=a[i];
      index2=a[j];
    }
  }
  if(i==n)
  {
    j++;
  }
}
cout<<endl;
cout<<sum<<endl<<endl;
cout<<index1<<endl<<endl<<index2;

}
