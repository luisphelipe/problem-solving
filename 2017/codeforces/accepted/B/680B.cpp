#include <iostream>
using namespace std;


int main(){
    int n, l, ld, t=0, arr[200] = {0};
    cin >> n >> l;
    for (int i = 0; i < n; i++) scanf("%d", arr+i);
    for (int i = 0; i < n; i++) {
	ld = l + (l - i - 1) - 1;
	if (arr[i] && (arr[ld] || ld >= n || ld < 0))
	    t++;
    }
    cout << t << endl;
}
