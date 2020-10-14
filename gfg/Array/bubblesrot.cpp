#include <iostream>
using namespace std;
int main(){
        int n,i,j,temp;
        cout<<"Enter the size of the array";
        cin>>n;
        int a[n];
        cout<<"Enter the elements in array";
        for(i=0; i<n; i++) {
                cin>>a[i];
        }
        for(i=0; i<n-1; i++) {

                for(j=0; j<n-1-i; i++) {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }
                }
        }
        for(i=0; i<n; i++) {
                cout<<"\t"<<a[i];
        }
}
