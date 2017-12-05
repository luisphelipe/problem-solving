#include <stdio.h>


int main()
{
    int c, h1, m1, h2, m2, atual = 1, max = 1;
    scanf("%d", &c);
    scanf("%d %d", &h1, &m1);

    for(int i = 1; i < c; i++){
	scanf("%d %d", &h2, &m2);
	if(h1 == h2 && m1 == m2){
	    atual++;
	    if (atual > max)
		max = atual;
	}
	else 
	    atual = 1;

	h1 = h2, m1 = m2;
    }
    printf("%d\n", max);
    return 0;
}
