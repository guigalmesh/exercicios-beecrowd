#include <stdio.h>

int main(){
    int x = 1, xp = 1;
    do{
        scanf("%d %d", &x, &xp);
        if(x != 0)
            printf("%d\n", xp * x);
    }while(x != 0);
    return 0;
}