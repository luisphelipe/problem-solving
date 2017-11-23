#include <stdio.h>


int main(){
    int array[] = { 1, 1, 0 };
    int n, atual, flag=1;


    scanf("%d", &n);
    for(int i = 0; i < n; i++){
	scanf("%d", &atual);

	if(!array[atual-1]){
	    printf("NO");
	    return 0;
	}
	
	for(int q=0; q < 3; q++){
	    if(q != atual-1)
		array[q] = !array[q];
	}
    }

    printf("YES");
    return 0;
}
