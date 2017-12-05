#include <iostream>
using namespace std;


int main(){
    int n, a=0, i=0;
    char ch;
    scanf("%d\n", &n);
    for (int q = 0; q < n; q++){
	scanf("%c", &ch);
	if (ch == 'A') a++;
	if (ch == 'I') i++;
    }

    if (i == 1) printf("1\n");
    else if (i > 1 || a == 0) printf("0\n");
    else printf("%d\n", a);
}
