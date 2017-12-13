#include <iostream>
using namespace std;


int main(){
    int n, i, v, mh=1, at, arr[2000] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
	scanf("%d", &v);
	arr[i] = v;
    }
    for (i = 0; i < n; i++) {
	at = 1, v = arr[i];
	while (v != -1) {
	    v = arr[v-1];
	    at++;
	}
	if (at > mh) mh = at;
    }
    cout << mh << endl;
}
