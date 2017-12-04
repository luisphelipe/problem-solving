#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;


int rnd(int *seed){
    int ret = *seed;
    *seed = (int) (((long long) (*seed) * 7 + 13) % 1000000007);
    return ret;
}

void op1(ll *arr, int l, int r, int x){
    for(int i=l-1; i < r; i++)
	arr[i] = arr[i] + x;
}

void op2(ll *arr, int l, int r, int x){
    for(int i=l-1; i < r; i++)
	arr[i] = x;
}

void op3(ll *arr, int l, int r, int x){
    vector<int> v(arr+l-1, arr+r+1);
    sort(v.begin(), v.end());
    printf("%lld\n", v[x-1]);
}

void op4(ll *arr, int l, int r, int x, int y){
    ll w, s=0;
    for(int i=l-1; i < r; i++){
	w = arr[i];
	for(int q=1; q < x; q++){
	    w *= arr[i];
	    if (w > y) w %= y;
	}
	s += w;
    }

    printf("%lld\n", s%y);
}


int main(){
    int i, n, m, seed, vmax, op, l, r, x, y;
    ll *arr;
    scanf("%d %d %d %d", &n, &m, &seed, &vmax);
    arr = (ll*) malloc(n * sizeof(ll));
    for(i=0; i<n; ++i) arr[i] = ((ll) rnd(&seed) % vmax) + 1;
    for(i=0; i<m; ++i){
	op = (rnd(&seed) % 4) + 1;
	l = (rnd(&seed) % n) + 1;
	r = (rnd(&seed) % n) + 1;

	if (l > r) {
	    int temp = l;
	    l = r;
	    r = temp;
	}

	if (op == 3) x = (rnd(&seed) % (r-l + 1)) + 1;
	else x = (rnd(&seed) % vmax) + 1;
	if (op == 4) y = (rnd(&seed) % vmax) + 1;
	
	//printf("%d %d %d %d %d\n", op, l, r, x, op == 4 ? y : -1);
	if (op == 1) op1(arr, l, r, x);
	if (op == 2) op2(arr, l, r, x);
	if (op == 3) op3(arr, l, r, x);
	if (op == 4) op4(arr, l, r, x, y);

    }
