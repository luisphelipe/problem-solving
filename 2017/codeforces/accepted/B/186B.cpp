#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, t1, t2, k, a, b;
    double m1, m2;
    vector<pair<int, double>> rv;
    scanf("%d %d %d %d", &n, &t1, &t2, &k);
    for (int i = 1; i <= n; i++) {
	scanf("%d %d", &a, &b);
	m1 = (a*t1)-((a*t1*k)/100.)+b*t2;
	m2 = (b*t1)-((b*t1*k)/100.)+a*t2;
	rv.push_back({i, max(m1, m2)});	
    }
    stable_sort(rv.begin(), rv.end(), 
	[](auto q, auto w){return q.second > w.second;});
    for(auto q : rv) printf("%d %.2lf\n", q.first, q.second);
}
