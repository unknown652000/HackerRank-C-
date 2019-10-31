#include <iostream>
using namespace std;
int main() {
  int a, i;
  long n = 0;
  cin >> a;
  long b[a];

  for (i = 0; i < a; i++) {
    cin >> b[i];
  }

  for (i = 0; i < a; i++) {
    n = n + b[i];
  }

  cout << n;
  return 0;
}

