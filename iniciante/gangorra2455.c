#include <stdio.h>

int main(){
    int c1, c2, p1, p2;
    scanf("%d %d %d %d", p1, c1, p2, c2);
    if(p1 * c1 == p2 * c2)
        printf("0\n");
    else{
        if(p1 * c1 < p2 * c2)
            printf("1\n");
        else
            printf("-1\n");
    }
    return 0;
}