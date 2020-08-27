#include <iostream>
using namespace std;


int main () {
    char ch;
    int r, c, v, sum = 0,  m[10][10];
    scanf("%c%1d", &ch, &v);
    for (r = 0; r < 10; r++) {
	for (c = 0; c < 10; c++) {
	    if ((r >= 1 && r <= 8) && (c >= 1 && c <= 8)) m[r][c] = 1;
	    else m[r][c] = 0;
	}
    }
    for (r = v-1; r <= v+1; r++) {
	for (c = int(ch)-int('a'); c < int(ch)-int('a')+3; c++)
	    sum += m[r][c];
    }
    cout << sum-1 << endl;
}
