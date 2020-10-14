#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size of thhe array";
  cin >> n;
  int a[n];
  cout << "Enter the element in array \n";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      count++;
    }
  }
  for (int i = 0; i < count; i++) {
    a[i] = 0;
  }
  for (int i = count; i < n; i++) {
    a[i] = 1;
  }
  cout << "AFter segregating\n";
  for (int i = 0; i < n; i++) {
    cout << " " << a[i];
  }
  return 0;
}
