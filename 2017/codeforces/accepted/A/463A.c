#include <stdio.h>


int main(){
    short n, d, md, c, total=-1;
    scanf("%hu %hu", &n, &d);
    for(short i=0; i < n; i++){
	scanf("%hu %hu", &md, &c);
	if (d*100 >= md*100+c && (100-c)%100 > total) 
	    total = (100-c)%100;
    }

    printf("%d\n", total);
    return 0;
}
