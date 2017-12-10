#include <iostream>
#define MAX 100005
using namespace std;


int main(){
    int n, i, mx=0, arr[MAX], ev[MAX] = {0}, od[MAX] = {0},
	EV[MAX] = {0}, OD[MAX] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", arr+i); 
    for (i = 0; i < n; i++) {
	arr[i] = (i < n-1 ? abs(arr[i] - arr[i+1]) : arr[i]); 
	ev[i] = arr[i] * (i%2?1:-1);
	od[i] = arr[i] * (i%2?-1:1);
    }
    for (int i = n-2; i >= 0; i--) {
	EV[i] = max(EV[i+1]+ev[i], ev[i]+ev[i+1]+ev[i+2]);
	OD[i] = max(OD[i+1]+od[i], od[i]+od[i+1]+od[i+2]);
    }
    for (int i = 0; i < n-2; i++) {	
	if (EV[i] > mx && n > 2) mx = EV[i];
	if (OD[i] > mx && n > 3) mx = OD[i];
    }
    cout << mx << endl;
}
