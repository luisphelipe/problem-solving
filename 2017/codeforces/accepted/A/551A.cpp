#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, tmp, arr[2000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", arr+i);
    vector<int> rv(arr, arr+2000);
    sort(rv.begin(), rv.end(), [](int a, int b) {return a > b;});
    for (int i = 0; i < n; i++) {
	tmp = arr[i];
	arr[i] = 1;
	for (int q = 0; rv[q] > tmp; q++) {
	    arr[i]++;
	}
	printf("%d ", arr[i]);
    }
    cout << endl;
}
