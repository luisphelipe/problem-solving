#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main(){
    int i, v;
    map<int, int> rm;
    for (i = 0; i < 6; i++){
	cin >> v;
	if (rm.count(v) > 0) rm[v]++;
	else rm[v] = 1;
    }
    vector<int> rv;
    for (auto r : rm) rv.push_back(r.second);
    sort(rv.begin(), rv.end());
    if (rv.size() > 3 || rv.back() < 4) {
	cout << "Alien" << endl;
	return 0;
    }
    if (rv.back() == 4) rv.pop_back();
    if (rv.size() == 2) cout << "Bear" << endl;
    else cout << "Elephant" << endl;
}
