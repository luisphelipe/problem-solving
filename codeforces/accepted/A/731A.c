#include <stdio.h>


int min(int a, int b) { return (a < b ? a : b); }

int main(){
    char ch = 'a', n[101];
    scanf("%s", n);

    int clock, antic, total=0;
    for(int i = 0; n[i] != '\0'; i++){
	clock = (('z' - ch) + 1 + (n[i] - 'a')) % 26;
	antic = ((ch - 'a') + 1 + ('z' - n[i])) % 26;
	total += min(clock, antic);
	ch = n[i];
    }

    printf("%d\n", total);
    return 0;
}
