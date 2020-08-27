#include <stdio.h>


int main(){
    int n, t, c, total=0, atual=0, buf;
    scanf("%d %d %d", &n, &t, &c);
    
    for(int i = 0; i < n; i++){
	scanf("%d", &buf);
	if (buf > t) atual = 0;
	else atual++;

	if (atual >= c) total++;
    }

    printf("%d\n", total);
    return 0;
}
