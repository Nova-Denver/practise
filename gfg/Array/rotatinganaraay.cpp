#include<iostream>
using namespace std;
int main()
{
int n,m,i,j,k,q;
cout<<"Enter the size of the array\n";
cin>>n;
int a[n];
cout<<"Enter how many array you want to rotate\t";
cin>>m;
int b[m];
int c[m+n];
q=m;
cout<<"Enter the elements in a\n";
for(i=0;i<n;i++)
{
  cin>>a[i];
}
for(j=0;j<q;j++)
{
  b[j]=a[j];
}
cout<<"Elements in b\n";
for(j=0;j<q;j++)
{
  cout<<b[j]<<endl;
}
for(i=q;i<n;i++)
{
  a[i-q]=a[i];
}
cout<<"Elements in a after rotate\n";
for(i=0;i<n-q;i++)
{
  cout<<a[i]<<endl;
}
//merging
for(k=0;k<n-q;k++)
{
  c[k]=a[k];
}
cout<<"Elements in c\n";
for(k=0;k<n-q;k++)
{
  cout<<c[k]<<endl;
}
j=0;
for(k=n-q;k<n;k++)
{

  c[k]=b[j];
  j++;
}
cout<<"Elements in c after first merge \n";
for(k=n-q;k<n;k++)
{
  cout<<c[k]<<endl;
}
cout<<"Elements after rotation\n";
for(i=0;i<n;i++)
{
 cout<<c[i]<<endl;
}
}
