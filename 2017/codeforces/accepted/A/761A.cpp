#include <iostream>
using namespace std;


int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (abs(a-b) <= 1 && a+b > 0)
	cout << "YES" << endl;
    else cout << "NO" << endl;
}
