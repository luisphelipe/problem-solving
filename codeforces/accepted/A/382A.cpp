#include <iostream>
using namespace std;


int main(){
    string scale, weight;
    cin >> scale >> weight;
    int s, l, r, w;
    s = scale.length();
    l = scale.find('|');
    r = scale.length() -1 - l;
    w = weight.length();

    if ((s-1+w)%2 == 1 || max(l, r) > min(l, r) + w){
	cout << "Impossible" << endl;
	return 0;
    }
    
    for(int i = 0; i < w; i++){
	if (l < r) { scale.insert(0, 1, weight.at(i)); l++; }
	else { scale.append(1, weight.at(i)); r++; }
    }

    cout << scale << endl;
    return 0;
}
