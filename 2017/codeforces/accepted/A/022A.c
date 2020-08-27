#include <stdio.h>


int main(){
    int n, val, f=101, s=101;
    scanf("%d", &n);

    for(int i=0; i < n; i++){
	scanf("%d", &val);
	if(val < s && val > f) s = val;
	if(val < f){ s = f; f = val; }
    }

    if(s != f && s != 101) printf("%d\n", s);
    else printf("NO\n");
    return 0;
}
