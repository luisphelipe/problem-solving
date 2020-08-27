#include <stdio.h>


int main(){
    char throw[11];
    int n, b, a, r=0;
    scanf("%d", &n);

    for(int i=0; i < n && !r; i++){
	scanf("%s %d %d", throw, &b, &a);
	if (b < a && b >= 2400) r = 1;
    }

    printf(r ? "YES" : "NO");
    return 0;
}
