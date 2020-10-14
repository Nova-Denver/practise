#include <climits>
#include <iostream>
using namespace std;
int main() {
        int n, i, j;
        cout << "Enter the size of the array";
        cin >> n;
        int a[n];
        int tempsum = 0, sum = INT_MIN;
        cout << "Enter the elements in array\n";
        for (i = 0; i < n; i++) {
                cin >> a[i];
        }
        for (i = 0; i < n; i++) {
                for (j = i + 1; j < n; j++) {
                        tempsum = a[j] - a[i];
                }
                if (tempsum > sum) {
                        sum = tempsum;
                }
        }
        cout << "OUTPUT\n" << sum << endl;
}
