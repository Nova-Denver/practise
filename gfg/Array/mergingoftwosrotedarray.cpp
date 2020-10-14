#include<iostream>
using namespace std;
int main()
{

  int n,m,i=0,j=0,k=0;
  cout<<"Enter the size of a";
  cin>>n;
  int a[n];
  cout<<"Enter the size of b";
  cin>>m;
  int b[m];
  int c[m+n];
  cout<<"Enter the elements of a";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter the elements of b";
  for(j=0;j<m;j++)
  {
    cin>>b[j];
  }
  i=0;
  j=0;
  k=0;
  while(i<n&&j<m)
  {
    if(a[i]<=b[j])
    {
    c[k]=a[i];
    i++;
    k++;
  }
  else
  {
    c[k]=b[j];
    j++;
    k++;
  }
}
while(i<n)
{
  c[k]=a[i];
  i++;
  k++;
}
while(j<m)
{
  c[k]=b[j];
  j++;
  k++;
}
cout<<"SORTED MERGED ELEMENTS ARE ";
for(k=0;k<m+n;k++)
{
  cout<<c[k]<<" ";
}
cout<<endl;
if((m+n)%2==0)
{ int q=0;
  q=((m+n)/2);
  cout<<q<<endl;
}
else
{ int w=0;
  w=(m+n+1)/2;
  cout<<w<<endl;
}
// MEDIAN
}
