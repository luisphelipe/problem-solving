#include <iostream>
using namespace std;


int main(){
    string num;
    cin >> num;
    bool r = true;
    int a = 0;
    for (char ch : num) {
	if (ch == '4') a++;
	else a = 0;
	if ((ch != '1' && ch != '4') || a > 2) {
	    r = false;
	    break;
	}
    }
    cout << (r && num[0] != '4' ? "YES" : "NO") << endl;
}
