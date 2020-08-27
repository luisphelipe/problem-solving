#include <iostream>
using namespace std;


int main(){
    string s;
    char ch;
    int x=0, y=0, q;
    cin >> s;
    for (char c : s){
	if (c == 'y') y++;
	else x++;
    }
    if (x > y) { q = x-y; ch = 'x'; }
    else { q = y-x; ch = 'y'; }
    string re(q, ch);
    cout << re;
}
