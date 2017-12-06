#include <iostream>
using namespace std;


int main(){
    int n, i;
    scanf("%d", &n);
    for (i = n; n; n--, i++)
	printf("%d ", i);
}
