#include <iostream>
using namespace std;


int main(){
    int n, k, a, b, c;
    cin >> n >> k >> c;
    cout << c << " ";
    for(int i = 0; i < n; i++){
	a = c;
	cin >> b >> c;
	if (b-1 > a && b-1 > c && k > 0){ 
	    b--; k--;
	}
	cout << b << " " << c << " ";
    }

    cout << endl;
    return 0;
}
