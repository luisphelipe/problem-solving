#include <iostream>
#include <map>
using namespace std;


int main(){
    int n, v, mv=1;
    map<int, int> rm;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
	scanf("%d", &v);
	if (rm.count(v) == 0) rm[v] = 1;
	else rm[v]++;
    }
    for (auto vp : rm){
	if (vp.second > mv) mv = vp.second;
    }
    cout << mv;
}
