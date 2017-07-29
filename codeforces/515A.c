#include <stdio.h>

int main()
{
    int a, b;
    unsigned int c, d;

    scanf("%d %d %u", &a, &b, &c);
    d = abs(a)+abs(b);
    if (d <= c && d%2 == c%2) printf("Yes");
    else printf("No");

    return 0;
}
