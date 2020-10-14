#include <iostream>
using namespace std;
int main(){
        int n,i,j,min,temp;
        cout<<"Enter the size of the array";
        cin>>n;
        int a[n];
        cout<<"Enter the elements in array";
        for(i=0; i<n; i++) {
                cin>>a[i];
        }
        for(i=0; i<n-1; i++) {
                min=i;
                for(j=i+1; j<n; j++) {
                        if(a[j]<a[min])
                        {
                                min=j;
                                temp=a[i];
                                a[i]=a[min];
                                a[min]=temp;

                        }

                }
        }
        cout<<endl;
        for(i=0; i<n; i++) {
                cout<<a[i]<<endl;
        }

}
