#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, i, m=0;
    scanf("%d", &n);
    vector<int> rv(n);
    for (i = 0; i < n; ++i) scanf("%d", &rv[i]);
    for (i = n-1; i >= 0; --i) {
	if (rv[i] > m) {
	    m = rv[i];
	    rv[i] = 0;
	}
	else rv[i] = m + 1 - rv[i];
    }
    for (i = 0; i < n; ++i) printf("%d ", rv[i]);
    printf("\n");
}
