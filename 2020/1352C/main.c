#include <stdio.h>


int main() {
  int n, a, b, v;
  scanf("%d", &n);

  while (n--) {
    v = 0;
    scanf("%d %d", &a, &b);

    while (b--) {
      v++;
      if (!(v % a)) b++;
    }

    printf("%d\n", v);
  }


  return 0;
}
