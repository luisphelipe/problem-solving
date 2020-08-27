#include <iostream>
using namespace std;


int main () {
    string s;
    bool f = false;
    cin >> s;
    for (auto it = s.begin(); it != s.end(); it++) {
	if ((*it == '1' || f) && !(it == s.end()-1 && !f)) 
	    printf("%c", *it);
	else f = true;
    }
}
