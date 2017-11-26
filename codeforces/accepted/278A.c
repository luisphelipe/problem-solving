#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, *list, l, r, anti=0, hora=0;
    scanf("%d", &n);
    list = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; i ++) scanf("%d", list+i);

    scanf("%d %d", &l, &r);
    if (l > r){
	int temp = l;
	l = r;
	r = temp;
    }

    for(int i = 0; i < n; i++){
	if (i < l-1 || i >= r-1) anti += list[i];
	else hora += list[i];
    }

    printf("%d\n", anti < hora ? anti : hora);
    return 0;
}
