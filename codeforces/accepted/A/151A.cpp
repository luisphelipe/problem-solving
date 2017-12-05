#include <cstdio>


int main(){
    int nl, l, s, n[8];
    for(int i=0; i < 8; i++) scanf("%d", n+i);
    nl = (n[1]*n[2])/n[6];
    l = n[3]*n[4];
    s = n[5]/n[7];

    int r = nl;
    r = r < l ? r : l;
    r = r < s ? r : s;

    printf("%d\n", r/n[0]);
    return 0;
}
