#include<iostream>
using namespace std;
int main()
//this method work for rotating one index in array
{
int n,i,temp;
cout<<"Enter the size of the array\n";
cin>>n;
int a[n];
cout<<"Enter the elements in a\n";
for(i=0;i<n;i++)
{
  cin>>a[i];
}
temp=a[0];  //if we put while loop in thi sprocess then array will be reversed
//while(i<n){
for(i=0;i<n;i++)
{
  a[i]=a[i+1];

}
  a[n-1]=temp;
//}
cout<<"after rotatin\n";
for(i=0;i<n;i++)
{
  cout<<a[i]<<endl;
}
}
