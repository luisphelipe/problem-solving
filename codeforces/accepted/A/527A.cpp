#include <iostream>
using namespace std;


int main(){
    long long c, b, a, t=0;
    cin >> b >> a;
    while (a > 0) {
	t += (long long) b/a;
	b %= a;
	c = b;
	b = a;
	a = c;
    }
    cout << t << endl;
}
