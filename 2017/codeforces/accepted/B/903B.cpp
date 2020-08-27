#include <iostream>
#include <vector>
using namespace std;


int main(){
    int h1, a1, c1, h2, a2, t=0;
    vector<bool> rv;
    scanf("%d %d %d %d %d", &h1, &a1, &c1, &h2, &a2);
    while (h2 > 0) {
	t++;
	if (h1 <= a2 && !(h2 <= a1)) {
	    rv.push_back(false);
	    h1 += c1;
	}
	else {
	    rv.push_back(true);
	    h2 -= a1;
	}
	h1 -= a2;
    } 
    cout << t << endl;
    for (bool v : rv) {
	printf((v ? "STRIKE\n" : "HEAL\n"));
    }
}
