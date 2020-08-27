#include <stdio.h>


int main() {
  int t, a, b, v, pair, odd;
  scanf("%d", &t);

  while (t--) {
    pair = 0, odd = 0;
    scanf("%d %d", &a, &b);
    while (a--) {
      scanf("%d", &v);

      if (v % 2) odd++;
      else pair++;
    }

    if (odd % 2 == 0) odd--;
    if (odd > 0 && (b - odd <= pair) && (pair > 0 || b % 2 == 1)) printf("Yes\n");
    else printf("No\n");
  }

  return 0;
}
