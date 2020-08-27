#include <iostream>
using namespace std;


int main () {
    int a, b, x, y;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    cout << max(abs(a-x), abs(b-y)) << endl;
}
