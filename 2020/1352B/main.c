#include <stdio.h>


int main() {
  int t, n, k, pair, odd, i;
  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &n, &k);
    pair = n - (k - 1) * 2;
    odd = n - (k - 1);
    i = 1;

    if (pair % 2 == 0 && pair > 0) {
      printf("YES\n%d ", pair);
      while (i++ < k) 
        printf("2 ", pair);
    } else if (odd % 2 && odd > 0) {
      printf("YES\n%d ", odd);
      while (i++ < k) 
        printf("1 ", pair);
     } else 
       printf("NO");

    printf("\n");

  }
  return 0;
}
