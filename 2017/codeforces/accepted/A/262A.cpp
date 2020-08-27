#include <iostream>
using namespace std;


int ld(int x) {
    int r = 0;
    while (x) {
	if (x % 10 == 4 || x % 10 == 7) r++;
	x /= 10;
    }
    return r;
}
int main(){
    int n, k, i, v, t = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; ++i) {
	scanf("%d", &v);
	if (ld(v) <= k) t++;
    }
    cout << t << endl;
}
