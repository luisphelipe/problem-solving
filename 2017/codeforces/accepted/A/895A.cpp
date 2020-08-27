#include <algorithm>
#include <iostream>
using namespace std;


int main(){
    int n, i, a=0, b=0, arr[360];
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", arr+i);
    sort(arr, arr+n);
    while (n) {
	n--;
	if (a < b) a += arr[n];
	else b += arr[n];
    }
    cout << abs(a-b) << endl;
}
