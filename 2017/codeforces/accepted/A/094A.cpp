#include <iostream>
#include <vector>
using namespace std;

int main(){
    string pw; cin >> pw;
    vector<string> dg(10);
    for(int i = 0; i < 10; i++) cin >> dg[i];
    for(int i = 0; i < 8; i++){
	for(int q = 0; q < 10; q++){
	    if(pw.substr(i*10, 10) == dg.at(q))
		printf("%d", q);
	}
    }

    return 0;
}
