#include <stdio.h>


char vog[7] = "AEIOUY";

int isVog(char c){
    for(int i = 0; i < 6; i++){
	if(c == vog[i])
	    return 1;
    }
    return 0;
}


int main()
{
    int min = 1, last = 0, atual = 0, dif = 0;
    char c;
    while(1){
	atual++;
	
	dif = atual-last;
	if (dif > min)
	    min = dif;
	
	scanf("%c", &c);
	if (c == '\n')
	    break;

	if (isVog(c))
	    last = atual;
    }
    printf("%d\n", min);
    return 0;
}
