#include <iostream>
using namespace std;


int main(){
    int n, mv=1, v;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
	scanf("%d", &v);
	if (v == 1) {
	    mv = -1;
	    break;
	}
    }
    printf("%d\n", mv);
}
