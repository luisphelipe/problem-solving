#include <iostream>
#include <cmath>
using namespace std;


bool cp (int a, int b) {
    bool r = true;
    for (int i = 2; i <= a; ++i) {
	if (a % i == 0 && b % i == 0) r = false;
    }
    return r;
}

int main () {
    int n, a, b;
    scanf("%d", &n);
    a = (n - 1) / 2;
    b = n - a;
    while (!cp(a, b)) {
	a--;
	b++;
    }
    cout << a << " " << b << endl;
}
