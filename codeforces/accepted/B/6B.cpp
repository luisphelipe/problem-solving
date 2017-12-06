#include <iostream>
#include <set>
using namespace std;


int main(){
    char ch, a, b, str[101][101];
    int n, m, t=0;
    set<char> fs;
    cin >> n >> m >> ch;
    for (int i = 0; i < n; i++)
	cin >> str[i];
    for (int i = 0; i < n; i++){
	for (int q = 0; q < m-1; q++) {
	    a = str[i][q], b = str[i][q+1];
	    if (a != '.' && b != '.' && a != b && (a == ch || b == ch)
		    && fs.count((a == ch? b : a)) == 0) {
		t++; fs.insert((a == ch? b : a)); 
	    }
	}
    }
    for (int q = 0; q < m; q++){
	for (int i = 0; i < n-1; i++) {
	    a = str[i][q], b = str[i+1][q];
	    if (a != '.' && b != '.' && a != b && (a == ch || b == ch)
		    && fs.count((a == ch? b : a)) == 0) {
		t++; fs.insert((a == ch? b : a)); 
	    }
	}
    }
    cout << t << endl;
}
