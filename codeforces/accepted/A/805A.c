#include <stdio.h>
#include <math.h>


int isPrime(int l){
    for(int i=2; i < (int) pow(l, .5); i++){
	if (l%i == 0){
	    printf("%d", i);
	    return 0;
	}
    }

    return 1;
}

int main(){
    int l, r;       
    scanf("%d %d", &l, &r);

    if (r - l > 1) printf("2");
    else if (isPrime) printf("%d", l);
    return 0;
}
