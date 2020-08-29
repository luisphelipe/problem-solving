#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))


int main() {
  int t, n, x, y, a, b;
  unsigned long long  diff_a, diff_b;
  scanf("%d", &t);

  while (t--) {
    scanf("%d %d\n%d %d", &x, &y, &a, &b);
    diff_a = MAX(x, y) - MIN(x, y);  
    diff_b = MIN(x, y);
    diff_b *= b < a * 2 ? b : a * 2;  
    diff_a *= a;
    printf("%llu\n", diff_a + diff_b);
  }

  return 0;
}
