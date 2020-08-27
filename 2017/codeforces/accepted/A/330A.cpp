#include <iostream>
using namespace std;


int main(){
    int row, col, r, c, t=0, v, arr[10][10];
    char ch;
    bool b;
    cin >> row >> col;
    for (r = 0; r < row; r++) {
	for (c = 0; c < col; c++) {
	    cin >> ch;
	    arr[r][c] = (ch == 'S' ? -1 : 1);
	}
    }
    for (r = 0; r < row; r++) {
	b = true;
	for (c = 0; c < col; c++)
	    if (arr[r][c] == -1) b = false; 
	for (c = 0; c < col && b; c++)
	    t += arr[r][c]--;
    }
    for (c = 0; c < col; c++) {
	b = true;
	for (r = 0; r < row; r++)
	    if (arr[r][c] == -1) b = false;
	for (r = 0; r < row && b; r++) 
	    t += arr[r][c];
    }
    cout << t << endl;
}
