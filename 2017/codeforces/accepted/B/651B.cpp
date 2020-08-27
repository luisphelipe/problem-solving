#include <algorithm>
#include <iostream>
using namespace std;


int main(){
    int n, v, i, t, sum=0, arr[1001] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
	scanf("%d", &v);
	arr[v-1]++;
    }
    sort(arr, arr+1000, greater<int>());
    //for(int i = 0; i <= n; i++) cout << arr[i] << " ";
    while(n){
	t = -1;
	for (i = 0; arr[i] > 0; i++){
	    arr[i]--;
	    n--;
	    t++;
	}
	sum += t;
    }
    cout << sum << endl;
}
