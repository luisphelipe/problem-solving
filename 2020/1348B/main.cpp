#include <stdio.h>
#include <set>


#define MAX 100010

using namespace std;

int main() {
  long t, n, k, v, j;
  scanf("%ld", &t);

  while (t--) {
    int arr[MAX];
    set<int> uq;
    long i=-1;
    scanf("%ld %ld", &n, &k);

    j = n;
    while(i++, j--) {
      scanf("%ld", &v);
      arr[i] = v;

      uq.insert(v);
    }

    if (uq.size() > (long unsigned int) k) {
      printf("-1\n");
      continue;
    }

    i = 1;
    while (uq.size() < (long unsigned int)k) {
      uq.insert(i);
      i++;
    }

    j = 0, i = 0;
    int size = 0;

    auto it = uq.begin();
    while (j < n) {
      if (*it == arr[j]) j++;
      size++;
      it++;

      if (it == uq.end()) it = uq.begin();
    }
  
    if (size > MAX) {
      printf("-1\n");
      continue;
    }

    it = uq.begin();
    i = 0;

    printf("%d\n", size);
    while (i++ < size) {
      printf("%d ", *it);
      it++;
      if (it == uq.end()) it = uq.begin();
    }
    printf("\n");
  }

  return 0;
}
