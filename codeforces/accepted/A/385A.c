#include <stdio.h>


int main(){
    int d, b, a, n, max=0;
    scanf("%d %d", &d, &b);
    scanf("%d", &n);

    for(int i = 1; i < d; i++){
	a = n;
	scanf("%d", &n);
	if((a-b-n) > max) max = a-b-n;
    }

    printf("%d", max);
    return 0;
}
