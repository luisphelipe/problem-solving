#include <iostream>
using namespace std;


int main(){
    int o, d, v, max=0, at=0;
    char ch;
    bool a;
    scanf("%d %d", &o, &d);
    for (int i = 0; i < d; i++) {
	a = false;
	for (int q = 0; q < o; q++) {
	    scanf(" %c", &ch);
	    if (ch == '0') a = true;
	}
	if (a) at++;
	else at = 0;
	if (at > max) max = at;
    }
    cout << max << endl;
}
