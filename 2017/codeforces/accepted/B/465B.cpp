#include <iostream>


int main(){
    int n, an, at, total;
    scanf("%d %d", &n, &at);
    total = (at ? 1 : 0);
    for(int i=1; i<n; i++){
	an = at;
	scanf("%d", &at);
	if ((an || !total) && at) total++;
	else if (at) total += 2;
    }
    printf("%d\n", total);
    return 0;
}
