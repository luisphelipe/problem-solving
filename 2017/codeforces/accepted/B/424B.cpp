#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    int n, p, a, b, c, i;
    cin >> n >> p;
    vector<pair<double, int>> v(n);
    for (i = 0; i < n; i++){
	scanf("%d %d %d", &a, &b, &c);
	v[i].first = sqrt(a*a + b*b);
	v[i].second= c;
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n && p < 1'000'000; i++)
	p += v[i].second;

    if (p >= 1'000'000) printf("%.16lf\n", v[i-1].first);
    else printf("-1\n");
}
