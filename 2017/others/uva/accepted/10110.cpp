#include <iostream>
#include <cmath>
using namespace std;


int main(){
    unsigned v, sq;
    while (scanf("%d", &v), v) {
	sq = sqrt(v);
	printf("%s\n", (sq*sq == v ? "yes" : "no"));
    }
}
