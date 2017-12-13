#include <iostream>
using namespace std;


bool check(int x){
    int c3 = x, c7 = x;
    while (c3 > 0){
	if (c3 % 7 == 0) return true;
	c3 -= 3;
    }
    while (c7 > 0){
	if (c7 % 3 == 0) return true;
	c7 -= 7;
    }
    return false;
}

int main(){
    int n, v;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
	scanf("%d", &v);
	printf((check(v) ? "YES\n" : "NO\n")); 	
    }
}
