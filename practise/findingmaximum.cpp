#include<iostream>
using namespace std;
int main()
{

    int max,n,a[100],i;
    cout<<"enter the size of array";
    cin>> n;
    for(i=0;i<n;i++)
    {
        cin>> a[i];

    }
    max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
         cout<< max<<endl;

    }
    cout<<max;


}
