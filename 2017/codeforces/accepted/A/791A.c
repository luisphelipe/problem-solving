#include <stdio.h>


int main()
{
    int l, b, y = 0;
    scanf("%d %d", &l, &b);

    while ( l <= b ){
	l *= 3;
	b *= 2;
	y++;
    }

    printf("%d", y);
    return 0;
}
