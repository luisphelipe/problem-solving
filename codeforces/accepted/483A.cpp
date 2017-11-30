#include <iostream>
using namespace std;


bool h1(long long int a, long long int b){
    for(int i = 2; i <= b-a; i++){
	if(a%i == 0 && b%i == 0) return false;
    } return true;
}

int main(){
    unsigned long long int a, b, c, l, r;
    bool flag = true;
    scanf("%llu %llu", &l, &r);

    for(a = l; a <= r && flag; a++){
	for(b = a+1; b <= r && flag; b++){
	    if(h1(a, b)){
		for(c = b+1; c <= r && flag; c++){
		    if(h1(b, c)){
			if(!h1(a, c)) flag = false;
		    }
		} 
	    }
	}
    }

    if (flag) printf("-1\n");
    else printf("%llu %llu %llu\n", a-1, b-1, c-1); 
    return 0;
}
