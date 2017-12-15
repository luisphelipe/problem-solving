#include <iostream>
using namespace std;


int main(){
    int n, i, v, s, arr[100'000];
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
	scanf("%d", arr+i);
    v = arr[n-1];
    for (i = n-2; i >= 0; --i) {
	s = arr[i];
	arr[i] += v;
	v = s;
    }
    for (i = 0; i < n; ++i) 
	printf("%d ", arr[i]);
    cout << endl;
}
