#include <iostream>
using namespace std;


int main(){
    int n, arr[105][105] = {0};
    bool re = true;
    char ch;
    scanf("%d", &n);
    for (int r = 1; r <= n; r++) {
	for (int c = 1; c <= n; c++) {
	    scanf(" %c", &ch);
	    if (ch == 'o') {
		arr[r+1][c]++;
		arr[r][c+1]++;
		arr[r-1][c]++;
		arr[r][c-1]++;
	    }
	}
    }
    for (int r = 1; r <= n; r++) {
	for (int c = 1; c <= n; c++) {
	    if (arr[r][c] % 2 == 1)
		re = false;
	}
    }
    cout << (re ? "YES" : "NO") << endl;
}
