#include <iostream>
using namespace std;


int main(){
    int n, a, b;
    bool up = true;
    scanf("%d", &n);
    scanf("%d", &b);
    for (int i = 1; i < n; i++) {
	a = b;
	scanf("%d", &b);	
    }
    if (n == 1 && b != 15 && b != 0) { cout << -1 << endl; return 0; }
    if ((b == 15 || b < a) && b != 0) up = false; 
    cout << (up ? "UP" : "DOWN") << endl;
}
