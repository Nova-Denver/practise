#include <iostream>
using namespace std;
int main() {

        int n, m, i, j,k,count;
        cout << "Enter the size of set1 and set2\t";
        cin >> n >> m;
        int a[n] = {0}, b[m] = {0}, u[m + n];
        cout << "Enter the elements in set1 \n";
        for (i = 0; i < n; i++) {
                cin >> a[i];
        }
        cout << "Enter the elementsin set2 \n";
        for (j = 0; j < m; j++) {
                cin >> b[j];
        }
        k=0;
        for(i=0; i<n; i++)
        {
                if(a[i]!=b[i])
                {
                        u[k]=a[i];
                        k++;
                        count++;
                }

        }
        for(k=0; k<count; k++)
        {
                cout<<u[k];
        }


}
