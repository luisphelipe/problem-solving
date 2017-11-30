#include <iostream>
using namespace std;


int main(){
    int n, a, b, q, w;
    bool possible = true;
    cin >> n;
    cin >> a;
    b = 7-a;

    for(int i = 0; i < n; i++){
	cin >> q >> w;
	if(a == q || a == w || b == q || b == w) 
	    possible = false;
    }

    cout << (possible ? "YES" : "NO") << endl;
    return 0;
}
