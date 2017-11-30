#include <cstdio>


int main(){
    int a, b, ant=-1, at;
    bool result = true;
    scanf("%d %d", &a, &b);
    for(int i=0; i<a && result; i++){
	scanf("%1d", &at);
	if(ant == at) result = false;
	for(int q=1; q<b && result; q++){
	    ant = at;
	    scanf("%1d", &at);
	    if (ant != at) result = false;
	}
    }

    printf(result ? "YES" : "NO");
    return 0;
}
