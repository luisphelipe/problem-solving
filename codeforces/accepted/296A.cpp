#include <iostream>
using namespace std;


int main(){
    int n, val, v[1000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
	scanf("%d", &val);
	v[val-1]++;
    }

    bool flag = true;
    for(int qnt : v){
	if(qnt > (n+1)/2) flag = false;
    }

    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
