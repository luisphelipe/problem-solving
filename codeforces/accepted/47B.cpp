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
	cm[gd(wh[0])].second += (wh[1] == '>' ? 1 : -1);
    }
    sort(cm.begin(), cm.end(), [](auto &r1, auto &r2){
	    return r1.second > r2.second; });
    
    int sabs=0;     
    for (int i = 2; i >= 0; i--)
	sabs += abs(cm[i].second);
    if (sabs != 3) {
	cout << "Impossible" << endl;
	return 0;
    }

    for (int i = 2; i >= 0; i--)
	cout << cm[i].first;
    cout << endl;
}
