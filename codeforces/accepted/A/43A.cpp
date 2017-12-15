#include <iostream>
#include <map>
using namespace std;


int main(){
    int n, i;
    string v;
    map<string, int> rm;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
	cin >> v;
	if (rm.count(v) > 0) rm[v]++;
	else rm[v] = 1;
    }
    if ((*rm.rbegin()).second > (*rm.begin()).second)
	cout << (*rm.rbegin()).first << endl;
    else
	cout << (*rm.begin()).first << endl;
}
