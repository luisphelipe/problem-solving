#include <iostream>
using namespace std;


int main () {
    int n, i, v, t = 1, edge[10'001], color[10'001];
    scanf("%d", &n);
    for (i = 1; i < n; ++i) scanf("%d", edge+i);
    for (i = 0; i < n; ++i) scanf("%d", color+i);
    for (i = 1; i < n; i++) {
	if (color[edge[i]-1] != color[i])
	    t++;
    }
    cout << t << endl;
}
