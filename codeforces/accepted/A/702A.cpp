#include <iostream>
using namespace std;


int main(){
    int n, i, a=1, t=1, an, at;
    scanf("%d %d", &n, &at);
    for (i = 1; i < n; i++) {
	an = at;
	scanf("%d", &at);
	if (at > an) a++;
	else a = 1;
	if (a > t) t = a;
    }
    cout << t << endl;
}
