#include <iostream>
using namespace std;


int main () {
    int n, m, i, mb, a, b;
    bool r = true;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    mb = b;
    if (a > 0) r = false;
    for (i = 1; i < n; ++i) {
	scanf("%d %d", &a, &b);
	if (a > mb) r = false;
	if (b > mb) mb = b;
    }
    if (mb < m) r = false;
    cout << (r ? "YES" : "NO") << endl;
}
