#include <iostream>
using namespace std;


int main(){
    int n, k, i, a=0, b=0, v, d=0;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++) {
	scanf("%d", &v);
	a += v;
	b += min(8, a);
	a -= min(8, a);
	if (b >= k) { 
	    d = i+1; 
	    break; 
	}
    }
    if (b >= k) cout << (d > 0 ? d : n) << endl;
    else cout << -1 << endl;
}
