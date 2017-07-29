#include <stdio.h>

int pseudo(int, int);

int main()
{
    int vezes_un = 0, vezes_s = 0, c17, cur, min, ps = 0;
    scanf("%d %d %d", &c17, &cur, &min);

    while(cur < min){
        cur += 100;
        vezes_s++;
    }


    while(cur-vezes_un*50 >= min && !ps){
        ps = pseudo(cur-vezes_un*50, c17);
        vezes_un++;
    }

    while(!ps) {
        vezes_un = 0;
        while(cur-vezes_un*50 >= min && vezes_un < 2 && !ps){
            ps = pseudo(cur-vezes_un*50, c17);
            vezes_un++;
        }

        vezes_s += !ps;
        cur += 100;
    }

    printf("%d", vezes_s);

    return 0;
}

int pseudo(int s, int tgt)
{
    int i, tem = 0;

    i = (s/50)%475;
    for (int a = 0; a < 25; a++){
        i = (i*96 + 42)%475;
        if (i+26 == tgt){
            tem = 1;
            break;
        }
    }

    return tem;
}
