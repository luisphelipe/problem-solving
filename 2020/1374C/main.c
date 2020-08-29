#include <stdio.h>


int main() {
  int t, n, l, r, mr;
  char v;
  scanf("%d", &t);

  while (t--) {
    scanf("%d", &n);
    l = 0, r = 0, mr = 0;

    while (n --> 0) {
      scanf(" %c", &v);
      if (l + mr < r) mr++;
      v == '(' ? l++ : r++;
   }

    printf("%d\n", mr);
  }

  return 0;
}
