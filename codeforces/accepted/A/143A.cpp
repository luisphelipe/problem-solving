#include <iostream>
using namespace std;


int main(){
    int b[4], s[6];
    bool result = false;

    for(int i=0; i < 6; i++) cin >> s[i];

    for(int x=1; x <= 9 && !result; x++){
	result = true;

	b[0] = x;
	b[1] = s[0]-x;
	b[2] = s[2]-x;
	b[3] = s[3]-b[1];

	for(int q=0; q < 4; q++){
	    for(int w=q+1; w < 4; w++){
		if(b[q] == b[w]) result = false;
	    }
	    if(b[q] < 1 || b[q] > 9) result = false;
	}

	if(s[1] != b[2] + b[3]) result = false;
	if(s[4] != b[0] + b[3]) result = false;
	if(s[5] != b[1] + b[2]) result = false;
    }

    if (result){
	cout << b[0] << " " << b[1] << endl;
	cout << b[2] << " " << b[3] << endl;
    }  else cout << "-1" << endl;
    return 0;
}
