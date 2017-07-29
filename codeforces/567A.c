#include <stdio.h>
#define TAM 100000

int Min(int a, int b){
    if (a < b) return a; return b;
}

int Max(int a, int b){
    if (a > b) return a; return b;
}

int main()
{
    int vetor[TAM], size, min, max, a, b, c, d;
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
        scanf("%d", vetor+i);

    min = vetor[0];
    max = vetor[size-1];

    for(int i = 0; i < size; i++){
        a = vetor[i] - min;
        b = max - vetor[i];
        c = max - min, d = max - min;

        if (i > 0) c = vetor[i] - vetor[i-1];
        if (i+1 < size) d = vetor[i+1] - vetor[i];

        printf("%d %d\n", Min(c, d), Max(a, b));
    }
    return 0;
}
