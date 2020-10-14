#include<iostream>
using namespace std;
int main()
{

    int m,n;
    cout<<"enter the value of n and m";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
            m-=n;
        else
            n-=m;

    }
    cout<<m;
}
