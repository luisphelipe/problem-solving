#include <iostream>
#include <queue>
using namespace std;


int main () {
    int n, i, v;
    bool f = true;
    queue<int> rq, nrq;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) rq.push(i);
    if (n % 2 == 0 && n > 3) {
	rq.push(rq.front());
	rq.pop();
    }
    nrq.push(rq.front());
    rq.pop();
    while (f) {
	f = false;
	for(i = 0; i < rq.size(); i++) {
	    v = rq.front();
	    rq.pop();
	    if (abs(nrq.back() - v) >= 2) {
		nrq.push(v);
		f = true;
	    }
	    else 
		rq.push(v);
	}
    }
    cout << nrq.size() << endl;
    while (nrq.size()) {
	cout << nrq.front() << " ";
	nrq.pop();
    }
    cout << endl;
}
