#include <iostream>
#include <map>
using namespace std;


int main(){
    int n, i, v, w = 0;
    map<int, int> rm;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
	scanf("%d", &v);
	if (rm.count(v) > 0) rm[v]++;
	else rm[v] = 1;
    }
    if (rm.size() < 3) { cout << 0 << endl; return 0; }
    i = 0;
    for (auto q : rm) {
	if (i > 0 && i < rm.size()-1) 
	    w += q.second;
	i++;
    }
    cout << w << endl;
}
