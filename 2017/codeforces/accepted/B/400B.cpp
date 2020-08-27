#include <iostream>
#include <set>
using namespace std;


int main(){
    int n, m, r, c, dw, cd, s, mm=0, mx;
    set<int> rs;
    char ch;
    scanf("%d %d", &n, &m);
    for (r = 0; r < n; r++){
	for (c = 0; c < m; c++) {
	    scanf(" %c", &ch);
	    if (ch == 'G') dw = c;
	    if (ch == 'S') cd = c;
	}
	if (cd-dw < 0 && (!mm || cd-dw > mm)) mm = cd-dw;
	else if (cd-dw > 0) rs.insert(cd-dw);
    }
    s = rs.size();
    mx = (!rs.empty() ? *rs.rbegin() : 0);
    printf("%d\n", ((abs(mm) <= abs(mx) && mm < 0) || !s ? -1 : s));
}
