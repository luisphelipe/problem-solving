#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, m, arr[1000] ,_max=0, _min=0;
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++) scanf("%d", arr+i);
    sort(arr, arr+m);
    vector<int> armax;
    for(int i=0; i < m; i++){
	for(int q=1; q <= arr[i]; q++)
	    armax.push_back(q);
    }

    sort(armax.begin(), armax.end(), greater<int>());

    for(int i=0, imin=0; i<n; i++) {
	_min += arr[imin];
	_max += armax[i];
	arr[imin]--;
	if (arr[imin] == 0) imin++;
    }

    printf("%d %d\n", _max, _min);
}
