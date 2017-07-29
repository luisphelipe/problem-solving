#include <stdio.h>

int main()
{
    int n, min, max, qnt_min = 1, qnt_max = 1, atual;
    scanf("%d", &n);

    scanf("%d", &atual);
    min = atual, max = atual;

    for(int i = 1; i < n; i++){
        scanf("%d", &atual);

        if (atual < min){
            qnt_min = 1;
            min = atual;
        }

        else if (atual == min)
            qnt_min++;

        if (atual > max){
            qnt_max = 1;
            max = atual;
        }

        else if (atual == max)
            qnt_max++;
    }

    //identificar o padrão desse numero de combinações diferentes;
    printf("%d %I64d", max - min,(long long int) qnt_min*qnt_max);

    return 0;
}
