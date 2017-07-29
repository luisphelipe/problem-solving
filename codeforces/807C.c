#include <stdio.h>
#include <math.h>

float eps_f();

int main()
{
    int f, x, y, p, q, total, total_t, aux = 0, t;
    double ratio, target, eps = eps_f();;
    scanf("%d", &f);

    for(int i = 0; i < f; i++){
        total = 0, total_t = 0, aux = 0;
        scanf("%d %d %d %d", &x, &y, &p, &q);
        ratio = (double) x/y;
        target = (double) p/q;

        if(p == q && x != y)
            printf("-1");
        else if (fabs(ratio-target)<eps)
            printf("0");
        else{
            while(y > 0 && !aux){
                y++, total++, total_t =  t;
                ratio = (double) x/y;
                target = (double) p/q;

                if (fabs(ratio - target) < eps){
                    break;
                }

                while(total_t < total){
                    total_t++;
                    ratio = (double) (x+total_t)/y;

                    if(fabs(ratio - target) < eps){
                        aux = 1;
                        break;
                    }
                }
            }
            if (y < 0) printf("-1");
            else printf("%d", total);
        }
        printf("\n");
    }

    return 0;
}

float eps_f()
{
    float a = 0.5, s = 1.5;

    while(s > 1){
        a /= 2;
        s = 1 + a;
    }
    return a*2;
}
