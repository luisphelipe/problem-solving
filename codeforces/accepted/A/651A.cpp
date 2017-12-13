#include <iostream>
using namespace std;


int main(){
    int a, b, count=0;
    scanf("%d %d", &a, &b);

    while (a > 0 && b > 0 && a+b > 2) {
	if (a < b) {
	    a++;
	    b -= 2;
	} else {
	    b++;
	    a -= 2;
	}
	count++;
    }
    cout << count;
}
