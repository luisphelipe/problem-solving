#include <stdio.h>


int main(){
    short len, l=0, r=0, n, p=1;

    scanf("%hu", &len);
    for(short i = 0; i < len; i++){
	scanf("%1hu", &n);
	if (n != 4 && n != 7){
	    p = 0;
	    break;
	}

	if (i+1 <= len/2) l += n;
	else r += n;
    }

    if(l == r && p) printf("YES\n");
    else printf("NO\n");
    return 0;
}
