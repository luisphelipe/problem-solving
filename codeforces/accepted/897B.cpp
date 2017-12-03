#include <iostream>
using namespace std;


long long getp(int x){
    long long num=x;
    while (x){
	num *= 10;
	num += x%10;
	x /= 10;
    }
    return num;
}
int main(){
    int k, p, i;
    long long t=0;
    scanf("%d %d", &k, &p);
    for(i=1; i<=k; i++) t += getp(i);
    printf("%d\n", t%p);
}
