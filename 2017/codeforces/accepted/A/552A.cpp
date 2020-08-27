#include <iostream>
using namespace std;


int main(){
    int n, i, x1, y1, x2, y2, t = 0;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	t += (x2-x1+1)*(y2-y1+1); 
    }
    cout << t << endl;
}
