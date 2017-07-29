#include <stdio.h>
#define TAM 100001

int main()
{
    int n, valor, total = 0, valores[TAM] = {0};
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &valor);
        valores[valor] += valor;
    }

    for(int i = 1; i < TAM-1; i+=2){
        if (valores[i] > valores[i-1] + valores[i+1])
            total += valores[i];
        else
            total+= valores[i-1];
    }

    printf("%d", total);
    return 0;
}
