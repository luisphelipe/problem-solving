#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
  int a, b, v;
  scanf("%d %d", &a, &b);

  while (b) {
    if (a % 10) {
      v = MIN(a % 10, b);
      a -= v;
      b -= v;
    } else {
      a /= 10;
      b -= 1;
    }
  }

  printf("%d\n", a);
  return 0;
}
