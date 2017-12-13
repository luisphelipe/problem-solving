#include <iostream>
using namespace std;


int main(){
    int a, b, z, i, oa, ob;
    scanf("%d %d %d", &a, &b, &z);
    oa = a, ob = b;
    while (a != b && a < z) {
	if (a < b) a += ((b-a)/oa) * oa;
	if (a < b) a += oa;
	if (b < a) b += ((a-b)/ob) * ob;
	if (b < a) b += ob;
    }
    cout << z/a << endl;
}
