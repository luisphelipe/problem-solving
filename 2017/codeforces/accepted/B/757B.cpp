#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n, i, d, v, m = 1, arr[500001] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
	scanf("%d", &v);
	arr[v]++;
	if (v%2 == 0 && v != 2) {
	    if (v/2 != 2) arr[v/2]++;
	    arr[2]++;
	}
	for (d = 3; d <= (int) sqrt(v); d++){
	    if (v%d == 0) {
		if (v/d != d) arr[v/d]++;
		arr[d]++;
	    }
	}
    }
    for (i = 2; i < 500001; i++) {
	if (arr[i] > m) m = arr[i];
    }
    printf("%d\n", m);
}
