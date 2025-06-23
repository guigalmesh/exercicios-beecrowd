#include <stdio.h>

int pot(int n, int p){
    int r = n;
    for(int i = 1; i < p; i++){
        r *= n;
    }
    return r;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int p1 = pot(i, 2);
        int p2 = pot(i, 3);
        printf("%d %d %d\n", i, p1, p2);
    }
    return 0;
}