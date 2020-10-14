#include <iostream>
using namespace std;
int main(){
        int n,i,k=0,count=0,temp;
        cout<<"Enter the size of the array\t";
        cin>>n;
        int a[n];
        int s[n];

        cout<<"Enter the elements in array\n";
        for(int i=0; i<n; i++) {
                cin>>a[i];
        }
        for(i=0; i<n; i++) {
                if(a[i]%2==0)
                {
                        s[k]=a[i];
                        k++;
                        temp=k;
                        count++;
                }
        }
        cout<<"Even elements are\n";
        for(i=0; i<count; i++) {
                cout<<s[i]<<endl;
        }
        for(i=0; i<n; i++)
        {
                if(a[i]%2!=0)
                {
                        s[temp]=a[i];
                        temp++;
                }
        }
        cout<<"Segregated elments are\n";
        for(i=0; i<n; i++) {
                cout<<"\t"<<s[i];
        }



}
