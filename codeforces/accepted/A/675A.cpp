#include <iostream>
using namespace std;


int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (c == 0 || a == b) 
	cout << (a == b ? "YES" : "NO") << endl;
    else if (abs(a-b) % c == 0 && abs(a+c-b) < abs(a-b)) 
	cout << "YES" << endl;
    else
	cout << "NO" << endl;
}
