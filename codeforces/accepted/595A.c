#include <stdio.h>


int main(){
    int n, m, ante, atual, total=0;
    scanf("%d %d", &n, &m);

    for(int q=0; q < n; q++){
	for(int w=0; w < m*2; w++){
	    if(w%2 == 0) ante = 0;
	    else ante = atual;

	    scanf("%d", &atual);
	    if(w%2 == 1 && (ante || atual)) total++;
	}
    }

    printf("%d\n", total);
    return 0;
}
