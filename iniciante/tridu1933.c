#include <stdio.h>

int main(){
    int c1, c2, c3;
    scanf("%d %d", &c1, &c2);
    if(c1 > c2)
        c3 = c1;
    else
        c3 = c2;
    printf("%d\n", c3);
    return 0;
}