#include <stdio.h>


int val(char str){
    char n[] = { '0', '1', '2', '3', '4' };
    for(int i=0; i < 10; i++){
	if(str == n[i]) return i;
    }
    return -1;
}

int main(){
    int total=0, cal[4];
    for(int i=0; i < 4; i++) scanf("%d", cal+i);
    char s[100001];
    scanf("%s", s);
    for(int i=0; s[i] != '\0'; i++) total += cal[val(s[i])-1];
    printf("%d\n", total);
    return 0;
}
