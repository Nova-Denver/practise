#include<iostream>
using namespace std;
int main()
{

    int n,key,i;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements in array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       // cout<< a[i]<<endl;

    }

    cout<<"enter the number u want to search"<<endl;
    cin>>key;
    for(i=0;i<n;i++)
    {

        if(a[i]==key)
        {
            cout<<"key present at index "<<i;
        }
    }
}
