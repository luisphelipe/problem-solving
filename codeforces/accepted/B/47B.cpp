#include <algorithm>
#include <iostream>
#include <vector>
#define gd(x) (x-'A')
using namespace std;


int main(){
    string wh;
    vector<pair<char, int>> cm = {{'A', 0}, {'B', 0}, {'C', 0}};
    for (int i = 0; i < 3; i++){
	cin >> wh;
	if (wh[1] == '>') cm[gd(wh[0])].second++;
	else cm[gd(wh[2])].second++;
    }
    sort(cm.begin(), cm.end(), [](auto &r1, auto &r2){
	    return r1.second > r2.second; });
    
    if (cm[0].second == 1) {
	cout << "Impossible" << endl;
	return 0;
    }

    for (int i = 2; i >= 0; i--)
	cout << cm[i].first;
    cout << endl;
}
