#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, md, td=0, v, i;
    scanf("%d %d", &n, &md);
    vector<pair<int, int>> rv;
    for (i = 0; i < n; i++) {
	scanf("%d", &v);
	rv.push_back({v, i+1});
    }
    sort(rv.begin(), rv.end());
    for (i = 0; i < n && td + rv[i].first <= md; i++) {
	td += rv[i].first;
    }
    printf("%d\n", i);
    for (v = 0; v < i; v++)
	printf("%d ", rv[v].second);
}
