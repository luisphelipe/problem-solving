#include <iostream>
using namespace std;


int main(){
    int n, arr[2][2] = {0}, x, y, count=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
	scanf("%d %d", &x, &y);
	if (x < 0) y = 0;
	else y = 1;
	if (y < 0) x = 0;
	else x = 1;
	arr[x][y]++;
    }
    for (int i = 0; i < 2; i++) {
	for (int q = 0; q < 2; q++) {
	    if (arr[i][q] >= 1) count++;
	}
    }
    if ((arr[0][0] <= 1 || arr[0][1] <= 1) && (arr[1][0] <= 1 || arr[1][1] <= 1) && count <= 3)
	cout << "YES" << endl;
    else 
	cout << "NO" << endl;
}
