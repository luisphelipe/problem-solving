#include <iostream>
#include <queue>
using namespace std;


int main(){
    int n, m, i, v;
    queue<pair<int, int>> rq;
    pair<int, int> q;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; ++i) {
	scanf("%d", &v);
	rq.push({v, i+1});
    }
    while (rq.size() > 0) {
	q = rq.front();
	rq.pop();
	if (q.first > m) {
	    q.first -= m;
	    rq.push(q);
	}
    }
    cout << q.second << endl;
}
