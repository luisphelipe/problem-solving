#include <stdio.h>

int main()
{
    int tam, qnt, a, b;
    long long int valor;
    scanf("%d", &tam);

    for(int i = 0; i < tam; i++) {
        qnt = 0;
        scanf("%I64d", &valor);
        a = sqrt(valor);

        if(valor%a == 0 && valor/a == a && valor != a){
            qnt = 1, b = sqrt(a);
            for(int i = 2; i <= b; i++) {
                if(!(a%i)) { qnt++; break; }
        }   }
        if(qnt == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
