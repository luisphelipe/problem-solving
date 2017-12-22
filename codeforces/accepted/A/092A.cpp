#include <iostream>
using namespace std;


int main () {
    int a, b, v, r;
    scanf("%d %d", &a, &b);
    if (b >= (a*(a+1))/2) b = b % ((a*(a+1))/2);
    for (int i = 1; i <= a; i++) {
	if (b >= i) b -= i;
	else break;
    }
    cout << b << endl;
}
