#include <iostream>
using namespace std;


int main(){
    int n, i, v, arr[101] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
	scanf("%d", &v);
	arr[v]++;
    }
    for (i = 1; i < 101; ++i) {
	for (v = i+1; v < 101 && arr[i] != 0; ++v) {
	    if (arr[i] == arr[v] && arr[i] + arr[v] == n) {
		cout << "YES\n" << i << " " << v << endl;
		return 0;
	    } 
	}
    }
    cout << "NO" << endl;
}
