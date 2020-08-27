#include <cstdio>


int main(){
    int s[] = { 0, 0, 0 };
    char str[200], vg[] = "aeiou";

    for(int i = 0; i < 3; i++){
	fgets(str, 200, stdin);
	for(int c = 0; str[c]; c++){
	    for(int v = 0; vg[v]; v++){
		if (str[c] == vg[v]) s[i]++;
	    }
	}
    }

    printf((s[0] == 5 && s[1] == 7 && s[2] == 5) ? "YES" : "NO");
    return 0;
}
