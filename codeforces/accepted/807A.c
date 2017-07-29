#include <stdio.h>

int main()
{
    int n, min, before, after, result = 1;
    scanf("%d", &n);


    for(int i = 0; i < n; i++){
        scanf("%d %d", &before, &after);
        if (before != after){
            result = 2;
            break;
        }
	if (i == 0)
	    min = before;

        if (before > min)
            result = 0;
	
	if (before < min)
	    min = before;
    }

    if (result == 2)
        printf("rated");
    else if (result == 1)
        printf("maybe");
    else
        printf("unrated");

    return 0;
}
