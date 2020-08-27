#include <iostream>
using namespace std;


int main(){
    int b, g, v, ab[101] = {0}, ag[101] = {0}, t = 0, add;
    scanf("%d", &b);
    for (int i = 0; i < b; i++) {
	scanf("%d", &v);
	ab[v-1]++;
    }
    scanf("%d", &g);
    for (int i = 0; i < g; i++) {
	scanf("%d", &v);
	ag[v-1]++;
    }
    int q = 0, w = 0;
    while (q < 100 && w < 100) {
	while (!ab[q] && q < 100) q++;
	while (!ag[w] && w < 100) w++;
	if (abs(q-w) <= 1) {
	    add = min(ab[q], ag[w]);
	    ab[q] -= add;
	    ag[w] -= add;
	    t += add;
	} else if (q > w) {
	    while (q - w > 1) w++;
	} else if (w > q) {
	    while (w - q > 1) q++;
	} 
    }
    cout << t << endl;
}
