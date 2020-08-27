#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, *gc, car, count;
    scanf("%d", &n);
    count = n;

    gc = (int*) malloc(n*sizeof(int));
    for(int i=0; i < n; i++) gc[i] = 1;

    for(int r=0; r < n; r++){
	for(int c=0; c < n; c++){
	    scanf("%d", &car);
	    if (car >= 2 && gc[c] == 1){
		gc[c] = 0;
		count--;
	    }
	}
    }

    printf("%d\n", count);
    for(int c=0; count; c++){
	if (gc[c] == 1){
	    printf("%d ", c+1);
	    count--;
	}
    }

    return 0;
}
