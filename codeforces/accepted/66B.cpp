#include <iostream>
using namespace std;


int main(){
    int n, ant, at, u=1, c=1, ac=1;
    bool up = true;
    scanf("%d %d", &n, &at);

    for (int i = 1; i < n; i++) {
	ant = at;
	scanf("%d", &at);

	if (up && at < ant)
	    up = false;
	else if (!up && at > ant) {
	    if (c > u) u = c;
	    up = true;
	    c = ac;
	}

	if (at == ant) ac++;
	else ac = 1;
	c++;
    }
    cout << (u > c ? u : c) << endl;
}
