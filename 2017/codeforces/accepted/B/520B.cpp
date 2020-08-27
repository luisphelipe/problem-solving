#include <iostream>
using namespace std;


int main(){
    int a, b, t=0;
    cin >> a >> b;
    while (a != b) {
	t++;
	if (b%2 == 0 && b > a) b /= 2;
	else b++;
    }
    cout << t << endl;
}
