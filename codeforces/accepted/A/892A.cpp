#include <iostream>
using namespace std;
typedef long long ll;


int main(){
    ll t = 0, arr[2] = {0}, v;
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
	scanf(" %lld", &v);
	t += v;
    }
    for (i = 0; i < n; ++i) {
	scanf(" %lld", &v);
	if (v > arr[0]) {
	    arr[1] = max(arr[0], arr[1]);
	    arr[0] = v;
	}
	else if (v > arr[1]) {
	    arr[0] = max(arr[0], arr[1]);
	    arr[1] = v;
	}
    }
    if (t <= arr[0] + arr[1]) cout << "YES" << endl;
    else cout << "NO" << endl;
}
