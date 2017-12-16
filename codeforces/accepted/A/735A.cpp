#include <iostream>
using namespace std;


int main () {
    char ch;
    int n, k, i, c = -1;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; ++i) {
	scanf(" %c", &ch);
	if (c != -1) c++;
	if ((c > 0 && c % k == 0 && ch == '#') 
	|| (c > 0 && (ch == 'G' || ch == 'T') && c % k != 0)) {
	    cout << "NO" << endl;
	    return 0;
	}
	if (c == -1 && (ch == 'T' || ch == 'G')) c++;
	if (c > 0 && (ch == 'T' || ch == 'G')) break;
    }
    cout << "YES" << endl;
}
