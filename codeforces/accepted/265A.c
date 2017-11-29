#include <stdio.h>


int main(){
    char stone[51], command[51];
    int index=0;
    scanf("%s %s", stone, command);
    for(int i = 0; command[i] != '\0'; i++){
	if (stone[index] == command[i]) index++;
    }

    printf("%d\n", index+1);
    return 0;
}
