#include <stdio.h>


int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%f", a-(a*c)/(b+c));
    return 0;
}
