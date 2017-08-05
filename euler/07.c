#include <stdio.h>
#include <math.h>


int isPrime(unsigned long long int num){
    int i, last = sqrt(num);
    for(i = 2; i <= last; i++){
	if(!(num%i))
	    return 0;
    }
    return 1;
}

int main()
{
    unsigned long long int num = 1; 
    int count = 0;

    while (count <= 10000) {
	num++;
	if (isPrime(num))
	    count++;
    }

    printf("%llu\n", num);
    return 0;
}
