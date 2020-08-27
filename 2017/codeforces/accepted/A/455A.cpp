#include <iostream>
using namespace std;


int main(){
    long long arr[100001] = {0};
    int n, i, v;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
	scanf("%d", &v);
	arr[v] += v;
    }
    for (i = 3; i < 100001; i++)
	arr[i] += max(arr[i-2], arr[i-3]);
    cout << max(arr[100000], arr[99999]) << endl;
}
