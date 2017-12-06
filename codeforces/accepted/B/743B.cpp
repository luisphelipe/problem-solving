#include <iostream>
using namespace std;


int main(){
    int a, t=1;
    long long b;
    cin >> a >> b;
    while (b%2 == 0) {
	b /= 2;
	t++;
    }
    cout << t << endl;
}
