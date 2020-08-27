#include <iostream>
#include <queue>
using namespace std;


int main(){
    int n, x, y, i, q, arr[50][50] = {};
    queue<int> rq;
    scanf("%d", &n);
    for (i = 0; i < n*n; i++) {
	scanf("%d %d", &x, &y);
	if (arr[x-1][y-1] == 0) {
	    rq.push(i+1);
	    for (q = 0; q < n; q++){
		arr[x-1][q] = 1;
		arr[q][y-1] = 1;
	    }
	}
    }
    while (rq.size() > 0){
	cout << rq.front() << " ";
	rq.pop();
    }
    cout << endl;
}
