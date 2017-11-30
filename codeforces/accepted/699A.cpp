#include <iostream>
using namespace std;


int main(){
    char s[200002];
    int n, l=-1, r=-1, m=-1;
    scanf("%d %s", &n, s);
    for(int i = 0; i < n; i++){
	scanf("%d", &(s[i] == 'L' ? r : l));
	if(r != -1 && l != -1){
	    if(r > l && ((r-l)/2 < m || m == -1)) m = (r-l)/2;
	}
    }

    printf("%d\n", (m != -1 ? m : -1));
    return 0;
}
