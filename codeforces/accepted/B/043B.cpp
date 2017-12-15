#include <iostream>
#include <map>
using namespace std;


int main(){
    map<char, int> cmap;
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for(char c : a){
	if(c == ' ') continue;
	if(cmap.count(c) == 1) cmap[c]++;
	else cmap[c] = 1;
    }

    bool flag=true;
    for(char c : b){
	if(c == ' ') continue;
	if(cmap.count(c) == 0) { flag=false; break; }
	if(cmap[c] == 0) { flag=false; break; }
	cmap[c]--;
    }

    cout << (flag ? "YES" : "NO") << endl;
}
