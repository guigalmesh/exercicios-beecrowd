#include <stdio.h>

int main(){
    int n, km = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int v, t;
        scanf("%d %d", &t, &v);
        km += t * v;
    }
    printf("%d\n", km);
    return 0;
}