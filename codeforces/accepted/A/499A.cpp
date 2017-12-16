#include <iostream>
using namespace std;


int main () {
    int n, k, i, l, r, a = 1, t = 0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; ++i) {
	scanf("%d %d", &l, &r);
	a += ((l-a)/k)*k;
	t += r - a + 1;
	a = r + 1;
    }
    cout << t << endl;
}
