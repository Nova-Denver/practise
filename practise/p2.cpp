
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4,count=1;
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            if(i>=j)
                cout<<"*     ";
        }
        cout<<endl;
    }
}

