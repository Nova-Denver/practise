#include <iostream>
using namespace std;
int main()
{

        int n,i,count0,count1,count2;
        cout<<"Enter the size of the array\n";
        cin>>n;
        int a[n];
        cout<<"Enter the elements in array\n";
        for(i=0; i<n; i++)
        {
                cin>>a[i];
        }
        for(i=0; i<n; i++) {
                if(a[i]==0)
                {
                        count0++;
                }
                else if(a[i]==1)
                {
                        count1++;
                }
                else if(a[i]==2) {
                        count2++;
                }
        }
        for(i=0; i<count0; i++)
        {
                a[i]=0;
        }
        for(i=count0; i<count1; i++)
        {
                a[i]=1;
        }
        for(i=count1; i<count2; i++)
        {
                a[i]=2;
        }
        for(i=0; i<n; i++) {
                cout<<"\t"<<a[i];
        }


}
