#include <iostream>
using namespace std;


int main () {
    int n, i, v, arr[6005] = {0}, t = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
	scanf("%d", &v);
	arr[v]++;
    }
    v = 0;
    for (i = 0; i < 6005; ++i) {
	if (arr[i] > 1)
	    v += arr[i] - 1;
	else if (v > 0 && arr[i] == 0)
	    v--;
	arr[i] = 1;
	if (v > 0)
	    t += v;
    }
    cout << t << endl;
}
