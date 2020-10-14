#include<iostream>
using namespace std;
int main()
{
int n,m,i,j;
cout<<"Enter the size of array a\n";
cin>>n;

cout<<"Enter the size of array b\n";
cin>>m;
int a[n]={0},b[m]={0},c[m]={0};
cout<<"Enter the element in array\n";
for(i=0;i<n;i++){
  cin>>a[i];
}
j=0;
for(i=0;i<n;i++)
{
  if(i%2==0)
  {
    b[j]=a[i];
    j++;
  }
}
cout<<"Elements in b array\n";
for(i=0;i<m;i++)
{
  cout<<b[i]<<"  "<<endl;
}
j=0;
for(i=1;i<n;i++)
{
  if(i%2!=0)
  {
    c[j]=a[i];
    j++;
  }
}
cout<<"Elements in a after deleting\n";
for(j=0;j<m;j++)
{
  cout<<c[j]<<"  "<<endl;
}
cout<<"sum_1\n";
int sum_1=0;
for(i=0;i<m;i++)
{
sum_1+=b[i];
}
cout<<sum_1<<endl;
int sum_2=0;
cout<<"sum_2\n";
for(i=0;i<m;i++)
{
sum_2+=c[i];
}
cout<<sum_2<<endl;
if(sum_1>sum_2)
{
  cout<<"Maximun sum is \n"<<sum_1<<endl;
}
else

cout<<"Maximun sum is \n"<<sum_2<<endl;

}
