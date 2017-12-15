#include <algorithm>
#include <iostream>
using namespace std;


int main(){
    long long s=0;
    int n, i, v, t=0, arr[100000];
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
	scanf("%d", arr+i);
    sort(arr, arr+n);
    for (i = 0; i < n; ++i) {
	v = arr[i];
	if (v >= s) {
	    s += v;
	    t++;
	}
    }
    cout << t << endl;
}
