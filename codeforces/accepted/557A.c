#include <stdio.h>


int main(){
    int n, lista[] = {0, 0, 0, 0, 0, 0};
    scanf("%d", &n);
    for(int i=0; i < 6; i++) scanf("%d", lista+i);
    n -= lista[0] + lista[2] + lista[4];

    for(int i=1; i < 6; i += 2){
	lista[i] -= lista[i-1];
	while(lista[i] > 0 && n > 0){
	    lista[i-1]++;
	    lista[i]--;
	    n--;
	}
    }

    for(int i=0; i < 5; i += 2) printf("%d ", lista[i]);
    printf("\n");
    return 0;
}
