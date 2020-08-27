#include <iostream>
using namespace std;


int main(){
    int n, k, i, m, v, a, b;
    scanf("%d %d %d %d", &n, &k, &a, &b);
    m = (k >= b ? a : a - (b - k));
    for (i = 1; i < n; i++) {
	scanf("%d %d", &a, &b);
	v = (k >= b ? a : a - (b - k));
	if (v > m) m = v;
    }
    cout << m << endl;
}
