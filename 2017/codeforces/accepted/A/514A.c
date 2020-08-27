#include <stdio.h>


char conv[11] = "0123456789";

int cti(char c){
    int ind = 0;
    while(conv[ind] != c)
	ind++;
    return ind;
}

int main()
{
    char c;
    int t, count = 0;
    while (1){
	scanf("%c", &c);
	
	if(c == '\n')
	    break;
	
	t = cti(c);
	if (t < 9-t || (!count && t == 9))
	    printf("%d", t);
	else
	    printf("%d", 9-t);
	count++;
    }
    printf("\n");
    return 0;
}
