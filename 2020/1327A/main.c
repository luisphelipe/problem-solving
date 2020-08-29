#include <stdio.h>


int main() {
  long long int t, a, b, v, start;
  scanf("%lld", &t);

  while (t--) {
    scanf("%lld %lld", &a, &b);
    printf((a%2 != b%2) || b*b > a ? "NO\n" : "YES\n");
  }

  return 0;
}
