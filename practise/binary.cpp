#include<iostream>
using namespace std;
int main()
{

    int n,i,key;
    cout<<"Enter the alue of n"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements in array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key";
    cin>>key;
    int h,l=0,mid;
    h=n-1;
    mid=(h+l)/2;
    while(l<=h)
    {

        if(key==a[mid]){
            cout<<mid;
            break;
        }
        else if(key<a[mid])
           {

            h=mid-1;
          cout<<h;
break;

            }
        else if(key>a[mid])
          {

           l=mid+1;
          cout<<l;
            break;
          }
          else
            cout<<"nt";

    }


}
