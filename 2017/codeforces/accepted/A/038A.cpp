#include <iostream>
using namespace std;


int main () {
    int n, i, arr[105] = {0}, a, b, t = 0;
    cin >> n;
    for (i = 1; i < n; ++i)
	scanf("%d", arr+i);
    scanf("%d %d", &a, &b);
    for (i = a; i < b; i++)
	t += arr[i];
    cout << t << endl;
}
