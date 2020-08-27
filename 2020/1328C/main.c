#include <stdio.h>
#define MAX 50005


int main() {
  int t, n, sum, arr[MAX];
  scanf("%d", &t);

  while (t--) {
    int a, v=0, l=0, f=0;
    scanf("%d", &n);

    while (l < n) {
      scanf("%1d", &v);
      if (f) printf("0");
      else if (v != 1) printf("%d", v/2);
      else {
        printf("1");
        f=1;
      }
      arr[l] = v;
      l++;
    }
    printf("\n");

    l=0, f=0;
    while (l < n) {
      v = arr[l];
      if (f) printf("%d", v);
      else if (v != 1) printf("%d", v/2);
      else {
        printf("0");
        f=1;
      }
      l++;
    }
    printf("\n");
  }

  return 0;
}
