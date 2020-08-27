#include <iostream>
#include <cmath>
using namespace std;


int main(){
    long long t, v, arr[33];
    int n, i, q;
    scanf("%d", &n);
    for (i = 0; i < 33; ++i)
	arr[i] = (long long) pow(2, i);
    for (i = 0; i < n; ++i) {
	cin >> v;
	t = (v*(v+1))/2;
	for (q = 0; arr[q] <= v; ++q)
	    t -= arr[q]*2;	
	cout << t << endl;
    }
}
