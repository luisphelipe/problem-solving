#include <stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    int atual, ex[] = { 0, 0, 0 };
    for(int i = 0; i < n; i++){
	scanf("%d", &atual);
	ex[i%3] += atual;
    }

    if (ex[0] >= ex[1] && ex[0] >= ex[2]) printf("chest\n");
    if (ex[1] >= ex[0] && ex[1] >= ex[2]) printf("biceps\n");
    if (ex[2] >= ex[0] && ex[2] >= ex[1]) printf("back\n");
    return 0;
}
