#include <iostream>
using namespace std;


int main(){
    int p, q, l, r, a, b, i, w, v, t = 0, arr[2][1001] = {0};
    scanf("%d %d %d %d", &p, &q, &l, &r);
    for (i = 0; i < p+q; i++) {
	v = (i < p ? 0 : 1);
	scanf("%d %d", &a, &b);
	for (w = a; w <= b; w++)
	    arr[v][w] = 1;
    }
    for (i = l; i <= r; i++) {
	for (w = 0; w+i <= 1000; w++) {
	    if (arr[0][i+w] && arr[1][w]) {
		t++;
		break;
	    }
	}
    }
    printf("%d\n", t); 
}
