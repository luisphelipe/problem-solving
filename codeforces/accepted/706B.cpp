#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, m, max, x;
    scanf("%d", &n);
    vector<int> dc(n);
    for (int i=0; i < n; i++) cin >> dc[i];
    sort(dc.begin(), dc.end());
    max = dc[n-1];
    vector<int> r(max);
    for (int a=0, b=0; a < max; a++) {
	while (a+1 >= dc[b] && b < n) b++;
	r[a] = b;
    } 
    scanf("%d", &m);
    for (int i=0; i < m; i++) {
	scanf("%d", &x);
	printf("%d\n", r[(x > max ? max : x) - 1]);
    }
}
