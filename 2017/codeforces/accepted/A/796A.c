#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, l, m, p, min=0;
    scanf("%d %d %d", &n, &l, &m);
    l--;

    for(int i=0; i<n && (!min || abs(l-i) < min); i++){
	scanf("%d", &p);
	if(p && p<=m) min = abs(l-i);
    }
       
    printf("%d", min*10);
    return 0;
}
