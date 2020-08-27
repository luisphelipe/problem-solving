#include <iostream>
using namespace std;


int main(){
    long long x;
    int n, v, i, dc=0;
    char ch;
    cin >> n >> x;
    for (i = 0; i < n; i++) {
	scanf(" %c %d", &ch, &v);
	if (ch == '+') x += v;
	else if (v > x) dc++;
	else x -= v;
    }
    cout << x << " " << dc << endl;;
}
