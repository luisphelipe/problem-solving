#include <stdio.h>

int main()
{
    int n, min, before, after, result = 1;
    scanf("%d", &n);

    scanf("%d %d", &before, &after);
    if (before != after)
        result = 2;

    min = before;


    for(int i = 1; i < n; i++){
        scanf("%d %d", &before, &after);
        if (before != after){
            result = 2;
            break;
        }
        if (before > min)
            result = 0;

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
