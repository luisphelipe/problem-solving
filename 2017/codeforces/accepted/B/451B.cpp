#include <iostream>
using namespace std;


int main () {
    int n, i, an=0, at, nn, l=1, r=0, m=0, mn=0;
    bool f = false, d = false;
    scanf("%d %d", &n, &at);
    for (i = 1; i < n; ++i) {
	nn = an;
	an = at;
	scanf("%d", &at);
	if (at < an && !d && !f) {
	    d = true;
	    mn = nn;
	    m = an;
	    l = i;
	}
	else if (d && at >= an) {
	    d = false;
	    f = true;
	    r = i;
	}
	if (((at < an || at < m) && f) 
	    || ((at < mn && mn > 0) && d)) {
	    cout << "no" << endl;
	    return 0;
	}
    }
    if (!r) r = l;
    if (d)  r = i;
    cout << "yes\n" << l << " " << r << endl;
}
