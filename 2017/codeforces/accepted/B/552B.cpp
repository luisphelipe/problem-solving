#include <iostream>
using namespace std;


int main(){
    long long n, v = 9, t = 0;
    int i = 1;
    cin >> n;
    while (n) {
	t += min(n, v)*i;
	n -= min(n, v);
	v *= 10;
	i++;
    }
    cout << t << endl;
}
