#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  scanf("%d %d", &a, &b);
  while (b) {
    if (b > 10) {
      c = a % 10;
      a -= c;
      b -= a;

      if (!c) {
        a /= 10;
        b--;
      }
    } else {
      
    }
  }

  return 0;
}
