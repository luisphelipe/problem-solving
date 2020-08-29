#include <stdio.h>


int main() {
  int t, n, k, iteration, first, second, j;
  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &n, &k);

    first = 2; // step = first - 1
    iteration = 1;

    while (iteration < k) {
      iteration += first;
      first++;
   }

    second = k - (iteration - (first - 1));

    j = n;
    while (j) {
      if (j == first || j == second) printf("b");
      else printf("a");
      j--;
    }
    printf("\n");

  }

  return 0;
}
