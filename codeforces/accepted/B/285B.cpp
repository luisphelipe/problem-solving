#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, s, t, i;
    scanf("%d %d %d", &n, &s, &t);
    vector<int> rv(n+1);
    for (i = 1; i <= n; i++) scanf("%d", &rv[i]);
    for (i = 0; i < n && s != t;) { i++; s = rv[s]; }
    printf("%d\n", (i < n ? i : -1));
}
