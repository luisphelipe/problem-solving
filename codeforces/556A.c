#include <stdio.h>

int main()
{
    int numeros, um = 0, atual;
    scanf("%d", &numeros);

    for(int cont = 1; cont <= numeros; cont++){
        scanf("%1d", &atual);
        if (atual) um++;
        else um--;
    }

    if(um<0) um -= 2*um;

    printf("%d", um);
    return 0;
}
