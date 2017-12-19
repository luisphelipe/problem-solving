#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main () {
    int n, i, a, b, v;
    scanf("%d", &n);
    vector<pair<int, int>> rv(n);
    for (i = 0; i < n; ++i) {
	scanf("%d %d", &a, &b);
	rv[i].first = a;
	rv[i].second = b;
    }
    sort(rv.begin(), rv.end());
    v = rv.begin()->second;
    for (auto it = rv.begin()+1; it != rv.end(); it++) {
	if (it->second < v) v = it->first;
	else v = it->second;
    }
    cout << v << endl;
}
