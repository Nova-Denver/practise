#include <iostream>
using namespace std;
int main()
{

        int n,i,j,temp;
        cout<<"Enter the size of the array\n";
        cin>>n;
        int a[n];
        cout<<"Enter the elements in array\n";
        for(i=0; i<n; i++)
        {
                cin>>a[i];
        }
        cout<<endl;
        for(i=0; i<n; i++)
        { temp=-1;
          for(j=i+1; j<n; j++)
          {
                  if(a[i]<a[j])
                  {
                          //  cout<<a[j]<<endl;
                          temp=a[j];
                          break;
                  }
          }
          cout<<"\t"<<temp<<endl;}
}
