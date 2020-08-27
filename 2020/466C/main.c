#include <stdio.h>


#define MAX 100001

int main() {
    int t = 1, n, i, j, mean, arr[MAX], sum, l[MAX] = {0}, sums[MAX] = {0}, v, vj, res;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        res = 0;
        sum = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        if (sum % 3) {
            printf("%d\n", res);
            continue;
        }

        mean = sum / 3;
        v = 0;

        for (i = 0; i < n; i++) {
            v += arr[i];
            l[i] = v == mean;

            if (v == mean) {
                vj = 0;
                for (j = i + 1; j < n; j++) {
                    vj += arr[j];
                    if (vj == mean) sums[j]++;
                }
            }
        }


        for (i = 1; i < n - 2; i++) {
            if (l[i]) {
                res += sums[i+2];
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
