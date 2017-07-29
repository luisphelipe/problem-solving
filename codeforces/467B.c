#include <stdio.h>
#define MAX 1000

int count(int a, int b)
{
    int sum = 0;
    while (a || b){
        if (a%2 != b%2) sum++;
        a /= 2, b /= 2;
    }
    return sum;
}

int main()
{
    int players[MAX], n, m, k, fedor, qnt = 0;

    scanf("%d %d %d", &n, &m, &k);

    for(int i = 0; i < m; i++)
        scanf("%d", &players[i]);

    scanf("%d", &fedor);

    if(n == k) printf("%d", m);
    else {
        for(int i = 0; i < m; i++){
            if (count(fedor, players[i]) <= k)
                qnt++;
        }
        printf("%d", qnt);
    }

    return 0;
}
