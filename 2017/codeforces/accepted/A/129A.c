#include <stdio.h>


int main(){
    int n, val, odd=0, even=0, total=0;
    scanf("%d", &n);

    for(int i=0; i < n; i++){
	scanf("%d", &val);
	if (val%2) odd++;
	else even++;
	total += val;
    }

    printf("%d\n", (total%2 ? odd : even));
    return 0;
}
