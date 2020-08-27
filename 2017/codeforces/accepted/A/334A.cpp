#include <iostream>
using namespace std;


int main () {
    int n, i = 1, v, r = 0, c = 0, arr[100][100];
    scanf("%d", &n);
    while (r < n && c < n) {
	while (r < n) {
	    arr[r][c] = i;
	    r++;
	    i++;
	}
	r--;
	c++;
	while (r >= 0 && c < n) {
	    arr[r][c] = i;
	    r--;
	    i++;
	}
	r++;
	c++;
    }
    for (r = 0; r < n; r++) {
	for (c = 0; c < n; c++)
	    printf("%d ", arr[r][c]);
	printf("\n");
    }
}
