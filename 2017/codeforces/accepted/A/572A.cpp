#include <iostream>
using namespace std;


int main(){
    int n, m, a, b, na, nb, v, i;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    for (i = 1; i <= n; i++) {
	scanf("%d", &v);
	if (i == a) na = v;
    }
    for (i = 1; i <= m; i++) {
	scanf("%d", &v);
	if (i == m+1-b) nb = v;
    }
    cout << (nb > na ? "YES" : "NO") << endl;
}
