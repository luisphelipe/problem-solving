#include <iostream>
using namespace std;


int main(){
    int n, k, l, r, s=0;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++){
	scanf("%d %d", &l, &r);
	s += r-l+1;
	s %= k;
    }

    printf("%d\n", s ? k-s : 0);
    return 0;
}
