#include <stdio.h>


int main() {
  int n, a, b, tmp, v;
  scanf("%d", &n);

  while (n--) {
    scanf("%d %d", &a, &b);

    v = b + b / a;
    b = b - (b % a);

    while (v - b >= a) {
      tmp = v;
      v += (v - b) / a;
      b = tmp - (tmp % a);
    } 

    printf("%d\n", v);
  }


  return 0;
}
