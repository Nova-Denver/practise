#include<iostream>
using namespace std;
int main(){
        int n,i,k=0;
        cout<<"Enter the size of the array";
        cin>>n;
        int a[n];  int s[n];

        cout<<"Enter the elements in array";
        for(int i=0; i<n; i++) {
                cin>>a[i];
        }

        i=0;
        while(i<n)
        {
                if(a[i]%2==0) {
                        s[k]=a[i];
                        k++;
                        i++;
                }
        }
        int j=0;
        while(j<n)
        {
                if(a[i]%2!=0) {
                        s[k]=a[j];
                        k++;
                        i++;
                }
        }
        i=0;
        while(i<n) {
                cout<<s[i]<<endl;
                i++;
                /* code */
        }
        return 0;

}
