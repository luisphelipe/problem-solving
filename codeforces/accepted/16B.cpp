#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, m, a, b;
    long long t=0;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < m; i++) {
	cin >> a >> b;
	v.push_back({a, b});
    }
    sort(v.begin(), v.end(), [](auto &l, auto &r){
	    return l.second > r.second; });
    for (int i = 0; n && i < m; i++){
	if (v[i].first < n){
	    t += v[i].first * v[i].second;
	    n -= v[i].first;
	} else {
	    t += v[i].second * n;
	    n = 0;
	}
    }
    cout << t << endl;
}
