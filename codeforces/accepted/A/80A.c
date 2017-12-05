#include <stdio.h>
#include <math.h>


int isPrime(int num){
    for(short i = 2; i <= pow(num, .5); i++){
	if (num%i == 0) return 0;
    }
    return 1;
}

int main(){
    short n, m, i;
    scanf("%hu %hu", &n, &m);
    for(i = n+1; i <=m && !isPrime(i); i++);
    printf(m == i ? "YES" : "NO");
    return 0;
}
