#include <iostream>
#include <map>
using namespace std;


int main(){
    int n, v, m=1;
    map<int, int> rm;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++){
	scanf("%d", &v);
	if (rm.count(v) > 0) rm[v]++;
	else rm[v] = 1;
    }
    for (auto const &v : rm) {
	if (v.second > m) m = v.second;
    }
    cout << m << " " << rm.size() << endl;
}
