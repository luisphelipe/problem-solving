#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, k, v, i, q;
    scanf("%d %d", &n, &k);
    vector<int> rv;
    for (i = 0; i < n; i++) {
	scanf("%d", &v);
	rv.push_back(v);
    }
    for (i = 1, q = 1; q < k;) { i++; q += i; }
    printf("%d\n", rv[i-(q-k)-1]);
}
