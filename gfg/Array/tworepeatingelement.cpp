#include <iostream>
using namespace std;
int main()
{
        int n,i,j;
        cout<<"Enter the size of the array";
        cin>>n;
        int a[n];
        for(i=0; i<n; i++) {
                cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
                for(j=i+1; j<n; j++) {
                        if(a[i]==a[j])
                        {

                                cout<<"The repeating elements are "<<a[i]<<endl;
                                break;


                        }

                }


        }

}
