#include <iostream>
using namespace std;


int main(){
    int n, m, t=0, a, b=0;
    scanf("%d %d", &n, &m);
    for (a = 0; a <= n && b >= 0; a++){
	b = n - a*a;
	if (b*b + a == m && b >= 0)
	    t++;
    }
    cout << t << endl;
}
