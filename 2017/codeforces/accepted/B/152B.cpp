#include <iostream>
using namespace std;


int main(){
    int n, m, x, y, k, dy, dx, dvy, dvx, add;
    long long s=0;
    scanf("%d %d %d %d %d", &n, &m, &x, &y, &k);
    for (int i = 0; i < k; i++) {
	scanf("%d %d", &dx, &dy);
	if (dx > 0) dvx = (n-x)/dx;
	else if (dx < 0) dvx = (x-1)/abs(dx);
	else dvx = -1;
	if (dy > 0) dvy = (m-y)/dy;
	else if (dy < 0) dvy = (y-1)/abs(dy);
	else dvy = -1;
	add = (min(dvx, dvy) != -1 ? min(dvx, dvy) : max(dvx, dvy));
	x += dx*add;
	y += dy*add;
	s += add;
    }
    cout << s << endl;
}
