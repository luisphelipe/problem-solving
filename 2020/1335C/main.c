#include <stdio.h>
#define MAXL 200001
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))


int main() {
  int t, n, v, a, b, mv;
  scanf("%d", &t);

  while (t--) {
    a=0;
    b=0;
    mv=0;
    int arr[MAXL] = {0};
    scanf("%d", &n);
    while(n--) {
      scanf("%d", &v);
      arr[v] += 1;
      if (arr[v] == 1) a++;
      if (arr[v] > b) {
        b = arr[v];
        mv = v;
      }
    }
    printf("%d\n", MAX(MIN(a - 1, b), MIN(a, b - 1)));
  }

  return 0;
}
