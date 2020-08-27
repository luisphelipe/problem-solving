#include <iostream>
using namespace std;


int main(){
    int n, k, total=0, val, a[10];
    bool flag;
    cin >> n >> k; 

    for(int i=0; i < n; i++){
	for(int &ref : a) ref = 0;
	flag = true; cin >> val;
	while (val){ a[val%10] = 1; val /= 10; } 
	for(int i=0; i <= k; i++){ 
	    if(a[i] == 0) flag = false; 
	} if (flag) total++;
    }
    
    cout << total << endl;
    return 0;
}
