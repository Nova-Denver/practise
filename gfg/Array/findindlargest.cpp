#include <iostream>
#include <limits>
using namespace std;
int main() {
        int n, M = INT_MIN;
        cout << "Enter the size of array";
        cin >> n;
        cout << endl;
        int a[n];
        cout << "Enter the elements in array";
        cout << endl;
        for (int i = 0; i < n; i++) {
                cin >> a[i];
        }

        cout << "Elements are ";
        for (int i = 0; i < n; i++) {
                cout << a[i] << endl;
        }
        for (int i = 0; i < n; i++)
                if (M < a[i]) {
                        M = a[i];
                }
        cout << "Largest element is " << M;
}
