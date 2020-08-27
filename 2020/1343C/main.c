#include <stdio.h>


int main() {
  long long total;
  int t, n, value, q, sign; // sign { positive, negative }
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    total = 0, sign = 0, value = 0;

    while (n--) {
      scanf("%d", &q);

      if (!value || sign != (q < 0)) {
        sign = q < 0;
        total += value;
        value = 0;
      }

      if (!value || q > value) {
        value = q;
      }
    }

    printf("%lld\n", total + value);
  }

  return 0;
}
