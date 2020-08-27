#include <iostream>
using namespace std;


int main(){
    string p;
    cin >> p;
    int l = 0, r = p.size() - 1, c = 0;
    while (l < r) {
	if (p[l] != p[r])  c++;
	if (c > 1) break;
	++l; --r;
    }
    cout << (c == 1 || (c == 0 && p.size()%2 == 1) ? "YES" : "NO") << endl;
}
