#include <iostream>
using namespace std;
int main() {

        int n, i;
        cout << "Enter the size of array";
        cin >> n;
        int total;
        total = (n * (n + 1)) / 2;
        int a[n];
        for (i = 0; i < n; i++) {
                cin >> a[i];
        }

        for (i = 0; i < n - 1; i++) {
                total -= a[i];
        }
        cout << total;
}
