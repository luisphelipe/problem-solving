#include <stdio.h>
#define MAX 500001


int main() {
  unsigned long long int arr[MAX] = {0};
  int t, n, a;
  scanf("%d", &t);

  n = 1;
  while (n < MAX) {
    a = (n - 1) / 2;
    arr[n] = 8 * (unsigned long long int) a * a;
    arr[n] += n > 1 ? arr[n - 2] : 0;
    n += 2;
  }

  while (t--) {
    scanf("%d", &n);
    printf("%llu\n", arr[n]);
  }

  return 0;
}
