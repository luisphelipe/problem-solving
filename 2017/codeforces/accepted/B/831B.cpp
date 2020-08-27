#include <iostream>
#include <cctype>
#include <map>
using namespace std;


int main () {
    string a, b, c;
    cin >> a >> b >> c;
    map<char, char> mc;
    for (int i = 0; i < 26; ++i)
	mc[a[i]] = b[i];
    for (char ch : c) {
	if (isdigit(ch)) cout << ch;
	else if (isupper(ch)) cout << (char) toupper(mc[tolower(ch)]);
	else cout << (char) mc[ch];
    }
    cout << endl;
}
