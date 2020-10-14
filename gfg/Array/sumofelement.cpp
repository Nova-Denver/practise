#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the total element in array";
    cin>>n;
    cout<<"Enter the element in array";
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
}
