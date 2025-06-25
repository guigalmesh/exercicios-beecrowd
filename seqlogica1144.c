#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int k, j;
        k = i * i;
        j = k * i;
        printf("%d %d %d\n", i, k, j);
        printf("%d %d %d\n", i, k + 1, j + 1);
    }
    return 0;
}