#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, m, v;
    long long l=0, r=0;
    scanf("%d", &n);
    vector<int> vi(n+1);
    for (int i = 1; i <= n; i++) {
	scanf("%d", &v);
	vi[v] = i;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
	scanf("%d", &v);
	l += vi[v];
	r += n + 1 - vi[v];
    }
    cout << l << " " << r << endl;
}
