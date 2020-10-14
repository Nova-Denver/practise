#include <iostream>
using namespace std;
int main()
{
        int n,i,temp,temp2;
        cout<<"Enter the size of the array";
        cin>>n;
        int a[n];
        cout<<"Enter the elements in array\n";
        for(i=0; i<n; i++)
        {
                cin>>a[i];
        }
        /*    cout<<"FOR CHECKING \n";
            for(i=n-1; i>=0; i--) {
                    cout<<a[i];
            } */
        for(i=0; i<n; i++) {

                if(a[i]<a[i+1])
                {
                        //    flag=1;
                }
                else {
                        temp=i;
                        break;
                }

        }
        //  cout<<endl<<temp;
        for(i=n-1; i>=0; i--) {
                if(a[i]>a[i-1])
                {
                        //    flag=1;
                }
                else {
                        temp2=i;
                        break;

                }
        }
        cout<<"Indexes are "<<"\t"<<temp<<"\t"<<temp2;
}
