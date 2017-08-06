#include <stdio.h>


char bw[3] = "BW";

int retorna_bw(char c){
    if (bw[0] == c) 
	return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t); 

    int res[101] = {0}, resi = 0;
    char c;
    scanf("%c", &c);

    while (t){
	scanf("%c", &c);
	res[resi] += retorna_bw(c);
        if(!retorna_bw(c))
	    resi++;	    

	t--;
    }

    int cont = 0;
    for(;t <= resi; t++){
	if(res[t])
	    cont++;
    }
    printf("%d\n", cont);

    for(t = 0; t <= resi; t++)
	if(res[t])
	    printf("%d ", res[t]); 

    return 0;
}
