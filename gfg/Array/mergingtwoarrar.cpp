#include<iostream>
using namespace std;

int main()
{

  int n,m,i,j,k;
  cout<<"Enter the size of a";
  cin>>n;
  int a[n];
  cout<<"Enter the size of b";
  cin>>m;
  int b[m];
  int c[n+m];
  int q;
  q=n;
  //q is for starting next merging position
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
  // MERGING
  for(i=0;i<n;i++)
{
  c[i]=a[i];
}
for(j=0;j<m;j++)
{
  c[q]=b[j];
  q++;
}

for(k=0;k<m+n;k++){
  cout<<c[k]<<" ";
}
}
