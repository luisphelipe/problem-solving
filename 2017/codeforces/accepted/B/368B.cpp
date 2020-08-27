#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main(){
    int n, m, i, v;
    scanf("%d %d", &n, &m);
    map<int, int> rm;
    vector<int> rv(n);
    for (i = 0; i < n; i++) {
	scanf("%d", &v);
	if (rm.count(v) > 0) rm[v]++;
	else rm[v] = 1;
	rv[i] = v;
    }
    for (i = 0; i < n; i++) {
	if (--rm[rv[i]] == 0) rv[i] = 1;
	else rv[i] = 0;
    }
    for (i = n-2; i >= 0; i--)
	rv[i] += rv[i+1];
    for (i = 0; i < m; i++) {
	scanf("%d", &v);
	printf("%d\n", rv[v-1]); 
    }
    cout << endl;
}
