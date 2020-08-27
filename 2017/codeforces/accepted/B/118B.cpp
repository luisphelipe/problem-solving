#include <iostream>
using namespace std;


int main(){
    int n, v, i, s;
    cin >> n;
    for (i = 0; i <= n; i++) {
	for (s = 0; s < n-i; s++)
	    cout << "  ";
	for (v = 0; v <= i; v++) {
	    if (i == 0) cout << v;
	    else cout << v << " ";
	}
	for (v -= 2; v >= 0; v--) {
	    if (v != 0) cout << v << " ";
	    else cout << v; 
	}
	cout << endl;
    }
    for (i -= 2; i >= 0; i--) {
	for (s = 0; s < n-i; s++)
	    cout << "  ";
	for (v = 0; v <= i; v++) {
	    if (i == 0) cout << v;
	    else cout << v << " ";
	}
	for (v -= 2; v >= 0; v--) {
	    if (v != 0) cout << v << " ";
	    else cout << v; 
	}
	cout << endl;
    }
}
