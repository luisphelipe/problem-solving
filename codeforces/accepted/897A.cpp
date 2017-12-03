#include <iostream>


int main(){
    char a, b, s[101];
    int n, m, l, r;
    scanf("%d %d %s", &n, &m, s);
    for(int i=0; i<m; i++){
	scanf("%d %d %c %c", &l, &r, &a, &b);
	for(int q=l-1; q<r; q++){
	    if(s[q] == a) s[q] = b;
	}
    }

    printf("%s\n", s);
}
