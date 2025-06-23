#include <stdio.h>

int main(){
    int c, n, p;
    scanf("%d %d", &c, &n);
    p = c % n;
    printf("%d\n", p);
    return 0;
}