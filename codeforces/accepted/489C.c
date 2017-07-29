#include <stdio.h>

int main()
{
    int length, sum, c1, c2, atual, aux = 1;
    scanf("%d %d", &length, &sum);
    c1 = length, c2 = sum;

    if ((!sum && length > 1) || length*9 < sum) printf("-1 -1");
    else {
        atual = 1 - !sum;
        while(c1){
            if ((c1-1)*9 < c2 && aux) { atual = c2-9*(c1-1); aux = 0; }
            else if (!aux) atual = 9;
            c2 -= atual;

            printf("%d", atual);
            c1--, atual = 0;
        }
        printf(" ");

        c1 = length, c2 = sum;
        while(c1){
            if(c2 >= 9) { atual = 9; c2 -= 9; }
            else  { atual = c2; c2 = 0; }

            c1--;
            printf("%d", atual);
        }
    }
    return 0;
}
