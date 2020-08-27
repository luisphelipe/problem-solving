#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, k, v, msum, sum=0, mi=1;
    scanf("%d %d", &n, &k);
    vector<int> rv(k, 0);
    for (int i = 0; i < n; i++){
	scanf("%d", &v);
	sum -= rv[i%k];
	sum += v;
	rv[i%k] = v;
	if (i < k) msum = sum;
	else if (sum < msum) {
	    msum = sum;
	    mi = i+2-k;
	}
    }
    cout << mi << endl;
}
