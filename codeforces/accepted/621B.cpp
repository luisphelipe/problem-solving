#include <iostream>
using namespace std;


int main(){
    int n, i, r, c, d, t = 0, arr[4000] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
	scanf("%d %d", &r, &c);
	t += arr[3000 + c - r]++;
	t += arr[c + r]++;
    }
    printf("%d\n", t);
}
