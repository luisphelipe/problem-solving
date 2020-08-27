#include <iostream>
using namespace std;


int main(){
    int n, i, v, arr[100'001] = {0};
    scanf("%d", &n);
    arr[n] = -1;
    for (i = 0; i < n; ++i) {
	scanf("%d", &v);
	arr[v-1] = 1;
	while (arr[v] == -1 && arr[v-1] == 1) {
	    v--;
	    arr[v] = -1;
	    printf("%d ", v+1);
	}
	printf("\n");
    }
}
