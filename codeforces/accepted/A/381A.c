#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, *list, p1, p2, sereja=0, dima=0;
    scanf("%d", &n);
    p1=0, p2=n-1;

    list = (int*) malloc(n * sizeof(int));
    for(int i=0; i < n; i++) scanf("%d", list+i);

    for(int i=0; i < n; i++){
	if(list[p1] > list[p2]){
	    if (i%2 == 0) sereja += list[p1];
	    else dima += list[p1];
	    p1++;
	} else {
	    if (i%2 == 0) sereja += list[p2];
	    else dima += list[p2];
	    p2--;
	}
    }
    
    printf("%d %d\n", sereja, dima);
    return 0;
}
