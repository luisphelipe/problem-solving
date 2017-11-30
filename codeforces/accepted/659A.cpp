#include <iostream>


int main(){
    int n, a, b, r;
    scanf("%d %d %d", &n, &a, &b);
    r = (a+(b%n))%n;
    if (r < 0) r += n;
    printf("%d\n", r?r:n);
    return 0;
}
