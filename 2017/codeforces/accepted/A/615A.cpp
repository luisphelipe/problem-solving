#include <iostream>
using namespace std;


int main(){
    int n, m, b, v, i, q, arr[100] = {0};
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
	scanf("%d", &b);
	for (q = 0; q < b; q++) {
	    scanf("%d", &v);
	    arr[v-1] = 1;
	}
    }
    bool re = true;
    for (i = 0; i < m; i++) {
	if (arr[i] == 0) re = false;
    }
    printf("%s\n", (re ? "YES" : "NO"));
}
