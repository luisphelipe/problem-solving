#include <stdio.h>

int main()
{
    int songs, time, qnt = 0, atual;
    scanf("%d %d", &songs, &time);

    if((songs-1)*10+songs > time) printf("-1");
    else{
        qnt += (songs-1)*2;
        time -= qnt*5;
        for(int i = 0; i < songs; i++) { scanf("%d", &atual); time -= atual; }
        if (time < 0) printf("-1");
        else {
            qnt += time/5;
            printf("%d", qnt);
        }
    }
    return 0;
}
