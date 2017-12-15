#include <iostream>
using namespace std;
typedef long long ll;


int main(){
    ll l1, l2, r1, r2, k, t;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    t = max((ll) min(r1, r2)-max(l1, l2)+1, (ll) 0);
    if (k <= min(r1, r2) && k >= max(l1, l2))
	t--;
    cout << t << endl;
}
