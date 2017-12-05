#include <stdio.h>
#define TAM 100

int main()
{
    int tam, vetor[TAM], max = 0, total = 0;
    scanf("%d", &tam);

    for(int i = 0; i < tam; i++){
        scanf("%d", vetor+i);
        if (*(vetor+i) > max) max = *(vetor+i);
    }

    for(int i = 0; i < tam; i++)
        total += max - *(vetor+i);

    printf("%d", total);
    return 0;
}
