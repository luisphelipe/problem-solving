#include <iostream>
using namespace std;


int main(){
    string a[4]; 
    for(string &d : a) cin >> d;

    int i, q, total;
    bool flag = false;
    for(i = 0; i < 3 && !flag; i++){
	for(q = 0; q < 3 && !flag; q++){
	    total = (a[i].at(q) == '#' ? 1 : 0);
	    total += (a[i].at(q+1) == '#' ? 1 : 0);
	    total += (a[i+1].at(q) == '#' ? 1 : 0);
	    total += (a[i+1].at(q+1) == '#' ? 1 : 0);
	    
	    if(total != 2) flag = true;
	}
    }

    printf(flag ? "YES\n" : "NO\n");
    return 0;
}
