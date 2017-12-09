#include <iostream>
#include <iterator>
#include <set>
using namespace std;


int main(){
    int n, v, i, q=0, arr[3] = {0};
    set<int> rs;
    scanf("%d", &n);
    for (i = 0; i < n && rs.size() <= 3; i++) {
	scanf("%d", &v);
	rs.insert(v);
    }
    if (rs.size() > 3) { printf("NO\n"); return 0; }
    for (auto it = rs.begin(); it != rs.end(); q++, it++) arr[q] = *it;
    if (arr[2]-arr[1] == arr[1]-arr[0] || rs.size() < 3) printf("YES\n");
    else printf("NO\n");
}
