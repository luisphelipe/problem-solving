#include <stdio.h>


int main() {
  int t, n, v, p, o, f, j;
  scanf("%d", &t);

  while (t--) {
    int arr[101] = {0};
    scanf("%d", &n);

    f = 0;
    p = 0;
    o = 0;
    while(n--) {
      scanf("%d", &v);
      v % 2 ? o++ : p++;
      arr[v] += 1;
    }

    if (o % 2 == p % 2) {
      if (o % 2 == 1) {
        for (j = 1; j < 101; j++) {
          if (arr[j] > 0 && arr[j-1] > 0) f = 1;
        }
      } else f = 1;
    }

    printf(f ? "YES\n" : "NO\n");
  }

  return 0;
}
