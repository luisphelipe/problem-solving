#include <stdio.h>

int main()
{
    int words, delay, last, atual, qnt = 1;
    scanf("%d %d", &words, &delay);

    scanf("%d", &last);

    for(int i = 1; i < words; i++){
        scanf("%d", &atual);
        if (atual-last <= delay) qnt++;
        else qnt = 1;

        last = atual;
    }
    printf("%d", qnt);
    return 0;
}
